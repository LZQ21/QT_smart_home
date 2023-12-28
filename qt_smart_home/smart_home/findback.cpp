#include "findback.h"
#include "ui_findback.h"

#include <QMessageBox>
#include <QDebug>
#include <QPainter>
FindBack::FindBack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindBack)
{
    ui->setupUi(this);
    setWindowTitle("找回密码");
    //ui初始化
    ui->lineEdit->setPlaceholderText("输入账号");
    ui->label_picture->setPixmap(QPixmap(":/new/prefix1/图片/风景/找回密码.png"));
    //信号与槽
    connect(ui->btn_find,&QPushButton::clicked,this,&FindBack::onFind);
    connect(ui->btn_back,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

FindBack::~FindBack()
{
    delete ui;
}

void FindBack::onFind()
{
    static int count = 0;
    //收集框中信息
    QString acount = ui->lineEdit->text();
    //打开用户文件
    //以只读方式打开文件
    QFile file(":/new/prefix1/account_info.txt");
    if(!file.open(QIODevice::ReadOnly))//判断文件是否打开成功——》只能以只读方式打开
    {
        QMessageBox::information(this,"提示","文件打开失败");
    }
    qDebug() << "文件打开成功";
    qDebug() <<file.isOpen() ;
    qDebug() << "文件打开成功";
    while(!file.atEnd())//当文件没有读到尾部就一直读
    {
        qDebug() << "开始文件比对";
        QByteArray data = file.readLine();//按行读取
        QString info =data;//发生自动类型转换（Qbytearray-》Qstring）
        int ipos = data.indexOf("\t");//找到换行符所在位置
        //获取子串
        QString acount1 =data.mid(0,ipos);//取0——iops位置
        QString pass1 =data.mid(ipos+1);//ipos+1——行尾
        pass1.replace("\r\n","");//将读取文件去除换行符
        //调试信息
        qDebug() << acount1;
        qDebug() << pass1;
        //账户匹配
        if(acount1 == acount )
        {
            QMessageBox::information(this,"提示",pass1);//消息对话框
            count++;
        }

    }
    if(count == 0)
    {
        QMessageBox::information(this,"提示","未找到该账户");
    }

}

void FindBack::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/图片/风景/山.png"));
}



void FindBack::closeEvent(QCloseEvent *event)
{
    emit toBack();
    event->accept();
}
