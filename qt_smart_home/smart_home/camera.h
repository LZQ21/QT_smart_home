#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>//窗口控件
#include <QCamera>//摄像头文件
#include <QCameraViewfinder>//摄像头窗口
#include <QCameraImageCapture>//摄像头捕捉器
#include <QPaintEvent>//绘图事件
namespace Ui {
class Camera;
}

class Camera : public QWidget
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = nullptr);
    ~Camera();
    //摄像头对象指针
    QCamera* camera;
    //摄像头的取景器
    QCameraViewfinder* cameraViewFinder;
    //存储摄像机设备信息
    QList<QCameraInfo> cameras;
    //记录摄像头内容
    QCameraImageCapture* cameraImageCapture;
    //绘图事件声明
    void paintEvent(QPaintEvent *ev)override;
    //关闭事件用于返回主界面
    void closeEvent(QCloseEvent *event) override;
signals:
    void toBack();


private slots:
    void on_btd_open_clicked();//按键转到槽打开摄像头

    void on_btd_cat_clicked();//按键转到槽截图按键点击

    void take_photo(int id, const QImage &image);//由按键connect连接

    void on_btd_close_clicked();//拍照


private:
    Ui::Camera *ui;
};

#endif // CAMERA_H
