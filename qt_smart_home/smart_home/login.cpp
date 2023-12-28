#include "login.h"
#include "ui_login.h"

#include <QPainter>
#include <QTimer>


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{   ui->setupUi(this);
    uiInit();//ui初始化
    /*用于记录密码*/
    //设置一个用于存储的ini文件
    QSettings setting("./config.ini",QSettings::IniFormat);
    zhangHao = setting.value("zhangHao").toString();//读取账号
    miMa = setting.value("miMa").toString();//读取密码
    stateRem = setting.value("rem").toInt();//代表记住密码 勾选框的状态
    stateLog = setting.value("login").toInt();//代表自动登陆勾选框的状态
    this->line_count->setText(zhangHao); //设置账号
    this->line_pass->setText(miMa);  //设置密码
    //判断两文本框是否为空，若不为空，将记住密码勾选
    if(stateRem == 2 )
    {
        this->check_remember->setChecked(true);
    }
    if(stateLog == 2)//自动登陆
    {
        //QTimer创建定时器
        this->timer = new QTimer;
        this->check_loginAuto->setChecked(true);
        int x=QMessageBox::question(this,"问题","你上次登陆勾选了自动登陆，是否取消自动登陆",QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
        if(x == QMessageBox::Yes)
        {
            this->check_loginAuto->setChecked(false);//取消勾选自动登陆
        }
        else
        {
            timer->start(50);//如果不取消勾选，开始自动登陆
        }
        //通过connect和Lambda表达式实现定时完成的
        connect(timer,&QTimer::timeout,this,[=](){
            //timer->stop();
            this->btdLoginIn();
        });
    }
    qDebug() << stateRem <<'\t' << stateLog;

    //信号与槽的连接
    //登陆
    connect(this->btd_login_in,&QPushButton::clicked,this,&Login::btdLoginIn);
    //注册界面
    connect(this->btd_login,&QPushButton::clicked,this,[=](){
        loginin = new LoginIn;//点击子按钮时，创建一个子对象
        this->hide();//将本窗口隐藏
        loginin->show();
        connect(loginin,&LoginIn::toBack,this,[=](){//当对面按下返回按键
            loginin->close();
            delete loginin;
            this->show();
        });
    });
    //找回密码界面
    connect(this->btd_find,&QPushButton::clicked,this,[=](){
        findback = new FindBack;//点击子按钮时，创建一个子对象
        this->hide();//将本窗口隐藏
        findback->show();
        connect(findback,&FindBack::toBack,this,[=](){//当对面按下返回按键
            findback->close();
            delete findback;
            this->show();
        });

    });
    //自动登陆自动点击记住密码
    connect(this->check_loginAuto,&QCheckBox::stateChanged,this,[=](int state){
        // qDebug()<<state;
        if(state == 2) //代表自动登录已勾选，自动登录勾选必须会勾选记住密码
        {
            this->check_remember->setChecked(true);
            this->check_loginAuto->setChecked(true);
        }
        else
        {
            this->check_loginAuto->setChecked(false);
        }

    });
    //勾选记住密码
    connect(this->check_remember,&QCheckBox::stateChanged,[=](int state){
        if(state == 0)
        {
            this->check_loginAuto->setChecked(false);//记住密码为空
            this->line_pass->clear();//将密码栏清空
        }
        else
        {
            this->check_loginAuto->setChecked(true);//记住密码为空
        }
    });

}

Login::~Login()
{
    if(this->check_remember->isChecked())//如果勾选保存账号
    {
        {
            QSettings setting ("./config.ini",QSettings::IniFormat);  //设置一个用于存储的ini文件
            setting.setValue("miMA",this->line_count->text());
            setting.setValue("zhangHao",this->line_count->text());
            setting.setValue("login",this->check_loginAuto->checkState());
            setting.setValue("rem",this->check_remember->checkState());
            setting.sync(); //同步设置，将信息存储到INI里面
        }
    }
    delete ui;
}

void Login::uiInit()
{
    this->setWindowTitle("登陆界面");//设置标题
    //setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    setWindowIcon(QIcon(QStringLiteral(":/new/prefix1/图片/图标/2.jfif")));

    this->setFixedSize(400,400);
    this->lable = new QLabel(this);//创建一个标签对象
    this->H_01 = new QHBoxLayout;//创建布局的时候不要使用父对象
    //将标签加入水平布局
    H_01->addWidget(lable);
    lable->setFixedSize(100,100);
    lable->setPixmap(QPixmap(":/new/prefix1/图片/图标/3.jfif"));
    lable->setScaledContents(true);//设置为包含，填充空间

    this->H_02 = new QGridLayout;//创建布局的时候不要使用父对象
    this->lable_count = new QLabel("账号",this);
    this->lable_pass = new QLabel("密码",this);
    this-> line_count = new QLineEdit(this);
    this-> line_pass = new QLineEdit(this);
    H_02->addWidget(lable_count,1,0);
    H_02->addWidget(lable_pass,2,0);
    H_02->addWidget(line_count,1,1);
    H_02->addWidget(line_pass,2,1);

    this->H_03 = new QHBoxLayout;
    this->check_loginAuto = new QCheckBox("自动登陆",this);
    this->check_remember = new QCheckBox("记住密码",this);
    this->btd_find = new QPushButton("找回密码",this);
    H_03->addWidget(check_loginAuto);
    H_03->addWidget(check_remember);
    H_03->addWidget(btd_find);

    this->H_04 = new QHBoxLayout;
    this->btd_login_in = new QPushButton("登陆",this);
    this->btd_login = new QPushButton("注册",this);

    H_04->addWidget(btd_login_in);
    H_04->addWidget(btd_login);
    //创建中心空间布局,将所有布局添加入其中
    this->H = new QVBoxLayout(this);//是否能够添加之父对象
    H->addLayout(H_01);
    H->addLayout(H_02);
    H->addLayout(H_03);
    H->addLayout(H_04);

    //初始化控件
    //密码输入不能为中文
    line_pass->setAttribute(Qt::WA_InputMethodEnabled,false);
    line_pass->setEchoMode(QLineEdit::Password);//设置密码显示格式,不可改变
    line_pass->setPlaceholderText("输入密码");
    line_count->setPlaceholderText("输入账号");
}

void Login::btdLoginIn()
{
    static int count = 0;
    QString acount = this->line_count->text();
    QString pass = this->line_pass->text();

    if((acount!=NULL) && (pass!=NULL))
    {
        //以只读方式打开文件
        QFile file(":/new/prefix1/account_info.txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(this,"提示","文件打开失败");
        }
        qDebug() << "文件打开成功";
        //qDebug() <<file.
        qDebug() <<file.isOpen() ;
        qDebug() << "文件打开成功";
        while(!file.atEnd())//当文件没有读到尾部就一直读
        {
            qDebug() << "开始文件比对";
            QByteArray data = file.readLine();//按行读取
            QString info =data;//发生自动类型转换（Qbytearray-》Qstring）
            if(info == "\r\n")
            {
                continue;//退出本次循环
            }
            int ipos = data.indexOf("\t");
            //获取子串

            QString acount1 =data.mid(0,ipos);//找到"\t"为间隔，前为账户，后为密码
            QString pass1 =data.mid(ipos+1);//
            pass1.replace("\r\n","");
            qDebug() << acount1;
            qDebug() << pass1;
            if((acount1 == acount ) && (pass1 == pass))
            {
                QMessageBox::information(this,"恭喜","登录成功！");
                flag = 1;
                //然后跳转新窗口
                //this->hide();       //子窗口不能够使父窗口隐藏！（需要自定义信号与槽）
                this->close();//触发关闭时间，发送信号
                count++;
            }
        }
        if(count == 0)
        {
            QMessageBox::critical(this,"错误！","密码或账号有误！");
        }
        //关闭文件
        file.close();
    }
    else
    {
        QMessageBox::critical(this,"错误！","密码不能为空");
    }
}

void Login::paintEvent(QPaintEvent *)//绘图事件设置背景
{
    QPainter painter(this);
    // 背景图片
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/图片/天气图标/晴天.png"));
}

void Login::closeEvent(QCloseEvent *event)
{
    if(flag == 1)//如果登陆成功，发送成功信号
    {
        emit succeed();
    }
    else if(flag == 0)//登陆失败
    {

        qDebug() << "直接退出";//QMessageBox::information(this,"提示","暂未登录");
        emit quit();
    }
    event->accept();//事件对象的接受标志设置accept参数表示事件接收者需要该事件。不需要的事件可能会传播到父小部件。
}






