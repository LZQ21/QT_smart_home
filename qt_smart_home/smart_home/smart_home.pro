QT       += core gui
QT += network #采用网络模块
QT += multimedia #媒体播放模块
QT += multimediawidgets # 音视频播放模块
QT += multimedia#摄像模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += resources_big#解决文件过大问题
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    camera.cpp \
    findback.cpp \
    login.cpp \
    loginin.cpp \
    main.cpp \
    mainwindow.cpp \
    musicplayer.cpp \
    romecontrol.cpp \
    weatherforester.cpp

HEADERS += \
    camera.h \
    findback.h \
    login.h \
    loginin.h \
    mainwindow.h \
    musicplayer.h \
    romecontrol.h \
    weatherforester.h

FORMS += \
    camera.ui \
    findback.ui \
    login.ui \
    loginin.ui \
    mainwindow.ui \
    musicplayer.ui \
    romecontrol.ui \
    weatherforester.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    info.qrc \
    picture.qrc \
    sound.qrc

DISTFILES +=
