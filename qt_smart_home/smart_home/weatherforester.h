#ifndef WEATHERFORESTER_H
#define WEATHERFORESTER_H

#include <QWidget>
#
//采用Qjson解析模块
#include <QJsonArray>//json数组
#include <QJsonDocument>//json文档
#include <QJsonObject>//json对象
#include <QJsonValue>//json值

#include <QFile>//文件操作
#include <QDebug>//显示错误信息
#include <QMessageBox>//信息框

//采用网络模块
#include <QNetworkAccessManager>
#include <QNetworkReply>//发送请求的数据和头
#include <QNetworkRequest>//保存发送的请求
#include <QUrl>//超链接
//搜索城市查找id值
//通过map容器
#include <QMap>
//key值和value值一一对应
//将城市与id联系放至文本中文件中
//添加资源文件
#include <QMovie>
#include <QPaintEvent>
#include <QPainter>
namespace Ui {
class weatherForester;
}

class weatherForester : public QWidget
{
    Q_OBJECT

public:
    explicit weatherForester(QWidget *parent = nullptr);
    ~weatherForester();

    int i ;//定义一个标志位用于判断背景文件
    void read_file();//读取文件
    void handle_info(QNetworkReply *reply);//数据处理槽函数
    void send_request();//请求发送槽函数
    //实例化一个具体的管理对象
    QNetworkAccessManager *http;
    //设置一个map文件
    QMap<QString,QString> city_info;
    //界面初始化
    void initWeather();
    //天气图标判断
    void decide (QJsonObject obj,QLabel *label);
    //天气动画判断
    QMovie* decide_movie (QJsonObject obj);
    //绘图事件
    void paintEvent(QPaintEvent *)override;
    void closeEvent(QCloseEvent *event) override;
signals:
    void toBack();
private:
    Ui::weatherForester *ui;
};

#endif // WEATHERFORESTER_H
