/********************************************************************************
** Form generated from reading UI file 'romecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMECONTROL_H
#define UI_ROMECONTROL_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RomeControl
{
public:
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_room;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_cashroom6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_led5;
    QGroupBox *groupBox_room3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_led1;
    QLabel *label_air1;
    QGroupBox *groupBox_room4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_led2;
    QLabel *label_air2;
    QGroupBox *groupBox_drawroom5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_led3;
    QLabel *label_air3;
    QGroupBox *groupBox_kitchen1;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_led4;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_server;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *port;
    QPushButton *btn_connect;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_notice;
    QGroupBox *groupBox_control;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_wendu;
    QPushButton *btd_set;
    QPushButton *btd_back;
    QPushButton *btd_led;
    QPushButton *btd_air;

    void setupUi(QWidget *RomeControl)
    {
        if (RomeControl->objectName().isEmpty())
            RomeControl->setObjectName(QStringLiteral("RomeControl"));
        RomeControl->resize(897, 878);
        RomeControl->setMinimumSize(QSize(40, 600));
        RomeControl->setStyleSheet(QStringLiteral("background-color: rgb(244, 255, 229);"));
        horizontalLayout_5 = new QHBoxLayout(RomeControl);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox_room = new QGroupBox(RomeControl);
        groupBox_room->setObjectName(QStringLiteral("groupBox_room"));
        gridLayout = new QGridLayout(groupBox_room);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_cashroom6 = new QGroupBox(groupBox_room);
        groupBox_cashroom6->setObjectName(QStringLiteral("groupBox_cashroom6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_cashroom6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_led5 = new QLabel(groupBox_cashroom6);
        label_led5->setObjectName(QStringLiteral("label_led5"));
        label_led5->setMinimumSize(QSize(0, 128));

        verticalLayout_5->addWidget(label_led5);


        gridLayout->addWidget(groupBox_cashroom6, 1, 3, 1, 1);

        groupBox_room3 = new QGroupBox(groupBox_room);
        groupBox_room3->setObjectName(QStringLiteral("groupBox_room3"));
        groupBox_room3->setMinimumSize(QSize(0, 128));
        horizontalLayout = new QHBoxLayout(groupBox_room3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_4 = new QWidget(groupBox_room3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_9 = new QVBoxLayout(widget_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_led1 = new QLabel(widget_4);
        label_led1->setObjectName(QStringLiteral("label_led1"));

        verticalLayout_9->addWidget(label_led1);

        label_air1 = new QLabel(widget_4);
        label_air1->setObjectName(QStringLiteral("label_air1"));

        verticalLayout_9->addWidget(label_air1);


        horizontalLayout->addWidget(widget_4);


        gridLayout->addWidget(groupBox_room3, 0, 0, 1, 1);

        groupBox_room4 = new QGroupBox(groupBox_room);
        groupBox_room4->setObjectName(QStringLiteral("groupBox_room4"));
        groupBox_room4->setMinimumSize(QSize(0, 130));
        verticalLayout_4 = new QVBoxLayout(groupBox_room4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_led2 = new QLabel(groupBox_room4);
        label_led2->setObjectName(QStringLiteral("label_led2"));

        verticalLayout_4->addWidget(label_led2);

        label_air2 = new QLabel(groupBox_room4);
        label_air2->setObjectName(QStringLiteral("label_air2"));

        verticalLayout_4->addWidget(label_air2);


        gridLayout->addWidget(groupBox_room4, 1, 0, 1, 1);

        groupBox_drawroom5 = new QGroupBox(groupBox_room);
        groupBox_drawroom5->setObjectName(QStringLiteral("groupBox_drawroom5"));
        groupBox_drawroom5->setMinimumSize(QSize(0, 130));
        verticalLayout_3 = new QVBoxLayout(groupBox_drawroom5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_led3 = new QLabel(groupBox_drawroom5);
        label_led3->setObjectName(QStringLiteral("label_led3"));

        verticalLayout_3->addWidget(label_led3);

        label_air3 = new QLabel(groupBox_drawroom5);
        label_air3->setObjectName(QStringLiteral("label_air3"));

        verticalLayout_3->addWidget(label_air3);


        gridLayout->addWidget(groupBox_drawroom5, 1, 1, 1, 1);

        groupBox_kitchen1 = new QGroupBox(groupBox_room);
        groupBox_kitchen1->setObjectName(QStringLiteral("groupBox_kitchen1"));
        groupBox_kitchen1->setMinimumSize(QSize(0, 169));
        verticalLayout_8 = new QVBoxLayout(groupBox_kitchen1);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_led4 = new QLabel(groupBox_kitchen1);
        label_led4->setObjectName(QStringLiteral("label_led4"));

        verticalLayout_8->addWidget(label_led4);


        gridLayout->addWidget(groupBox_kitchen1, 0, 3, 1, 1);


        horizontalLayout_5->addWidget(groupBox_room);

        widget_9 = new QWidget(RomeControl);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        QFont font;
        font.setPointSize(12);
        widget_9->setFont(font);
        verticalLayout_11 = new QVBoxLayout(widget_9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox_server = new QGroupBox(widget_9);
        groupBox_server->setObjectName(QStringLiteral("groupBox_server"));
        groupBox_server->setMinimumSize(QSize(0, 300));
        verticalLayout = new QVBoxLayout(groupBox_server);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(groupBox_server);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(200, 100));
        label->setMaximumSize(QSize(200, 100));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        port = new QLineEdit(widget_2);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimumSize(QSize(150, 0));
        port->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(port);

        btn_connect = new QPushButton(widget_2);
        btn_connect->setObjectName(QStringLiteral("btn_connect"));
        btn_connect->setMinimumSize(QSize(120, 24));

        horizontalLayout_2->addWidget(btn_connect);


        verticalLayout->addWidget(widget_2);

        widget_5 = new QWidget(groupBox_server);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_notice = new QLabel(widget_5);
        label_notice->setObjectName(QStringLiteral("label_notice"));
        label_notice->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setPointSize(17);
        label_notice->setFont(font1);
        label_notice->setFrameShape(QFrame::Panel);

        horizontalLayout_3->addWidget(label_notice);


        verticalLayout->addWidget(widget_5);


        verticalLayout_11->addWidget(groupBox_server);

        groupBox_control = new QGroupBox(widget_9);
        groupBox_control->setObjectName(QStringLiteral("groupBox_control"));
        groupBox_control->setEnabled(true);
        groupBox_control->setMinimumSize(QSize(628, 600));
        verticalLayout_6 = new QVBoxLayout(groupBox_control);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_10 = new QWidget(groupBox_control);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 0));
        widget_10->setMaximumSize(QSize(400, 400));
        verticalLayout_2 = new QVBoxLayout(widget_10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(widget_10);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(71, 31));
        label_2->setMaximumSize(QSize(71, 31));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_wendu = new QLineEdit(widget);
        lineEdit_wendu->setObjectName(QStringLiteral("lineEdit_wendu"));
        lineEdit_wendu->setMinimumSize(QSize(100, 24));

        horizontalLayout_4->addWidget(lineEdit_wendu);


        verticalLayout_2->addWidget(widget);

        btd_set = new QPushButton(widget_10);
        btd_set->setObjectName(QStringLiteral("btd_set"));

        verticalLayout_2->addWidget(btd_set);

        btd_back = new QPushButton(widget_10);
        btd_back->setObjectName(QStringLiteral("btd_back"));
        btd_back->setMinimumSize(QSize(200, 0));

        verticalLayout_2->addWidget(btd_back);

        btd_led = new QPushButton(widget_10);
        btd_led->setObjectName(QStringLiteral("btd_led"));
        btd_led->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(btd_led);

        btd_air = new QPushButton(widget_10);
        btd_air->setObjectName(QStringLiteral("btd_air"));
        btd_air->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(btd_air);


        verticalLayout_6->addWidget(widget_10);


        verticalLayout_11->addWidget(groupBox_control);


        horizontalLayout_5->addWidget(widget_9);


        retranslateUi(RomeControl);

        QMetaObject::connectSlotsByName(RomeControl);
    } // setupUi

    void retranslateUi(QWidget *RomeControl)
    {
        RomeControl->setWindowTitle(QApplication::translate("RomeControl", "Form", Q_NULLPTR));
        groupBox_room->setTitle(QApplication::translate("RomeControl", "\345\256\266\345\261\205", Q_NULLPTR));
        groupBox_cashroom6->setTitle(QApplication::translate("RomeControl", "\345\216\225\346\211\2005", Q_NULLPTR));
        label_led5->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        groupBox_room3->setTitle(QApplication::translate("RomeControl", "\344\270\273\345\215\2471", Q_NULLPTR));
        label_led1->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        label_air1->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        groupBox_room4->setTitle(QApplication::translate("RomeControl", "\345\256\242\346\210\2772", Q_NULLPTR));
        label_led2->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        label_air2->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        groupBox_drawroom5->setTitle(QApplication::translate("RomeControl", "\351\244\220\345\256\242\345\216\2053", Q_NULLPTR));
        label_led3->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        label_air3->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        groupBox_kitchen1->setTitle(QApplication::translate("RomeControl", "\345\216\250\346\210\2774", Q_NULLPTR));
        label_led4->setText(QApplication::translate("RomeControl", "TextLabel", Q_NULLPTR));
        groupBox_server->setTitle(QApplication::translate("RomeControl", "\346\234\215\345\212\241\345\231\250\350\277\236\346\216\245", Q_NULLPTR));
        label->setText(QApplication::translate("RomeControl", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        btn_connect->setText(QApplication::translate("RomeControl", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        label_4->setText(QApplication::translate("RomeControl", "\347\212\266\346\200\201\346\240\217", Q_NULLPTR));
        label_notice->setText(QString());
        groupBox_control->setTitle(QApplication::translate("RomeControl", "\346\216\247\345\210\266\347\252\227\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("RomeControl", "\346\270\251\345\272\246", Q_NULLPTR));
        btd_set->setText(QApplication::translate("RomeControl", "\350\256\276\347\275\256\346\270\251\345\272\246", Q_NULLPTR));
        btd_back->setText(QApplication::translate("RomeControl", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        btd_led->setText(QApplication::translate("RomeControl", "openled", Q_NULLPTR));
        btd_air->setText(QApplication::translate("RomeControl", "openair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RomeControl: public Ui_RomeControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMECONTROL_H
