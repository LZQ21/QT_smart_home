#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>

//播放器QMediaPlayer播放器 和 QMediaPlaylist播放列表
#include <QMediaPlayer>//播放器
#include <QMediaPlaylist>//播放列表
#include <QUrl>//文件超链接

#include <QFileDialog>//文件对话框
#include <QMessageBox>//

#include <QSlider>//滑块
#include <QPainter>
#include <QPixmap>

#include <QSslSocket>//判断其是否支持https ssl解析协议
#include <QNetworkReply>//http 处理
#include <QNetworkAccessManager>//http 管理员
#include <QNetworkRequest>//http 请求
//管理员 发送请求的方式有两种  get方法 与 post

//json解析头文件
#include <QJsonDocument>//json文档
#include <QJsonArray>//json数组
#include <QJsonObject>//json对象
#include <QJsonValue>//json数据类型
namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = nullptr);
    ~MusicPlayer();
    QString currentAdrress ;
    //声明指针
    QMediaPlayer *player;//播放家
    QMediaPlaylist *playlist;//播放列表
    QNetworkAccessManager *http;//网络对象
    void initPlayer();
    //槽函数
    void data_handle(QNetworkReply *reply);//数据解析
    void send_request();//发送请求
    void getduration(qint64 playtime);//获取时长
    void settime(qint64 playtime);//时间设置
    //绘图事件
    void paintEvent(QPaintEvent *event)override;
    void closeEvent(QCloseEvent *event) override;
signals:
    void toBack();

private:
    Ui::MusicPlayer *ui;
};

#endif // MUSICPLAYER_H
