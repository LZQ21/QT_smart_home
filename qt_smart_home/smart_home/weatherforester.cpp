#include "weatherforester.h"
#include "ui_weatherforester.h"

#include <QTimer>

weatherForester::weatherForester(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::weatherForester)
{
    ui->setupUi(this);
    initWeather();//初始化界面，定义初始状态，对象初始化



    //返回主界面
    ui->widget_16->setAttribute(Qt::WA_TranslucentBackground);
    connect(ui->btn_back,&QPushButton::clicked,this,[=](){
        this->close();//触发关闭事件，发送信号函数toback到主窗口，析构本界面
    });

    //刷新图片
    QTimer *timer = new QTimer;
    timer->start(200);
    connect(timer,&QTimer::timeout,this,[=](){//在定时结束信号中
    update();
    });

    read_file();//读取文件存入map
    //在发送之前  需要链接处理
    connect(http,&QNetworkAccessManager::finished,this,&weatherForester::handle_info);//网络对象的到请求处理完成后，进行数据处理
    //链接搜索按钮
    connect(ui->btd_serch,&QPushButton::clicked,this,&weatherForester::send_request);//点击搜索按钮，发送请求-
    //创建此界面后，直接先启动请求


}

weatherForester::~weatherForester()
{
    delete ui;
}
/*
 * 将API对应城市名与id存入文档，每次运行时将程序读出，并存入map容器
 * 根据map中key——value的一一对应关系查找id
 */
void weatherForester::read_file()
{
    QFile info(":/new/prefix1/city_info.txt");//构造一个新的文件对象来表示具有给定名称的文件
    //判断文件是否打开
    if(!info.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this,"读取城市id信息","读取失败");
    }
    qDebug() << "打开成功";
    //程序运行时，需要将文本中信息读取到map中
    while(!info.atEnd())//只要没有读到文件尾部就一直读  并且按行读取
    {
        QByteArray data = info.readLine();//按行读取
        //现在data 的格式为 城市id  城市名
        QString info =data;//发生自动类型转换（Qbytearray-》Qstring）
        int ipos = data.indexOf("\t");
        //获取子串
        QString city_id =data.mid(0,ipos);
        QString city_name =data.mid(ipos+1);
        city_name.replace("\r\n","");
        city_info.insert(city_name,city_id);
    }
    qDebug() << city_info.first();
}

void weatherForester::handle_info(QNetworkReply *reply)
{
    //第一步 获取状态码
    int statu = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(statu != 200)
    {
        QMessageBox::critical(this,"网络错误","未找到该程序，请检测网络是否连接");
        return;
    }
    //2.请求成功后，解析数据
    QByteArray data = reply->readAll();//读出所有的数据，将其作为字符数组保存
    qDebug() << "请求成功，获取到文档";
    //1 将其转变成Json文档
    QJsonDocument docu = QJsonDocument::fromJson(data);//将data解析为UTF-8编码的json文档，并从中创建QJsonDocument。
    if(docu.isObject())//如果包含一个对象
    {
        //获取json文档中对象
        QJsonObject obj = docu.object();
        //判断是否在对象中找到cityInfo值
        if(obj.find("cityInfo") != obj.end())//从头找到尾
        {
            QJsonObject obj1 = obj["cityInfo"].toObject();//将obj["data"] 由 jsonVal 类型转化为 jsonobject 类型
            //解析此时数据
            ui->label_parent->setText(obj1["parent"].toString());//获取省市
            ui->label_city->setText(obj1["city"].toString());//获取城市
        }

        if(obj.find("data") != obj.end())//从头找到尾
        {
            obj = obj["data"].toObject();//将Qjsonval转变成jsonobject
            ui->label_notice->setText(obj["ganmao"].toString());//温馨提示
            ui->label_shidu->setText(obj["shidu"].toString());//湿度
            ui->label_quality->setText("空气"+obj["quality"].toString());//空气质量
            qDebug() << obj["wendu"].toString();
            ui->label_tempture->setText(obj["wendu"].toString()+"℃");

            if(obj.find("forecast") != obj.end())
            {
                QJsonArray arry = obj["forecast"].toArray();//将obj["forecast"] 由 jsonVal 类型转化为 jsonarry 类型
                obj = arry[0].toObject();//将数组中转变成json对象
                ui->label_high->setText(obj["high"].toString()+"/");
                ui->label_low->setText(obj["low"].toString());
                qDebug()<< obj["type"].toString();
                ui->label_type->setText(obj["type"].toString());
                //根据type进行动态图判断
                QMovie *movie = decide_movie(obj);

                //设置动图
                ui->label_movie->setMovie(movie);//给labol设置动态图播放
                ui->label_movie->setScaledContents(true);//填充自适应
                ui->label_movie->setAlignment(Qt::AlignCenter);//设置为中间
                movie->start();//开始播放

                ui->label_rise->setText(obj["sunrise"].toString());
                ui->label_down->setText(obj["sunset"].toString());
                ui->label_api->setNum(obj["aqi"].toInt());//设置aqi，val值为数值
                qDebug() << obj["aqi"].toInt();


                ui->label_data->setText((obj["ymd"].toString()));//时间年月日
                ui->label_fx->setText(obj["fx"].toString());
                ui->label_fl->setText(obj["fl"].toString());

                //第一天
                ui->label_week1->setText(obj["week"].toString());
                ui->label_high1->setText(obj["high"].toString());
                ui->label_low1->setText(obj["low"].toString());
                decide(obj,ui->label_icon1);//状态图标匹配
                //第二天
                QJsonObject obj1 = arry[1].toObject();//将数组中转变成json对象
                ui->label_week2->setText(obj1["week"].toString());
                ui->label_high2->setText(obj1["high"].toString());
                ui->label_low2->setText(obj1["low"].toString());
                decide(obj1,ui->label_icon2);//状态图标匹配
                //第三天
                QJsonObject obj2 = arry[2].toObject();//将数组中转变成json对象
                ui->label_week3->setText(obj2["week"].toString());
                ui->label_high3->setText(obj2["high"].toString());
                ui->label_low3->setText(obj2["low"].toString());
                decide(obj2,ui->label_icon3);//状态图标匹配
                //第四天
                QJsonObject obj3 = arry[3].toObject();//将数组中转变成json对象
                ui->label_week4->setText(obj3["week"].toString());
                ui->label_high4->setText(obj3["high"].toString());
                ui->label_low4->setText(obj3["low"].toString());
                decide(obj3,ui->label_icon4);//状态图标匹配
                //第五天
                QJsonObject obj4 = arry[4].toObject();//将数组中转变成json对象
                ui->label_week5->setText(obj4["week"].toString());
                ui->label_high5->setText(obj4["high"].toString());
                ui->label_low5->setText(obj4["low"].toString());
                decide(obj4,ui->label_icon5);//状态图标匹配
                //第六天
                QJsonObject obj5 = arry[5].toObject();//将数组中转变成json对象
                ui->label_week6->setText(obj5["week"].toString());
                ui->label_high6->setText(obj5["high"].toString());
                ui->label_low6->setText(obj5["low"].toString());
                decide(obj5,ui->label_icon6);//状态图标匹配
                //第七天
                QJsonObject obj6 = arry[6].toObject();//将数组中转变成json对象
                ui->label_week7->setText(obj6["week"].toString());
                ui->label_high7->setText(obj6["high"].toString());
                ui->label_low7->setText(obj6["low"].toString());
                decide(obj6,ui->label_icon7);//状态图标匹配
            }
        }
    }
}

void weatherForester::send_request()
{
    //刷新绘图事件
    this->update();
    qDebug() << "发送请求";
    //发送请求我们需要一个地址
    QString url = "http://t.weather.sojson.com/api/weather/city/";
    QString id = city_info[ui->linesearch->text()];//通过 城市名字 去检索城市id
    url += id;//字符串连接
    QUrl request(url);//请求连接
    http->get(QNetworkRequest(request));//通过get获取请求
    qDebug()<<url;
}

void weatherForester::initWeather()
{
    this->i = 0;//设置背景标志位
    this->http = new QNetworkAccessManager(this);//创建网络对象

    //设置日出日落标签
    this->setWindowTitle("天气预报");
    ui->label_icon_rise->setFixedSize(40,40);
    ui->label_icon_rise_2->setFixedSize(40,40);
    ui->label_icon_rise->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/日出.png"));
    ui->label_icon_rise_2->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/日落.png"));
    ui->label_icon_rise->setScaledContents(true);
    ui->label_icon_rise_2->setScaledContents(true);//填充边框

    //设置图标大小
    ui->label_movie->setFixedSize(150,100);
    ui->label_icon1->setFixedSize(40,40);
    ui->label_icon2->setFixedSize(40,40);
    ui->label_icon3->setFixedSize(40,40);
    ui->label_icon4->setFixedSize(40,40);
    ui->label_icon5->setFixedSize(40,40);
    ui->label_icon6->setFixedSize(40,40);
    ui->label_icon7->setFixedSize(40,40);
    //填充
    ui->label_icon1->setScaledContents(true);//填充
    ui->label_icon2->setScaledContents(true);
    ui->label_icon3->setScaledContents(true);
    ui->label_icon4->setScaledContents(true);
    ui->label_icon5->setScaledContents(true);
    ui->label_icon6->setScaledContents(true);
    ui->label_icon7->setScaledContents(true);

}
/*
 * 参数：obj-json对象，label-对象
 */
void weatherForester::decide(QJsonObject obj,QLabel *label)

{
    if(obj["type"].toString()=="晴")//读取天气状态，转换成string类型
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气-晴.png"));
    }
    else if(obj["type"].toString()=="多云")
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气-多云.png"));
    }
    else if(obj["type"].toString()=="阴")
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气-阴.png"));
    }
    else if(obj["type"].toString()=="小雨")
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气-中雨.png"));
    }
    else if(obj["type"].toString()=="小雪")
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气-小雪.png"));
    }
    else if(obj["type"].toString()=="霾")
    {

        label->setPixmap(QPixmap(":/new/prefix1/图片/天气图标/天气，雾.png"));
    }


}

QMovie * weatherForester::decide_movie(QJsonObject obj)
{
    QMovie *movie = new QMovie(":/天气icon/晴天_爱给网_aigei_com.gif");
    if(obj["type"].toString()=="晴")//读取天气状态，转换成string类型
    {
        i = 1;
        movie->setFileName(":/new/prefix1/图片/天气图标/晴天_爱给网_aigei_com.gif");
    }
    else if(obj["type"].toString()=="小雨" || obj["type"].toString()=="大雨")
    {
        i = 4;
        movie->setFileName(":/new/prefix1/图片/天气图标/下雨了_爱给网_aigei_com.gif");
    }
    else if(obj["type"].toString()=="小雪" || obj["type"].toString()=="大雪")
    {
        i = 5;
        movie->setFileName(":/new/prefix1/图片/天气图标/下雪_爱给网_aigei_com.gif");
    }
    else if(obj["type"].toString()=="多云")
    {
        i = 2;
        movie->setFileName(":/new/prefix1/图片/天气图标/部分多云(Partly_Cloudy)_爱给网_aigei_com.gif");
    }
    else if(obj["type"].toString()=="阴天"|| obj["type"].toString()=="霾")
    {
        i = 6;
        movie->setFileName(":/new/prefix1/图片/天气图标/阴天免费动画图标_爱给网_aigei_com.gif");
    }
    return movie;
}

void weatherForester::paintEvent(QPaintEvent *)
{
    {
        QPainter painter(this);
        QPixmap pixmap(":/new/prefix1/天气icon/晴天.png");
        //qDebug() << i ;
        if(i == 0 || i == 1)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/晴天.png");
        }
        else if(i == 2)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/多云.png");
        }
        else if(i == 3)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/阴天.png");
        }
        else if(i == 4)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/下雨.png");
        }
        else if(i == 5)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/下雪.png");
        }
        else if(i == 6)
        {
            pixmap.load(":/new/prefix1/图片/天气图标/霾.png");
        }
        painter.drawPixmap(rect(),pixmap);//保留内部结构
        //painter.setOpacity(0.5);

    }
}
void weatherForester::closeEvent(QCloseEvent *event)
{
    emit toBack();
    event->accept();
}
