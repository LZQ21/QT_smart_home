/********************************************************************************
** Form generated from reading UI file 'loginin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININ_H
#define UI_LOGININ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginIn
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_text;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLineEdit *edit_newAccount;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QLineEdit *edit_new_passport;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QLineEdit *edit_new_passport_2;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *LoginIn)
    {
        if (LoginIn->objectName().isEmpty())
            LoginIn->setObjectName(QStringLiteral("LoginIn"));
        LoginIn->resize(795, 336);
        verticalLayout_3 = new QVBoxLayout(LoginIn);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_5 = new QWidget(LoginIn);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_2 = new QVBoxLayout(widget_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_text = new QLabel(widget_6);
        label_text->setObjectName(QStringLiteral("label_text"));
        QFont font;
        font.setPointSize(20);
        label_text->setFont(font);
        label_text->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_text);


        verticalLayout->addWidget(widget_6);

        widget = new QWidget(widget_5);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edit_newAccount = new QLineEdit(widget);
        edit_newAccount->setObjectName(QStringLiteral("edit_newAccount"));

        horizontalLayout->addWidget(edit_newAccount);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edit_new_passport = new QLineEdit(widget_2);
        edit_new_passport->setObjectName(QStringLiteral("edit_new_passport"));

        horizontalLayout_2->addWidget(edit_new_passport);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edit_new_passport_2 = new QLineEdit(widget_4);
        edit_new_passport_2->setObjectName(QStringLiteral("edit_new_passport_2"));

        horizontalLayout_4->addWidget(edit_new_passport_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_login = new QPushButton(widget_3);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setStyleSheet(QStringLiteral("background-color: rgb(30, 237, 255);"));

        horizontalLayout_3->addWidget(btn_login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_back = new QPushButton(widget_3);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setStyleSheet(QStringLiteral("background-color: rgb(255, 156, 75);"));

        horizontalLayout_3->addWidget(btn_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_3);


        verticalLayout_3->addWidget(widget_5);


        retranslateUi(LoginIn);

        QMetaObject::connectSlotsByName(LoginIn);
    } // setupUi

    void retranslateUi(QWidget *LoginIn)
    {
        LoginIn->setWindowTitle(QApplication::translate("LoginIn", "\346\263\250\345\206\214\347\225\214\351\235\242", Q_NULLPTR));
        label_text->setText(QApplication::translate("LoginIn", "\346\254\242\350\277\216\346\263\250\345\206\214\346\231\272\350\203\275\345\256\266\345\261\205\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("LoginIn", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginIn", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginIn", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btn_login->setText(QApplication::translate("LoginIn", "\346\263\250\345\206\214", Q_NULLPTR));
        btn_back->setText(QApplication::translate("LoginIn", "\350\277\224\345\233\236\347\231\273\351\231\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginIn: public Ui_LoginIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININ_H
