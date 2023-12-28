#include "loginin.h"
#include "ui_loginin.h"

#include <QMessageBox>

LoginIn::LoginIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginIn)
{
    ui->setupUi(this);
    setWindowTitle("注册");
    //设置背景
    // 设置背景图
    QImage img1;
    img1.load(":/new/prefix1/图片/天气图标/阴天.png");
    // 设置背景图大小
    QImage img2 = img1.scaled(801,587);//根据给定的aspectRatioMode和transformMode，返回缩放成矩形的图像副本。

    // 开启背景设置
    this->setAutoFillBackground(true);
    // 创建画板对象
    QPalette p = this->palette();
    // 添加背景图片
    p.setBrush(QPalette::Window, QBrush(img2));
    this->setPalette(p);


    connect(ui->btn_login,&QPushButton::clicked,this,&LoginIn::onLogin);//点击注册按钮连接到注册操作


    connect(ui->btn_back,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

LoginIn::~LoginIn()
{
    delete ui;
}

void LoginIn::onLogin()
{
    QString name,pass,pass2;
    name = ui->edit_newAccount->text();
    pass = ui->edit_new_passport->text();
    pass2 = ui->edit_new_passport_2->text();
    //首先判断三个输入框有没有没为空
    if((name != "")&&(pass != "")&&(pass2 != "") )
    {
        if(pass == pass2)
        {
            qDebug()<<"格式正确";
            QFile file("C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\account_info.txt");//以绝对路径打开
            if(!file.open(QIODevice::ReadOnly))//以只读方式打开文件
            {
                QMessageBox::information(this,"提示","打开失败");
            }
            qDebug() << "打开成功";
            qDebug()<<"正在检查是否重名";
            while(!file.atEnd())//只要没有读到文件尾部就一直读  并且按行读取
            {

                QByteArray data = file.readLine();//按行读取
                QString info =data;//发生自动类型转换（Qbytearray-》Qstring）
                int ipos = data.indexOf("\t");//以空格为间隔
                //获取子串信息
                QString name0 =data.mid(0,ipos);//读取姓名
                QString pass0 =data.mid(ipos+1);//读取密码
                pass0.replace("\r\n","");
                qDebug()<<"正在检查是否重名";
                if(name0 == name)//判断文本框中数据是否已经存在于文件
                {
                    QMessageBox::critical(this,"错误","该用户名已经存在");
                    return ;//存在
                }
            }
            file.close();


            QString filename = "C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\account_info.txt";
            QFile file1(filename);//创建文件对象
            qDebug() << file1.open(QIODevice::WriteOnly|QIODevice::Append);//以只写和追加方式打开文件
            if(!file1.isOpen())//打开文件总失败的原因
            {
                QMessageBox::information(this,"提示","打开失败");
            }
            else
            {
                qDebug() << "打开成功";
                QTextStream stream(&file1);//使用文本流类的方式写入
                QString name = ui->edit_newAccount->text();//获取文本框内容之账号
                QString pass = ui->edit_new_passport->text();//获取密码
                stream << name << "\t" << name << "\r\n";//按照固定格式写入文件
                qDebug()<<" 写入文件成功";
                QMessageBox::information(this,"提示","注册成功！");
            }
            file1.close();
        }
        else
        {
            QMessageBox::critical(this,"错误","两次输入的密码不一致！");
        }
    }
    else
    {
        QMessageBox::critical(this,"错误","密码或账号为空！");
    }
}



void LoginIn::closeEvent(QCloseEvent *event)
{
    emit toBack();
    event->accept();//设置accept参数表示事件接收者需要该事件。不需要的事件可能会传播到父小部件。
}
