#include "musicplayer.h"
#include "ui_musicplayer.h"

#include <QPaintEvent>



MusicPlayer::MusicPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);
    currentAdrress = QCoreApplication::applicationDirPath();//获取工作目录路径
    initPlayer();//初始化列表
    //创建文件对象
    //QString filename ="C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\music_info.txt";
    //QString filename = QFileDialog::getOpenFileName(this,"打开",":/new/prefix1/music_info","*.txt");
    //    QString filename = ":/new/prefix1/music_info.txt";


    //按键控制播放、上下曲__(做一个上一首或者下一首时自动播放暂停转换)
    connect(ui->btd_next,&QPushButton::clicked,this,[=](){
        int current = ui->musiclist->currentRow();//row为此时下标;
        if(current +1 == ui->musiclist->count())//如果到最后一个
        {
            current = 0;
        }
        else
        {
            current++;
        }
        this->player->pause();//先停止播放
        this->playlist->setCurrentIndex(current);//列表的默认光标移到点击位置
        this->player->play();//播放点击位置列表中音乐
        ui->btd_play->setText("暂停");
    });
    connect(ui->btd_before,&QPushButton::clicked,this,[=](){
        int current = ui->musiclist->currentRow();//row为此时下标;
        if(current  == 0)
        {
            current  = ui->musiclist->count() - 1;
        }
        else
        {
            current--;
        }
        this->player->pause();//先停止播放
        this->playlist->setCurrentIndex(current);//列表的默认光标移到点击位置
        this->player->play();//播放点击位置列表中音乐
        ui->btd_play->setText("暂停");
    });
    
    
    //手动控制播放暂停
    connect(ui->btd_play,&QPushButton::clicked,this,[=](){
        if(ui->btd_play->text() == "播放")
        {
            this->player->play();
            ui->btd_play->setText("暂停");
        }
        else if(ui->btd_play->text() == "暂停")
        {
            this->player->pause();//!
            ui->btd_play->setText("播放");
        }
    });
    
    //滑块控制音量
    ui->verticalSlider_voice->setRange(0,100);//设置音量范围是0-100
    ui->verticalSlider_voice->setValue(50);//初始状态音量
    this->player->setVolume(50);//设置默认音量和滑块匹配
    connect(ui->verticalSlider_voice,&QSlider::valueChanged,this->player,&QMediaPlayer::setVolume);//播放家对象音量随滑块值变化变化

    
    // 设置滑块播放
    // 连接歌曲长度变化信号， 根据歌曲长度来决定滑块的范围
    connect(player, &QMediaPlayer::durationChanged, this, [=](qint64 duration) {//如果此时播放歌曲的持续时长改变_??解析不出准确时间
        qDebug() << "持续时间"<<duration;//对于本地.mp3文件无法获取时间
        ui->horizontalSlider->setRange(0, duration);//将滑块内置范围设置为0——持续时间
        // 将数字时间转换为实际时间
        int minutes = duration / 60000;//毫秒/1000/60
        int seconds = (duration % 60000) / 1000;//分钟
        ui->label_end->setText(QString("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0')));//将标志设置为特定格式
    });
    
    // 连接歌曲进度变化信号，将ui滑块的位置和歌曲进度同步
    connect(player, &QMediaPlayer::positionChanged, this, [=](qint64 position){
        qDebug() << "播放位置" << position;
        ui->horizontalSlider->setValue(position);//
        int minutes = position / 60000;//毫秒/1000/60
        int seconds = (position % 60000) / 1000;//分钟
        ui->label_current_position->setText(QString("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0')));//将标志设置为特定格式
    });

    // 连接滑块按下移动信号，将歌曲进度与滑块同步
    connect(ui->horizontalSlider, &QSlider::sliderMoved, this, [=](){

        player->setPosition(ui->horizontalSlider->value());//滑块移动，播放器设置播放位置
        // 将数字时间转换为实际时间
        qint64 value = ui->horizontalSlider->value();
        qDebug() << value;
        int minutes = value / 60000;//毫秒/1000/60
        int seconds = (value % 60000) / 1000;//分钟
        ui->label_current_position->setText(QString("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0')));//将标志设置为特定格式
    });

    //设置播放模式
    
    this->playlist->setPlaybackMode((QMediaPlaylist::Sequential));//默认顺序播放模式
    connect(ui->comboBox_play_choice,&QComboBox::currentTextChanged,this,[=](const QString &text){//将信号函数参数传递至此
        if(text == "顺序播放")
        {
            this->playlist->setPlaybackMode((QMediaPlaylist::Sequential));//默认顺序播放
        }
        else if(text == "随机播放")
        {
            this->playlist->setPlaybackMode((QMediaPlaylist::Random));
        }
        else if(text == "循环播放")
        {
            this->playlist->setPlaybackMode((QMediaPlaylist::Loop));
        }
    });

    //设置将音乐名显示在列表上
    ui->musiclist->addItem("小苹果.mp4");
    //点击播放列表，显示音乐。-》双击显示音乐
    connect(ui->musiclist,&QListWidget::itemDoubleClicked,this,[=](QListWidgetItem *item){
        int current = ui->musiclist->row(item);//row为此时下标
        this->player->stop();//先停止播放
        this->playlist->setCurrentIndex(current);//列表的默认光标移到点击位置
        this->player->play();//播放点击位置列表中音乐
        ui->btd_play->setText("暂停");
    });
    
    //将列表中当前位置改变信号，在ui显示中更新
    void(QListWidget::*setindex)(int) = &QListWidget::setCurrentRow;//通过函数指针方式解决重载问题
    connect(this->playlist,&QMediaPlaylist::currentIndexChanged,ui->musiclist,setindex);//当前位置改变信号触发返回int position

    //从文件夹中添加音乐
    //1.将需要将音乐链接 添加到播放链表
    //2.将音乐名字添加到ui列表
    //打开一个文件对话框
    connect(ui->btd_add,&QPushButton::clicked,this,[=](){
        QStringList data = QFileDialog::getOpenFileNames(this,"选择音乐","E:\\woke\\QT_Pro\\2308\\Day7\\QMedia","*.mp3 *.mp4");

        for(int i = 0;i < data.size();i++)
        {
            this->playlist->addMedia(QMediaContent(QUrl::fromLocalFile(data[i])));//播放列表，和界面同时添加
            ui->musiclist->addItem(data[i]);//实时ui更新
        }
    });

    //删除列表中音乐
    //1.将音乐链接从音乐列表中删除
    //2.将音乐名字从ui列表删除
    //获取当前文件下标，删除此文件后，将下标指向下一个位置
    connect(ui->btd_delete,&QPushButton::clicked,this,[=](){
        //
        int delete_indx = ui->musiclist->currentRow();//设置当前列表位置位删除位置
        //成功删除
        if(this->playlist->removeMedia(delete_indx))//将其从播放列表中删除，成功删除返回true
        {
            ui->musiclist->takeItem(delete_indx);//将其从ui界面删除

            //对文件进行操作
            //
            //使用绝对路径
            //QString filename = ":/new/prefix1/music_info.txt";
            //QString filename ="C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\music_info.txt";
            QString filename  = currentAdrress + "/../../smart_home/music_info.txt";
            //QString filename = QFileDialog::getOpenFileName(this,"打开",":/new/prefix1/music_info","*.txt");
            QFile *file = new QFile(filename);
            QStringList all_info;//链表用来存储所有文件
            if(!file->open(QIODevice::ReadOnly|QIODevice::Text))
            {
                qDebug() << "open_error";
            }


            else
            {
                //遍历文件所有的曲目信息，将其存在list中

                while (!file->atEnd())
                {
                    all_info.append(QString(file->readLine()));

                }
                //查找其中相同的文件，进行删除
            }
            //关闭文件
            file->close();
            //调试
            qDebug() << "数据删前" <<all_info <<'\n';
            //在list中删除选中行的url
            all_info.removeAt(delete_indx);
            qDebug() << "数据删后" <<all_info <<'\n';
            //以只写方式打开

            if(!file->open(QIODevice::WriteOnly|QIODevice::Text))
            {
                qDebug() << "fail to open ";
            }
            else
            {
                //将list中文件存入文件
                foreach(const QString &str, all_info) {
                    QByteArray add = str.toUtf8();
                    file->write(add, add.length());
                    qDebug() << str;
                }
            }
            file->close();
            return;
        }
        QMessageBox::warning(this,"删除音乐","删除失败");
    });

    //设置输出视频
    this->player->setVideoOutput(ui->widget_video);
    //在线搜歌功能，初始化网络对象
    this->http = new QNetworkAccessManager(this);
    QString filename  = currentAdrress + "/../../smart_home/music_info.txt";
    qDebug() << filename;
    qDebug() << currentAdrress;
    QFile *file = new QFile(filename);
    if(!file->open(QIODevice::ReadOnly))
    {
        qDebug() << "open_error";
    }
    else
    {
        //遍历文件内容，将文件内容按照账号密码分割开来
        while(!file->atEnd())
        {
            QString str = file->readLine();
            str.replace("\n", "");
            qDebug() <<  str;
            this->http->get(QNetworkRequest(QUrl(str)));
            qDebug() << "http ho "<<str;
            //这个将触发处理，自动将文件加入播放列表
        }


    }
    file->close();//关闭文件
    //发送请求之前，我们得先链接处理
    connect(this->http,&QNetworkAccessManager::finished,this,&MusicPlayer::data_handle);

    //链接搜索按钮
    //connect(ui->btd_find,&QPushButton::clicked,this,&MusicPlayer::send_request);
    connect(ui->btd_find,&QPushButton::clicked,this,[=](){
        qDebug() << "触发request";
        send_request();
    });
    //返回主界面按钮
    connect(ui->btd_back,&QPushButton::clicked,this,[=](){
        this->close();//触发关闭事件
    });
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}


void MusicPlayer::initPlayer()
{
    //设置其中各个各个窗口
    this->setWindowTitle("音乐播放器");
    this->setWindowIcon(QIcon(QPixmap(":/new/prefix1/图片/风景/音乐播放.png")));//设置图标
    bool allow =  QSslSocket::supportsSsl();//判断是否支持ssl解析协议
    QString buildVersion = QSslSocket::sslLibraryBuildVersionString();
    QString Download = QSslSocket::sslLibraryVersionString();
    qDebug() << allow << buildVersion << Download;

    //初始化
    this->player = new QMediaPlayer(this);//播放家
    this->playlist = new QMediaPlaylist(this);//播放列表
    //将播放列表设置给播放家
    this->player->setPlaylist(this->playlist);
    //添加本地歌曲

    this->playlist->addMedia(QMediaContent(QUrl("qrc:/new/prefix1/sound/小苹果.mp4")));
}

void MusicPlayer::data_handle(QNetworkReply *reply)
{
    qDebug() << "进入解析数据";
    int code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(code != 200)
    {
        QMessageBox::critical(this,"请求","请求出错，请检查网络连接状况");
        return;
    }
    //请求成功后 解析数据
    QByteArray data = reply->readAll();
    //解析数据第一步 将其转变为JSon 文档
    QJsonDocument docu = QJsonDocument::fromJson(data);
    QJsonObject obj =  docu.object();
    if(obj.find("result") != obj.end())//代表找到了结果
    {
        obj = obj["result"].toObject();
        //obj["songs"] 为json 数组
        QJsonArray arry = obj["songs"].toArray();
        //我们只需要添加搜索到得第一首歌，arry 的第一个元素又是一个json 对象
        obj = arry[0].toObject();
        //检索音乐id
        int id = obj["id"].toInt();

        QString play_address = "http://music.163.com/song/media/outer/url?id=" + QString::number(id) + ".mp3";// QString::number(id)将int型数据转换成Qstring型
        //将地址添加到 音乐播放列表
        this->playlist->addMedia(QMediaContent(QUrl(play_address)));//超链接

        //还需要同步ui界面
        QString name = obj["name"].toString();
        ui->musiclist->addItem(name + ".mp3");
    }
}

void MusicPlayer::send_request()
{
    //发送请求  -> 必须要一个 链接 -> 去找免费的API 接口
    QString music_name = ui->lineEdit->text();//输入音乐名
    if(music_name== "")
    {
        QMessageBox::information(this,"提示","不能为空");
        return;
    }
    QString request_address = "http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s=" + music_name ;
    request_address += "&type=1&offset=0&total=true&limit=2";

    //此链接支持get 方法
    this->http->get(QNetworkRequest(QUrl(request_address)));
    //直接将搜索到的地址保存入文件
    //文件名"C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\music_info.txt"
    //相对位置
    //QString filename = QFileDialog::getOpenFileName(this,"打开",":/new/prefix1/music_info","*.txt");
    //QString filename ="C:\\Users\\l\\Desktop\\qt_smart_home\\smart_home\\music_info.txt";
    QString filename  = currentAdrress + "/../../smart_home/music_info.txt";
    QFile *file = new QFile(filename);

    if(!file->open(QIODevice::Append|QIODevice::WriteOnly))
    {
        qDebug() << "open_error";
    }
    else
    {
        qDebug() << "写入文件";
        QByteArray data = (request_address+"\n").toUtf8();
        file->write(data,data.length());
    }
    //关闭文件
    file->close();
}

void MusicPlayer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/new/prefix1/图片/天气图标/霾.png");
    painter.drawPixmap(rect(),pixmap);
}

void MusicPlayer::closeEvent(QCloseEvent *event)
{
    emit toBack();
    event->accept();
}
