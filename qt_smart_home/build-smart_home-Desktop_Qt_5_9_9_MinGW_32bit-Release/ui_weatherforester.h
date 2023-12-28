/********************************************************************************
** Form generated from reading UI file 'weatherforester.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERFORESTER_H
#define UI_WEATHERFORESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_weatherForester
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *linesearch;
    QPushButton *btd_serch;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_parent;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_city;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_16;
    QLabel *label_movie;
    QWidget *widget_22;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_data;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_low;
    QLabel *label_high;
    QLabel *label_quality;
    QWidget *widget_3;
    QLabel *label_tempture;
    QLabel *label_type;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_notice;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_icon_rise;
    QLabel *label_rise;
    QSpacerItem *horizontalSpacer;
    QLabel *label_icon_rise_2;
    QLabel *label_down;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_14;
    QGridLayout *gridLayout;
    QLabel *label_api;
    QLabel *label_46;
    QLabel *label_shidu;
    QLabel *label_fl;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_fx;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_week1;
    QLabel *label_icon1;
    QLabel *label_high1;
    QLabel *label_low1;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_week2;
    QLabel *label_icon2;
    QLabel *label_high2;
    QLabel *label_low2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_week3;
    QLabel *label_icon3;
    QLabel *label_high3;
    QLabel *label_low3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_week4;
    QLabel *label_icon4;
    QLabel *label_high4;
    QLabel *label_low4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_week5;
    QLabel *label_icon5;
    QLabel *label_high5;
    QLabel *label_low5;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_week6;
    QLabel *label_icon6;
    QLabel *label_high6;
    QLabel *label_low6;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_week7;
    QLabel *label_icon7;
    QLabel *label_high7;
    QLabel *label_low7;
    QPushButton *btn_back;

    void setupUi(QWidget *weatherForester)
    {
        if (weatherForester->objectName().isEmpty())
            weatherForester->setObjectName(QStringLiteral("weatherForester"));
        weatherForester->resize(965, 1494);
        weatherForester->setMinimumSize(QSize(822, 1100));
        verticalLayout_5 = new QVBoxLayout(weatherForester);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_15 = new QWidget(weatherForester);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        verticalLayout_3 = new QVBoxLayout(widget_15);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(widget_15);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(735, 60));
        widget->setMaximumSize(QSize(735, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 42));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        linesearch = new QLineEdit(widget);
        linesearch->setObjectName(QStringLiteral("linesearch"));
        linesearch->setMinimumSize(QSize(0, 30));
        linesearch->setFont(font);

        horizontalLayout->addWidget(linesearch);

        btd_serch = new QPushButton(widget);
        btd_serch->setObjectName(QStringLiteral("btd_serch"));
        btd_serch->setMinimumSize(QSize(0, 42));
        btd_serch->setFont(font);

        horizontalLayout->addWidget(btd_serch);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(widget_15);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(735, 80));
        widget_2->setMaximumSize(QSize(735, 80));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_parent = new QLabel(widget_2);
        label_parent->setObjectName(QStringLiteral("label_parent"));
        QFont font1;
        font1.setPointSize(18);
        label_parent->setFont(font1);

        horizontalLayout_2->addWidget(label_parent);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label_city = new QLabel(widget_2);
        label_city->setObjectName(QStringLiteral("label_city"));
        label_city->setFont(font1);

        horizontalLayout_2->addWidget(label_city);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(widget_2);

        widget_16 = new QWidget(widget_15);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        widget_16->setMinimumSize(QSize(0, 150));
        widget_16->setMaximumSize(QSize(735, 140));
        label_movie = new QLabel(widget_16);
        label_movie->setObjectName(QStringLiteral("label_movie"));
        label_movie->setGeometry(QRect(560, 30, 150, 100));
        label_movie->setMinimumSize(QSize(150, 100));
        label_movie->setMaximumSize(QSize(200, 100));
        label_movie->setBaseSize(QSize(400, 400));
        label_movie->setFrameShape(QFrame::NoFrame);
        widget_22 = new QWidget(widget_16);
        widget_22->setObjectName(QStringLiteral("widget_22"));
        widget_22->setGeometry(QRect(9, 9, 371, 120));
        widget_22->setMinimumSize(QSize(319, 120));
        widget_22->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget_22);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_data = new QLabel(widget_22);
        label_data->setObjectName(QStringLiteral("label_data"));
        label_data->setMinimumSize(QSize(300, 40));
        label_data->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(16);
        label_data->setFont(font2);
        label_data->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_data);

        widget_4 = new QWidget(widget_22);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(290, 60));
        widget_4->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(7);
        widget_4->setFont(font3);
        horizontalLayout_15 = new QHBoxLayout(widget_4);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, -1, -1, -1);
        label_low = new QLabel(widget_4);
        label_low->setObjectName(QStringLiteral("label_low"));
        label_low->setMinimumSize(QSize(90, 0));
        QFont font4;
        font4.setPointSize(9);
        label_low->setFont(font4);

        horizontalLayout_15->addWidget(label_low);

        label_high = new QLabel(widget_4);
        label_high->setObjectName(QStringLiteral("label_high"));
        label_high->setMinimumSize(QSize(90, 0));
        label_high->setFont(font4);

        horizontalLayout_15->addWidget(label_high);

        label_quality = new QLabel(widget_4);
        label_quality->setObjectName(QStringLiteral("label_quality"));
        label_quality->setMinimumSize(QSize(25, 0));
        label_quality->setMaximumSize(QSize(16777215, 16777215));
        label_quality->setFont(font4);

        horizontalLayout_15->addWidget(label_quality);


        verticalLayout_4->addWidget(widget_4);

        widget_3 = new QWidget(widget_16);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(393, 9, 141, 132));
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setMaximumSize(QSize(16777215, 65535));
        label_tempture = new QLabel(widget_3);
        label_tempture->setObjectName(QStringLiteral("label_tempture"));
        label_tempture->setGeometry(QRect(20, 10, 101, 50));
        label_tempture->setMinimumSize(QSize(51, 50));
        label_tempture->setMaximumSize(QSize(16777215, 35));
        QFont font5;
        font5.setPointSize(20);
        label_tempture->setFont(font5);
        label_tempture->setAlignment(Qt::AlignCenter);
        label_type = new QLabel(widget_3);
        label_type->setObjectName(QStringLiteral("label_type"));
        label_type->setGeometry(QRect(20, 80, 91, 35));
        label_type->setMinimumSize(QSize(51, 35));
        label_type->setMaximumSize(QSize(16777215, 16777215));
        label_type->setFont(font2);
        label_type->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(widget_16);

        groupBox = new QGroupBox(widget_15);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(735, 100));
        groupBox->setMaximumSize(QSize(735, 120));
        QFont font6;
        font6.setPointSize(10);
        groupBox->setFont(font6);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_notice = new QLabel(groupBox);
        label_notice->setObjectName(QStringLiteral("label_notice"));
        label_notice->setMinimumSize(QSize(800, 60));
        label_notice->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(label_notice);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_15);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(700, 180));
        groupBox_2->setMaximumSize(QSize(730, 180));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_13 = new QWidget(groupBox_2);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setMinimumSize(QSize(700, 77));
        horizontalLayout_11 = new QHBoxLayout(widget_13);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        label_icon_rise = new QLabel(widget_13);
        label_icon_rise->setObjectName(QStringLiteral("label_icon_rise"));
        label_icon_rise->setMinimumSize(QSize(24, 0));
        label_icon_rise->setMaximumSize(QSize(15, 9));

        horizontalLayout_11->addWidget(label_icon_rise);

        label_rise = new QLabel(widget_13);
        label_rise->setObjectName(QStringLiteral("label_rise"));
        label_rise->setMinimumSize(QSize(36, 59));

        horizontalLayout_11->addWidget(label_rise);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label_icon_rise_2 = new QLabel(widget_13);
        label_icon_rise_2->setObjectName(QStringLiteral("label_icon_rise_2"));

        horizontalLayout_11->addWidget(label_icon_rise_2);

        label_down = new QLabel(widget_13);
        label_down->setObjectName(QStringLiteral("label_down"));
        label_down->setMinimumSize(QSize(36, 59));
        label_down->setMaximumSize(QSize(115666, 115666));

        horizontalLayout_11->addWidget(label_down);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        gridLayout_3->addWidget(widget_13, 0, 0, 1, 1);

        widget_14 = new QWidget(groupBox_2);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        widget_14->setMinimumSize(QSize(700, 76));
        gridLayout = new QGridLayout(widget_14);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_api = new QLabel(widget_14);
        label_api->setObjectName(QStringLiteral("label_api"));
        label_api->setMinimumSize(QSize(72, 26));
        label_api->setMaximumSize(QSize(72, 26));

        gridLayout->addWidget(label_api, 0, 4, 1, 1);

        label_46 = new QLabel(widget_14);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(24, 26));

        gridLayout->addWidget(label_46, 1, 0, 1, 1);

        label_shidu = new QLabel(widget_14);
        label_shidu->setObjectName(QStringLiteral("label_shidu"));
        label_shidu->setMinimumSize(QSize(24, 26));

        gridLayout->addWidget(label_shidu, 0, 0, 1, 1);

        label_fl = new QLabel(widget_14);
        label_fl->setObjectName(QStringLiteral("label_fl"));
        label_fl->setMinimumSize(QSize(24, 26));

        gridLayout->addWidget(label_fl, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        label_fx = new QLabel(widget_14);
        label_fx->setObjectName(QStringLiteral("label_fx"));
        label_fx->setMinimumSize(QSize(24, 26));

        gridLayout->addWidget(label_fx, 1, 2, 1, 1);

        label_49 = new QLabel(widget_14);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setMinimumSize(QSize(24, 26));

        gridLayout->addWidget(label_49, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_14, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        widget_12 = new QWidget(widget_15);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setMinimumSize(QSize(739, 400));
        widget_12->setMaximumSize(QSize(721, 65536));
        QFont font7;
        font7.setPointSize(11);
        widget_12->setFont(font7);
        verticalLayout_2 = new QVBoxLayout(widget_12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_5 = new QWidget(widget_12);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(721, 50));
        widget_5->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_week1 = new QLabel(widget_5);
        label_week1->setObjectName(QStringLiteral("label_week1"));
        label_week1->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_week1);

        label_icon1 = new QLabel(widget_5);
        label_icon1->setObjectName(QStringLiteral("label_icon1"));
        label_icon1->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_icon1);

        label_high1 = new QLabel(widget_5);
        label_high1->setObjectName(QStringLiteral("label_high1"));
        label_high1->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_high1);

        label_low1 = new QLabel(widget_5);
        label_low1->setObjectName(QStringLiteral("label_low1"));
        label_low1->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_low1);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_12);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(721, 50));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_week2 = new QLabel(widget_6);
        label_week2->setObjectName(QStringLiteral("label_week2"));

        horizontalLayout_5->addWidget(label_week2);

        label_icon2 = new QLabel(widget_6);
        label_icon2->setObjectName(QStringLiteral("label_icon2"));

        horizontalLayout_5->addWidget(label_icon2);

        label_high2 = new QLabel(widget_6);
        label_high2->setObjectName(QStringLiteral("label_high2"));

        horizontalLayout_5->addWidget(label_high2);

        label_low2 = new QLabel(widget_6);
        label_low2->setObjectName(QStringLiteral("label_low2"));

        horizontalLayout_5->addWidget(label_low2);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_12);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(721, 50));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_week3 = new QLabel(widget_7);
        label_week3->setObjectName(QStringLiteral("label_week3"));

        horizontalLayout_6->addWidget(label_week3);

        label_icon3 = new QLabel(widget_7);
        label_icon3->setObjectName(QStringLiteral("label_icon3"));

        horizontalLayout_6->addWidget(label_icon3);

        label_high3 = new QLabel(widget_7);
        label_high3->setObjectName(QStringLiteral("label_high3"));

        horizontalLayout_6->addWidget(label_high3);

        label_low3 = new QLabel(widget_7);
        label_low3->setObjectName(QStringLiteral("label_low3"));

        horizontalLayout_6->addWidget(label_low3);


        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(widget_12);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(721, 50));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_week4 = new QLabel(widget_8);
        label_week4->setObjectName(QStringLiteral("label_week4"));

        horizontalLayout_7->addWidget(label_week4);

        label_icon4 = new QLabel(widget_8);
        label_icon4->setObjectName(QStringLiteral("label_icon4"));

        horizontalLayout_7->addWidget(label_icon4);

        label_high4 = new QLabel(widget_8);
        label_high4->setObjectName(QStringLiteral("label_high4"));

        horizontalLayout_7->addWidget(label_high4);

        label_low4 = new QLabel(widget_8);
        label_low4->setObjectName(QStringLiteral("label_low4"));

        horizontalLayout_7->addWidget(label_low4);


        verticalLayout_2->addWidget(widget_8);

        widget_9 = new QWidget(widget_12);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(721, 50));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_week5 = new QLabel(widget_9);
        label_week5->setObjectName(QStringLiteral("label_week5"));

        horizontalLayout_8->addWidget(label_week5);

        label_icon5 = new QLabel(widget_9);
        label_icon5->setObjectName(QStringLiteral("label_icon5"));

        horizontalLayout_8->addWidget(label_icon5);

        label_high5 = new QLabel(widget_9);
        label_high5->setObjectName(QStringLiteral("label_high5"));

        horizontalLayout_8->addWidget(label_high5);

        label_low5 = new QLabel(widget_9);
        label_low5->setObjectName(QStringLiteral("label_low5"));

        horizontalLayout_8->addWidget(label_low5);


        verticalLayout_2->addWidget(widget_9);

        widget_10 = new QWidget(widget_12);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(721, 50));
        horizontalLayout_9 = new QHBoxLayout(widget_10);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_week6 = new QLabel(widget_10);
        label_week6->setObjectName(QStringLiteral("label_week6"));

        horizontalLayout_9->addWidget(label_week6);

        label_icon6 = new QLabel(widget_10);
        label_icon6->setObjectName(QStringLiteral("label_icon6"));

        horizontalLayout_9->addWidget(label_icon6);

        label_high6 = new QLabel(widget_10);
        label_high6->setObjectName(QStringLiteral("label_high6"));

        horizontalLayout_9->addWidget(label_high6);

        label_low6 = new QLabel(widget_10);
        label_low6->setObjectName(QStringLiteral("label_low6"));

        horizontalLayout_9->addWidget(label_low6);


        verticalLayout_2->addWidget(widget_10);

        widget_11 = new QWidget(widget_12);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(721, 50));
        horizontalLayout_10 = new QHBoxLayout(widget_11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_week7 = new QLabel(widget_11);
        label_week7->setObjectName(QStringLiteral("label_week7"));

        horizontalLayout_10->addWidget(label_week7);

        label_icon7 = new QLabel(widget_11);
        label_icon7->setObjectName(QStringLiteral("label_icon7"));

        horizontalLayout_10->addWidget(label_icon7);

        label_high7 = new QLabel(widget_11);
        label_high7->setObjectName(QStringLiteral("label_high7"));

        horizontalLayout_10->addWidget(label_high7);

        label_low7 = new QLabel(widget_11);
        label_low7->setObjectName(QStringLiteral("label_low7"));

        horizontalLayout_10->addWidget(label_low7);


        verticalLayout_2->addWidget(widget_11);

        btn_back = new QPushButton(widget_12);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(721, 50));

        verticalLayout_2->addWidget(btn_back);


        verticalLayout_3->addWidget(widget_12);


        verticalLayout_5->addWidget(widget_15);


        retranslateUi(weatherForester);

        QMetaObject::connectSlotsByName(weatherForester);
    } // setupUi

    void retranslateUi(QWidget *weatherForester)
    {
        weatherForester->setWindowTitle(QApplication::translate("weatherForester", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("weatherForester", "\345\237\216\345\270\202:", Q_NULLPTR));
        linesearch->setText(QApplication::translate("weatherForester", "\351\225\277\346\262\231\345\270\202", Q_NULLPTR));
        btd_serch->setText(QApplication::translate("weatherForester", "\346\220\234\347\264\242/\345\210\267\346\226\260", Q_NULLPTR));
        label_parent->setText(QApplication::translate("weatherForester", "\346\271\226\345\215\227\347\234\201", Q_NULLPTR));
        label_city->setText(QApplication::translate("weatherForester", "\351\225\277\346\262\231\345\270\202", Q_NULLPTR));
        label_movie->setText(QString());
        label_data->setText(QApplication::translate("weatherForester", "2023\345\271\26411\346\234\21021\346\227\245", Q_NULLPTR));
        label_low->setText(QApplication::translate("weatherForester", "\344\275\216\346\270\25115", Q_NULLPTR));
        label_high->setText(QApplication::translate("weatherForester", "\351\253\230\346\270\25115", Q_NULLPTR));
        label_quality->setText(QString());
        label_tempture->setText(QApplication::translate("weatherForester", " 15\342\204\203", Q_NULLPTR));
        label_type->setText(QApplication::translate("weatherForester", "\346\231\264", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("weatherForester", "\346\270\251\351\246\250\346\217\220\347\244\272", Q_NULLPTR));
        label_notice->setText(QApplication::translate("weatherForester", "\346\254\242\350\277\216\350\277\233\345\205\245\345\244\251\346\260\224\351\242\204\346\212\245\347\263\273\347\273\237", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("weatherForester", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        label_icon_rise->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_rise->setText(QApplication::translate("weatherForester", "05\357\274\23215", Q_NULLPTR));
        label_icon_rise_2->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_down->setText(QApplication::translate("weatherForester", "17\357\274\23230", Q_NULLPTR));
        label_api->setText(QApplication::translate("weatherForester", "91", Q_NULLPTR));
        label_46->setText(QApplication::translate("weatherForester", "\346\271\277\345\272\246", Q_NULLPTR));
        label_shidu->setText(QApplication::translate("weatherForester", "40%", Q_NULLPTR));
        label_fl->setText(QApplication::translate("weatherForester", "\345\233\233\347\272\247", Q_NULLPTR));
        label_fx->setText(QApplication::translate("weatherForester", "\350\245\277\351\243\216", Q_NULLPTR));
        label_49->setText(QApplication::translate("weatherForester", "\347\251\272\346\260\224\350\264\250\351\207\217\346\214\207\346\225\260", Q_NULLPTR));
        label_week1->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon1->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high1->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low1->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week2->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon2->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high2->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low2->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week3->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon3->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high3->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low3->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week4->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon4->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high4->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low4->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week5->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon5->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high5->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low5->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week6->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon6->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high6->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low6->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        label_week7->setText(QApplication::translate("weatherForester", "week", Q_NULLPTR));
        label_icon7->setText(QApplication::translate("weatherForester", "icon", Q_NULLPTR));
        label_high7->setText(QApplication::translate("weatherForester", "high", Q_NULLPTR));
        label_low7->setText(QApplication::translate("weatherForester", "low", Q_NULLPTR));
        btn_back->setText(QApplication::translate("weatherForester", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class weatherForester: public Ui_weatherForester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERFORESTER_H
