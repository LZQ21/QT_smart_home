/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_picture;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_loginIn;
    QPushButton *btn_smarthome;
    QPushButton *btn_forecast;
    QPushButton *btn_player;
    QPushButton *btn_camera;
    QPushButton *btn_quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_picture = new QLabel(widget_5);
        label_picture->setObjectName(QStringLiteral("label_picture"));

        verticalLayout_4->addWidget(label_picture);


        verticalLayout_5->addWidget(widget_5);


        horizontalLayout->addWidget(widget_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btn_loginIn = new QPushButton(widget_2);
        btn_loginIn->setObjectName(QStringLiteral("btn_loginIn"));
        btn_loginIn->setMinimumSize(QSize(0, 30));
        btn_loginIn->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(btn_loginIn);

        btn_smarthome = new QPushButton(widget_2);
        btn_smarthome->setObjectName(QStringLiteral("btn_smarthome"));
        btn_smarthome->setMinimumSize(QSize(0, 30));
        btn_smarthome->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));

        verticalLayout_3->addWidget(btn_smarthome);

        btn_forecast = new QPushButton(widget_2);
        btn_forecast->setObjectName(QStringLiteral("btn_forecast"));
        btn_forecast->setMinimumSize(QSize(0, 30));
        btn_forecast->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));

        verticalLayout_3->addWidget(btn_forecast);

        btn_player = new QPushButton(widget_2);
        btn_player->setObjectName(QStringLiteral("btn_player"));
        btn_player->setMinimumSize(QSize(0, 30));
        btn_player->setStyleSheet(QLatin1String("background-color: rgb(0, 255, 255);\n"
""));

        verticalLayout_3->addWidget(btn_player);

        btn_camera = new QPushButton(widget_2);
        btn_camera->setObjectName(QStringLiteral("btn_camera"));
        btn_camera->setMinimumSize(QSize(0, 30));
        btn_camera->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));

        verticalLayout_3->addWidget(btn_camera);

        btn_quit = new QPushButton(widget_2);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        btn_quit->setMinimumSize(QSize(0, 30));
        btn_quit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 0);"));

        verticalLayout_3->addWidget(btn_quit);


        verticalLayout->addWidget(widget_2);


        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_picture->setText(QString());
        btn_loginIn->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", Q_NULLPTR));
        btn_smarthome->setText(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\256\266\345\261\205", Q_NULLPTR));
        btn_forecast->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", Q_NULLPTR));
        btn_player->setText(QApplication::translate("MainWindow", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", Q_NULLPTR));
        btn_camera->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247\350\256\276\345\244\207", Q_NULLPTR));
        btn_quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
