#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QHBoxLayout>//水平布局
#include <QVBoxLayout>//垂直布局
#include <QGridLayout>//网格布局
#include <QLabel>//标签
#include <QLineEdit>//单行文本框
#include <QCheckBox>//勾选框
#include <QSpacerItem>//弹簧
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
//文本文件
#include <QFile>
//实现自动登陆和记住密码
#include <QSettings>

//添加子窗口头文件
#include "loginin.h"
#include "findback.h"
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    //QTimer创建定时器
    QTimer *timer;
    //添加布局对象
    QLabel *lable;//创建一个标签对象
    QHBoxLayout *H_01;//创建布局的时候不要使用父对象
    QGridLayout *H_02;//创建布局的时候不要使用父对象
    QLabel *lable_count ;
    QLabel *lable_pass ;
    QLineEdit * line_count ;
    QLineEdit * line_pass ;
    QHBoxLayout *H_03;
    QCheckBox *check_loginAuto;
    QCheckBox *check_remember;
    QPushButton *btd_find;
    QHBoxLayout *H_04;
    QPushButton *btd_login_in;
    QPushButton *btd_login ;
    QVBoxLayout *H ;//是否能够添加之父对象 //创建中心空间布局,将所有布局添加入其中
    void uiInit();//ui界面初始化
    //标志位
    int flag = 0;//判断是否登入成功，还是放弃登陆，直接退出
    //槽函数
    void btdLoginIn();//登陆槽函数

    //setting存储
    QString zhangHao ;
    QString miMa ;
    int stateRem ;//记住密码勾选状态位
    int stateLog ;//
    //添加子界面对象
    LoginIn *loginin;//注册界面
    FindBack *findback;//找回密码界面
    //绘图事件
    void paintEvent(QPaintEvent *event)override;
    void closeEvent(QCloseEvent *event) override;
signals:
    void succeed();//登陆成功发送信号到主界面
    void quit();//单独退出信号
private:
    Ui::Login *ui;
};

#endif // LOGIN_H
