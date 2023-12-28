#include "romecontrol.h"
#include "ui_romecontrol.h"

#include <QMessageBox>
#include <QPaintEvent>

RomeControl::RomeControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RomeControl)
{
    ui->setupUi(this);

    initUi();//初始化界面

    timer = new QTimer;

    roominit();
    connect(ui->btd_back,&QPushButton::clicked,this,[=](){
        this->close();//触发关闭事件
    });
    connect(ui->btd_led,&QPushButton::clicked,this,[=](){
        qDebug() << "openled";
        if(cold_1 == 0)
        {
            cold_1 = 1;
            cold_1_state(cold_1);
        }
        else if(cold_1 == 1)
        {
            cold_1 = 0;
            cold_1_state(cold_1);
        }
    });
    connect(ui->btd_air,&QPushButton::clicked,this,[=](){
        qDebug() << "openair";
        if(led_1 == 1)
        {
            led_1 = 0;
            led_1_state(led_1);
        }
        else if(led_1 == 0)
        {

            led_1 = 1;
            led_1_state(led_1);

        }
    });
    initServer();

    connect(ui->btd_set, &QPushButton::clicked, this, [=](){
       num = ui->lineEdit_wendu->text().toInt();
       if(num>27 || num <13)//对其进行判断，如果不在阈值范围中
       {
           timer->start();//定时器开启
           QMessageBox::information(this,"提示","太热了");
       }
    });
    timer->start(4000);
    connect(timer,&QTimer::timeout,this,[=](){//在定时结束信号中
        qDebug() << num;
        if(num > 27 || num<13)//如果不在范围
        {
            if(num>27)//大于，num过一段时间减
            {

                num--;
            }
            if(num<13)//小于，num++
            {

                num++;
            }
            //此时cold空调全部置1
            cold_1 = 1;
            cold_2 = 1;
            cold_3 = 1;
            cold_1_state(cold_1);
            cold_2_state(cold_2);
            cold_3_state(cold_3);
            ui->lineEdit_wendu->setText(QString::number(num));//实时刷新温度数据
        }
        else
        {
            timer->stop();//在范围内，则停止定时器
            cold_1 = 0;
            cold_2 = 0;
            cold_3 = 0;
            cold_1_state(cold_1);
            cold_2_state(cold_2);
            cold_3_state(cold_3);
        }
    });
}

RomeControl::~RomeControl()
{
    delete ui;
}



void RomeControl::led_1_state(int i)
{
    if(i == 1)
    {
        ui->label_led1->setPixmap(QPixmap(":/new/prefix1/图片/家居/开灯.png"));
    }
    else if(i == 0)
    {
        ui->label_led1->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    }
}

void RomeControl::led_2_state(int i)
{
    if(i == 1)
    {
        ui->label_led2->setPixmap(QPixmap(":/new/prefix1/图片/家居/开灯.png"));
    }
    else if(i == 0)
    {
        ui->label_led2->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    }
}

void RomeControl::led_3_state(int i)
{
    if(i == 1)
    {
        ui->label_led3->setPixmap(QPixmap(":/new/prefix1/图片/家居/开灯.png"));
    }
    else if(i == 0)
    {
        ui->label_led3->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    }
}

void RomeControl::led_4_state(int i)
{
    if(i == 1)
    {
        ui->label_led4->setPixmap(QPixmap(":/new/prefix1/图片/家居/开灯.png"));
    }
    else if(i == 0)
    {
        ui->label_led4->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    }
}

void RomeControl::led_5_state(int i)
{
    if(i == 1)
    {
        ui->label_led5->setPixmap(QPixmap(":/new/prefix1/图片/家居/开灯.png"));
    }
    else if(i == 0)
    {
        ui->label_led5->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    }
}

void RomeControl::cold_1_state(int i)
{
    if(i == 1)
    {
        ui->label_air1->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调开.png"));
    }
    else if(i == 0)
    {
        ui->label_air1->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    }
}

void RomeControl::cold_2_state(int i)
{
    if(i == 1)
    {
        ui->label_air2->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调开.png"));
    }
    else if(i == 0)
    {
        ui->label_air2->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    }
}

void RomeControl::cold_3_state(int i)
{
    if(i == 1)
    {
        ui->label_air3->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调开.png"));
    }
    else if(i == 0)
    {
        ui->label_air3->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    }
}

void RomeControl::roominit()//初始状态
{
    //灯全部关
    led_1 = 0;
    led_2 = 0;
    led_3 = 0;
    led_4 = 0;
    led_5 = 0;
    cold_1 = 0;
    cold_2 = 0;
    cold_3 = 0;
    led_1_state(led_1);
    led_2_state(led_2);
    led_3_state(led_3);
    led_4_state(led_4);
    led_5_state(led_5);
    cold_1_state(cold_1);
    cold_2_state(cold_2);
    cold_3_state(cold_3);
}


void RomeControl::initUi()
{
    //ui界面设计
    setWindowTitle("家居");
    setWindowIcon(QIcon(QPixmap(":/new/prefix1/图片/风景/客厅.png")));
    ui->groupBox_room->setFixedSize(400,400);
    ui->label_led1->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    ui->label_led2->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    ui->label_led3->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    ui->label_led4->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));
    ui->label_led5->setPixmap(QPixmap(":/new/prefix1/图片/家居/关灯.png"));

    ui->label_led1->setScaledContents(true);
    ui->label_led2->setScaledContents(true);
    ui->label_led3->setScaledContents(true);
    ui->label_led4->setScaledContents(true);
    ui->label_led5->setScaledContents(true);

    ui->label_air3->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    ui->label_air1->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    ui->label_air2->setPixmap(QPixmap(":/new/prefix1/图片/家居/空调关.png"));
    ui->label_air3->setScaledContents(true);
    ui->label_air1->setScaledContents(true);
    ui->label_air2->setScaledContents(true);
}

void RomeControl::initServer()
{
    this->server = new QTcpServer(this);
    //此时不需要初始套接字对象

    //初始化控件
    //如果没有启动服务器 将无法发送信息
    //ui->btn_connect->setEnabled(false);
    //设置端口号 0-65535  但是最好大于8000
    ui->port->setText("20000");
    ui->label_notice->setText("未连接");

    //设置状态栏
    //this->statusBar()->addWidget(statu);
    //启动服务器
    connect(ui->btn_connect,&QPushButton::clicked,this,[=](){
        //服务器启动后 端口号不能改
        ui->port->setReadOnly(true);

        //启动服务器
        unsigned int port= ui->port->text().toUInt();
        this->server->listen(QHostAddress::Any,port);//QHostAddress("192.168.0.107")

        //将启动按钮置灰
        ui->btn_connect->setEnabled(false);
        QMessageBox::information(this,"启动服务器","启动成功");
    });

    //如果有新的连接 会触发服务器的 newConnection
    connect(this->server,&QTcpServer::newConnection,this,[=](){
        this->socket = this->server->nextPendingConnection();//获取通信的套接字
        //ui->data_recode->append("已有新的客户端连接");
        ui->label_notice->setText("已连接");

        //创建了socket对象，证明已有连接
        connect(timer,&QTimer::timeout,this,[=](){//当一个定时周期结束
            QString send_data;
            send_data = sentdata();
            qDebug() << send_data;
            this->socket->write(send_data.toUtf8());//当温度不在阈值范围内时，在定时器信号中发送
        });

        //ui->btn_connect->setEnabled(true);//发送按钮可以用了

        //有消息发过来了  接收信息
        connect(this->socket,&QTcpSocket::readyRead,this,[=](){
            QByteArray data = this->socket->readAll();
            //data为接受数据
            qDebug() << data;
            //ui->data_recode->append("客户端:" + data);
            vecState =  accpetHandle(data);
            //发送信息
                QString send_data;
                send_data = sentdata();
                qDebug() << send_data;
                this->socket->write(send_data.toUtf8());
        });
        //客户端断掉与服务器的连接
        //只要客户端断掉 与 服务器的联系  就会触发 disconnected
        connect(this->socket,&QTcpSocket::disconnected,this,[=](){
            ui->label_notice->setText("未连接");
            ui->btn_connect->setEnabled(false);
            this->socket->close();//关闭套接字
            //ui->label_notice->append("客户端已断开连接");
        });
    });
}

QVector<int> RomeControl::accpetHandle(QByteArray data )//对接受数据处理
{
    QVector<int>vec;
    if(data == "led_1")
    {
        led_1 = !led_1;//将led1状态值取反
        led_1_state(led_1);//根据状态值返回相应状态
    }
    if(data == "led_2")
    {
        led_2 = !led_2;
        led_2_state(led_2);
    }
    if(data == "led_3")
    {
        led_3 = !led_3;
        led_3_state(led_3);
    }
    if(data == "led_4")
    {
        led_4 = !led_4;
        led_4_state(led_4);
    }
    if(data == "led_5")
    {
        led_5 = !led_5;
        led_5_state(led_5);
    }
    if(data == "cold_1")
    {
        cold_1 = !cold_1;
        cold_1_state(cold_1);
    }
    if(data == "cold_2")
    {
        cold_2 = !cold_2;
        cold_2_state(cold_2);
    }
    if(data == "cold_3")
    {
        cold_3 = !cold_3;
        cold_3_state(cold_3);
    }
    if(data == "close_all_led" )
    {
        led_1 = 0;
        led_2 = 0;
        led_3 = 0;
        led_4 = 0;
        led_5 = 0;
        led_1_state(led_1);
        led_2_state(led_2);
        led_3_state(led_3);
        led_4_state(led_4);
        led_5_state(led_5);

    }
    if(data == "close_all_cold")
    {
        cold_1 = 0;
        cold_2 = 0;
        cold_3 = 0;
        cold_1_state(cold_1);
        cold_2_state(cold_2);
        cold_3_state(cold_3);
    }
    //将其存入vector中
    vec.push_back(led_1);
    vec.push_back(led_2);
    vec.push_back(led_3);
    vec.push_back(led_4);
    vec.push_back(led_5);
    vec.push_back(cold_1);
    vec.push_back(cold_2);
    vec.push_back(cold_3);
    return vec;
}

QString RomeControl::sentdata()
{
    QString sent_data;
    if(!vecState.isEmpty())//判空，如果不为空，清空全局容器
    {
      vecState.clear();
    }
    vecState.push_back(led_1);
    vecState.push_back(led_2);
    vecState.push_back(led_3);
    vecState.push_back(led_4);
    vecState.push_back(led_5);
    vecState.push_back(cold_1);
    vecState.push_back(cold_2);
    vecState.push_back(cold_3);

    for(int i = 0;i < vecState.size();i++)//将容器中数据连接成字符串
    {
        sent_data += QString::number(vecState.at(i));//数据转换，将整形数据转换成Qstring类型
    }
    return sent_data;//返回八位数据字符串数据
}



void RomeControl::paintEvent(QPaintEvent *)
{
    //    QPainter painter(this);
    //    QPixmap pixmap(":/new/prefix1/图片/天气图标/下雨.png");
    //    painter.drawPixmap(this->rect(),pixmap);
}
void RomeControl::closeEvent(QCloseEvent *event)
{
    emit toBack();
    event->accept();
}
