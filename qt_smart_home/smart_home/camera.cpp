#include "camera.h"
#include "ui_camera.h"

#include <QCameraInfo>
#include <QDateTime>
#include <QMessageBox>
#include <QPainter>

Camera::Camera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);
    //ui初始化
    connect(ui->btd_back,&QPushButton::clicked,this,[=](){
        this->close();
    });
    this->setWindowTitle("监控");
    //获取所有可用的摄像头
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    //遍历一下链表
    //每次取出cameras中的一个数据放入camera中

    QList<QCameraInfo>::const_iterator it;

    for(it=cameras.begin(); it!=cameras.end(); ++it)
    {
        ui->comboBox_device->addItem((*it).deviceName());
    }

    QCameraInfo CameraInfo = cameras.at(ui->comboBox_device->currentIndex());//根据设备名获取信息创建对象
    //创建摄像头对象
    camera = new QCamera(CameraInfo);
}

Camera::~Camera()
{
    delete ui;
}

void Camera::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/new/prefix1/图片/天气图标/阴天.png");
    painter.drawPixmap(this->rect(),pixmap);
}






void Camera::on_btd_open_clicked()
{
    //获取到要打开的设备的名称
    qDebug() << cameras.size();
    qDebug() << ui->comboBox_device->currentIndex();

    //创建取景器并将其附在要显示的区域
    cameraViewFinder = new QCameraViewfinder(ui->widget_camera);
    camera->setViewfinder(cameraViewFinder);
    //调整摄像头数据显示的大小
    cameraViewFinder->resize(ui->widget_camera->width(), ui->widget_camera->height());
    //显示摄像头取景器
    cameraViewFinder->show();
    //开启摄像头
    camera->start();
    //创建获取一帧数据对象
    cameraImageCapture = new  QCameraImageCapture(camera);
    //关联图像获取信号
    connect(cameraImageCapture, &QCameraImageCapture::imageCaptured, this, &Camera::take_photo);
    //QCameraImageCapture::imageCaptured事件参数为int Qimage类型，槽函数参数不大于信号函数
}

void Camera::on_btd_cat_clicked()
{
    cameraImageCapture->capture();
}

void Camera::take_photo(int id, const QImage &image)
{
    qDebug() << id;
    //使用系统时间来命名图片的名称，时间是唯一的，图片名也是唯一的
    QDateTime dateTime(QDateTime::currentDateTime());
    QString time = dateTime.toString("yyyy-MM-dd-hh-mm-ss");
    //创建图片保存路径名
    QString filename = QString(":/new/prefix1/%1.jpg").arg(time);
    qDebug() << filename;
    //保存一帧数据

    image.save(filename);
    qDebug() << image.save(filename);
    //提示获取到了一帧数据
    QMessageBox::information(this, "提示：", "获取到一帧图片");
}


void Camera::on_btd_close_clicked()
{
    //Qvideowidget设置背景

    cameraViewFinder->hide(); //隐藏摄像头取景器
    camera->stop();//停止相机


}
void Camera::closeEvent(QCloseEvent *event)
{
    camera->stop();//停止相机
    emit toBack();
    event->accept();
}
