/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVideoWidget *widget_camera;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_device;
    QPushButton *btd_back;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btd_open;
    QPushButton *btd_cat;
    QPushButton *btd_close;

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(729, 834);
        groupBox = new QGroupBox(Camera);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 711, 381));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_camera = new QVideoWidget(groupBox);
        widget_camera->setObjectName(QStringLiteral("widget_camera"));
        widget_camera->setBaseSize(QSize(400, 400));

        verticalLayout_2->addWidget(widget_camera);

        widget_4 = new QWidget(Camera);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(10, 410, 711, 282));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        comboBox_device = new QComboBox(widget_2);
        comboBox_device->setObjectName(QStringLiteral("comboBox_device"));
        comboBox_device->setFont(font);

        horizontalLayout_2->addWidget(comboBox_device);

        btd_back = new QPushButton(widget_2);
        btd_back->setObjectName(QStringLiteral("btd_back"));
        btd_back->setFont(font);

        horizontalLayout_2->addWidget(btd_back);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(widget_4);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btd_open = new QPushButton(widget);
        btd_open->setObjectName(QStringLiteral("btd_open"));
        btd_open->setFont(font);

        horizontalLayout->addWidget(btd_open);

        btd_cat = new QPushButton(widget);
        btd_cat->setObjectName(QStringLiteral("btd_cat"));
        btd_cat->setFont(font);

        horizontalLayout->addWidget(btd_cat);

        btd_close = new QPushButton(widget);
        btd_close->setObjectName(QStringLiteral("btd_close"));
        btd_close->setFont(font);

        horizontalLayout->addWidget(btd_close);


        verticalLayout->addWidget(widget);


        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QWidget *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Camera", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207", Q_NULLPTR));
        label->setText(QApplication::translate("Camera", "\345\217\257\347\224\250\350\256\276\345\244\207", Q_NULLPTR));
        btd_back->setText(QApplication::translate("Camera", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        btd_open->setText(QApplication::translate("Camera", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        btd_cat->setText(QApplication::translate("Camera", "\346\210\252\345\233\276", Q_NULLPTR));
        btd_close->setText(QApplication::translate("Camera", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
