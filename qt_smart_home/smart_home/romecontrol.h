#ifndef ROMECONTROL_H
#define ROMECONTROL_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include <QPushButton>
//tcp通信服务端
#include <QTcpServer>
//bool listen(const QHostAddress &address = QHostAddress::Any, quint16 port = 0)
//绑定并且监听   打开服务器 就是 使其监听

//virtual QTcpSocket *nextPendingConnection() 返回用于通信的套接字
//bool waitForNewConnection(int msec = 0, bool *timedOut = Q_NULLPTR) 阻塞 等待连接，超时不等待
//void newConnection() 有新的客户端连接 触发这个信号
//connectToHost() 连接服务器
#include <QTcpSocket>
#include <QVector>//用vector存储8个控件的开关状态

#include<QTimer>
namespace Ui {
class RomeControl;
}

class RomeControl : public QWidget
{
    Q_OBJECT

public:
    explicit RomeControl(QWidget *parent = nullptr);
    ~RomeControl();
    //定时器Qtimer
    QTimer *timer;//创建对象
    int num = 20;//设置起始温度
    //创建tcp对象
    //创建socket对象
    QTcpServer *server;
    QTcpSocket *socket;

    //用int数据代表其状态
    int led_1;
    int led_2;
    int led_3;
    int led_4;
    int led_5;
    int cold_1;
    int cold_2;
    int cold_3;
    QVector<int>vecState;
    //通过状态决定是否开关
    void led_1_state(int i);
    void led_2_state(int i);
    void led_3_state(int i);
    void led_4_state(int i);
    void led_5_state(int i);
    void cold_1_state(int i);
    void cold_2_state(int i);
    void cold_3_state(int i);
    //房间状态初始化
    void roominit();

    void initUi();//初始化ui
    void initServer();//初始化服务器
    QVector<int> accpetHandle(QByteArray data );//socket接受数据，解析
    QString sentdata();//将全局数据整合成字符串
    void paintEvent(QPaintEvent *event) override;//设置背景
    void closeEvent(QCloseEvent *event) override;//关闭事件，回到主界面

signals:
    void toBack();
private:
    Ui::RomeControl *ui;
};

#endif // ROMECONTROL_H
