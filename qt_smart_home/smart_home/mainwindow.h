#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <login.h>//添加登陆头文件
#include <weatherforester.h>
#include "musicplayer.h"
#include "camera.h"
#include "romecontrol.h"
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //设置标志位
    int flag = 0;
    //初始化子窗口对象
    Login *login;
    weatherForester* weather;
    MusicPlayer *musicplayer;
    Camera *camera;
    RomeControl *roomcontral;
    //界面初始化，函数
    void init();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //槽函数
    void onlogin();//接受登陆信号用的槽
    void stay();//直接退出，保持现状
    //绘图事件
    void paintEvent(QPaintEvent *event)override;
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
