#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    ui->btn_loginIn->setShortcut(Qt::Key_Return);//按键绑定
    init();//初始化
    connect(ui->btn_loginIn,&QPushButton::clicked,this,[=](){//点击登陆按钮
        this->hide();
        login = new Login;//创建登陆子对象
        login->show();//子对象显示
        connect(login,&Login::succeed,this,&MainWindow::onlogin);//如果对面发送登陆成功进行相应操作
        connect(login,&Login::quit,this,&MainWindow::stay);//对面直接退出
    });

    connect(ui->btn_camera,&QPushButton::clicked,this,[=](){//摄像头模块
        this->hide();
        camera = new Camera;
        camera->show();
        connect(camera,&Camera::toBack,this,[=](){
            camera->close();
            delete camera;
            this->show();
        });
    });
    connect(ui->btn_smarthome,&QPushButton::clicked,this,[=](){//智能家居模块
        this->hide();
        roomcontral = new RomeControl;
        roomcontral->show();
        connect(roomcontral,&RomeControl::toBack,this,[=](){
            roomcontral->close();
            delete roomcontral;
            this->show();
        });
    });
    connect(ui->btn_player,&QPushButton::clicked,this,[=](){//媒体播放器
        this->hide();
        musicplayer = new MusicPlayer;
        musicplayer->show();
        connect(musicplayer,&MusicPlayer::toBack,this,[=](){
            musicplayer->close();
            delete musicplayer;
            this->show();
        });
    });
    connect(ui->btn_forecast,&QPushButton::clicked,this,[=](){//天气预报窗口
        this->hide();
        weather = new weatherForester;
        weather->show();
        connect(weather,&weatherForester::toBack,this,[=](){
            weather->close();
            delete weather;
            this->show();
        });
    });
    //退出
    connect(ui->btn_quit,&QPushButton::clicked,this,[=](){
        //        this->hide();//隐藏主窗口
        //        login = new Login;
        //        login->show();//自窗口显示

        //        login->quitAutologin();

        //        login->close();
        //       delete login;
        this->close();
    });


    //roomcontral = new RomeControl;
    //weather->show();
    //login->show();
    //musicplayer->show();
    //camera->show();
    //roomcontral->show();
    //this->close();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    this->setWindowTitle("智能家居");
    this->setWindowIcon(QIcon(QPixmap(":/new/prefix1/图片/风景/智能家居.png")));
    //将除登陆和退出的按钮置灰
    ui->btn_camera->setEnabled(false);//设置为不可点击
    ui->btn_player->setEnabled(false);
    ui->btn_forecast->setEnabled(false);
    ui->btn_smarthome->setEnabled(false);
    ui->btn_quit->setEnabled(true);
    ui->btn_loginIn->setEnabled(true);
    //图片设置
    ui->label_picture->setPixmap(QPixmap(":/new/prefix1/图片/风景/home.png"));
}
void MainWindow::onlogin()//登陆成功
{
    ui->btn_camera->setEnabled(true);
    ui->btn_player->setEnabled(true);
    ui->btn_forecast->setEnabled(true);
    ui->btn_smarthome->setEnabled(true);
    ui->btn_quit->setEnabled(true);
    ui->btn_loginIn->setEnabled(false);
    //更改背景
    flag = 1;
    this->show();
    login->close();
    delete login;

}

void MainWindow::stay()//如果只是单独关闭，保持不变
{
    this->show();
    login->close();
    delete login;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/new/prefix1/图片/风景/登陆背面.png");
    if(flag == 0)
    {
        painter.drawPixmap(rect(),pixmap);

    }
    else if(flag == 1)
    {
        pixmap.load(":/new/prefix1/图片/风景/samrt.jpg");
    }
    painter.drawPixmap(rect(),pixmap);

}

