/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btd_find;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *musiclist;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btd_add;
    QPushButton *btd_delete;
    QGroupBox *groupBox_moive_player;
    QVideoWidget *widget_video;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_begin;
    QSlider *horizontalSlider;
    QLabel *label_end;
    QLabel *label_current_position;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btd_before;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btd_play;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btd_next;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_model;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox_play_choice;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_voice;
    QSlider *verticalSlider_voice;
    QPushButton *btd_back;

    void setupUi(QWidget *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName(QStringLiteral("MusicPlayer"));
        MusicPlayer->resize(814, 559);
        verticalLayout_3 = new QVBoxLayout(MusicPlayer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(MusicPlayer);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);

        horizontalLayout->addWidget(lineEdit);

        btd_find = new QPushButton(widget);
        btd_find->setObjectName(QStringLiteral("btd_find"));
        btd_find->setFont(font);

        horizontalLayout->addWidget(btd_find);


        verticalLayout_3->addWidget(widget);

        widget_3 = new QWidget(MusicPlayer);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QFont font2;
        font2.setPointSize(9);
        widget_3->setFont(font2);
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(311, 296));
        groupBox->setMaximumSize(QSize(311, 296));
        groupBox->setFont(font2);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        musiclist = new QListWidget(groupBox);
        musiclist->setObjectName(QStringLiteral("musiclist"));
        musiclist->setMinimumSize(QSize(0, 163));
        musiclist->setMaximumSize(QSize(16777215, 163));

        verticalLayout_2->addWidget(musiclist);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));

        verticalLayout_2->addWidget(widget_2);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addWidget(widget_5);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btd_add = new QPushButton(widget_4);
        btd_add->setObjectName(QStringLiteral("btd_add"));
        btd_add->setFont(font2);

        horizontalLayout_3->addWidget(btd_add);

        btd_delete = new QPushButton(widget_4);
        btd_delete->setObjectName(QStringLiteral("btd_delete"));
        btd_delete->setFont(font2);

        horizontalLayout_3->addWidget(btd_delete);


        verticalLayout_2->addWidget(widget_4);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_moive_player = new QGroupBox(widget_3);
        groupBox_moive_player->setObjectName(QStringLiteral("groupBox_moive_player"));
        groupBox_moive_player->setMinimumSize(QSize(400, 296));
        groupBox_moive_player->setMaximumSize(QSize(400, 400));
        groupBox_moive_player->setBaseSize(QSize(400, 400));
        groupBox_moive_player->setFont(font2);
        widget_video = new QVideoWidget(groupBox_moive_player);
        widget_video->setObjectName(QStringLiteral("widget_video"));
        widget_video->setGeometry(QRect(10, 25, 371, 241));

        horizontalLayout_4->addWidget(groupBox_moive_player);


        verticalLayout_3->addWidget(widget_3);

        widget_6 = new QWidget(MusicPlayer);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_begin = new QLabel(widget_6);
        label_begin->setObjectName(QStringLiteral("label_begin"));
        QFont font3;
        font3.setPointSize(8);
        label_begin->setFont(font3);

        horizontalLayout_6->addWidget(label_begin);

        horizontalSlider = new QSlider(widget_6);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider);

        label_end = new QLabel(widget_6);
        label_end->setObjectName(QStringLiteral("label_end"));
        label_end->setFont(font3);

        horizontalLayout_6->addWidget(label_end);


        verticalLayout_3->addWidget(widget_6);

        label_current_position = new QLabel(MusicPlayer);
        label_current_position->setObjectName(QStringLiteral("label_current_position"));
        label_current_position->setFont(font2);
        label_current_position->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_current_position);

        groupBox_3 = new QGroupBox(MusicPlayer);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btd_before = new QPushButton(groupBox_3);
        btd_before->setObjectName(QStringLiteral("btd_before"));

        horizontalLayout_2->addWidget(btd_before);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btd_play = new QPushButton(groupBox_3);
        btd_play->setObjectName(QStringLiteral("btd_play"));

        horizontalLayout_2->addWidget(btd_play);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btd_next = new QPushButton(groupBox_3);
        btd_next->setObjectName(QStringLiteral("btd_next"));

        horizontalLayout_2->addWidget(btd_next);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_model = new QLabel(groupBox_3);
        label_model->setObjectName(QStringLiteral("label_model"));

        horizontalLayout_2->addWidget(label_model);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        comboBox_play_choice = new QComboBox(groupBox_3);
        comboBox_play_choice->setObjectName(QStringLiteral("comboBox_play_choice"));

        horizontalLayout_2->addWidget(comboBox_play_choice);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_voice = new QLabel(groupBox_3);
        label_voice->setObjectName(QStringLiteral("label_voice"));

        horizontalLayout_2->addWidget(label_voice);

        verticalSlider_voice = new QSlider(groupBox_3);
        verticalSlider_voice->setObjectName(QStringLiteral("verticalSlider_voice"));
        verticalSlider_voice->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSlider_voice);


        verticalLayout_3->addWidget(groupBox_3);

        btd_back = new QPushButton(MusicPlayer);
        btd_back->setObjectName(QStringLiteral("btd_back"));

        verticalLayout_3->addWidget(btd_back);


        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QApplication::translate("MusicPlayer", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MusicPlayer", "\346\220\234\347\264\242\346\241\206", Q_NULLPTR));
        btd_find->setText(QApplication::translate("MusicPlayer", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MusicPlayer", "\346\222\255\346\224\276\345\210\227\350\241\250", Q_NULLPTR));
        btd_add->setText(QApplication::translate("MusicPlayer", "\346\267\273\345\212\240\346\255\214\346\233\262", Q_NULLPTR));
        btd_delete->setText(QApplication::translate("MusicPlayer", "\345\210\240\351\231\244\346\255\214\346\233\262", Q_NULLPTR));
        groupBox_moive_player->setTitle(QApplication::translate("MusicPlayer", "\350\247\206\351\242\221\346\222\255\346\224\276\346\241\206", Q_NULLPTR));
        label_begin->setText(QApplication::translate("MusicPlayer", "00:00", Q_NULLPTR));
        label_end->setText(QApplication::translate("MusicPlayer", "88:88", Q_NULLPTR));
        label_current_position->setText(QApplication::translate("MusicPlayer", "00:00", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MusicPlayer", "\346\216\247\345\210\266\347\252\227\345\217\243", Q_NULLPTR));
        btd_before->setText(QApplication::translate("MusicPlayer", "\344\270\212\344\270\200\351\246\226", Q_NULLPTR));
        btd_play->setText(QApplication::translate("MusicPlayer", "\346\222\255\346\224\276", Q_NULLPTR));
        btd_next->setText(QApplication::translate("MusicPlayer", "\344\270\213\344\270\200\351\246\226", Q_NULLPTR));
        label_model->setText(QApplication::translate("MusicPlayer", "\346\222\255\346\224\276\346\250\241\345\274\217", Q_NULLPTR));
        comboBox_play_choice->clear();
        comboBox_play_choice->insertItems(0, QStringList()
         << QApplication::translate("MusicPlayer", "\345\210\227\350\241\250\345\276\252\347\216\257", Q_NULLPTR)
         << QApplication::translate("MusicPlayer", "\351\232\217\346\234\272\346\222\255\346\224\276", Q_NULLPTR)
         << QApplication::translate("MusicPlayer", "\345\215\225\346\233\262\345\276\252\347\216\257", Q_NULLPTR)
        );
        label_voice->setText(QApplication::translate("MusicPlayer", "\345\243\260\351\237\263\350\260\203\350\212\202", Q_NULLPTR));
        btd_back->setText(QApplication::translate("MusicPlayer", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
