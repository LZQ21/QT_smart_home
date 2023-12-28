#ifndef LOGININ_H
#define LOGININ_H

#include <QWidget>
#include <QFile>
#include <QTextStream>//文本流的方式写入
#include <QDebug>
#include <QLineEdit>//编辑框
#include <QPaintEvent>
#include <QFileDialog>//文件对话框
namespace Ui {
class LoginIn;
}

class LoginIn : public QWidget
{
    Q_OBJECT

public:
    explicit LoginIn(QWidget *parent = nullptr);
    ~LoginIn();
    void onLogin();//登陆界面
    void closeEvent(QCloseEvent *event) override;
signals:
    void toBack();
private:
    Ui::LoginIn *ui;
};

#endif // LOGININ_H
