/********************************************************************************
** Form generated from reading UI file 'findback.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBACK_H
#define UI_FINDBACK_H

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

class Ui_FindBack
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_picture;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_find;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *FindBack)
    {
        if (FindBack->objectName().isEmpty())
            FindBack->setObjectName(QStringLiteral("FindBack"));
        FindBack->resize(414, 418);
        verticalLayout_2 = new QVBoxLayout(FindBack);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(FindBack);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_picture = new QLabel(widget_2);
        label_picture->setObjectName(QStringLiteral("label_picture"));

        verticalLayout->addWidget(label_picture);


        verticalLayout_2->addWidget(widget_2);

        widget = new QWidget(FindBack);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget);

        widget_4 = new QWidget(FindBack);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btn_find = new QPushButton(widget_4);
        btn_find->setObjectName(QStringLiteral("btn_find"));

        horizontalLayout_4->addWidget(btn_find);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btn_back = new QPushButton(widget_4);
        btn_back->setObjectName(QStringLiteral("btn_back"));

        horizontalLayout_4->addWidget(btn_back);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(widget_4);


        retranslateUi(FindBack);

        QMetaObject::connectSlotsByName(FindBack);
    } // setupUi

    void retranslateUi(QWidget *FindBack)
    {
        FindBack->setWindowTitle(QApplication::translate("FindBack", "Form", Q_NULLPTR));
        label_picture->setText(QString());
        label->setText(QApplication::translate("FindBack", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        btn_find->setText(QApplication::translate("FindBack", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        btn_back->setText(QApplication::translate("FindBack", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindBack: public Ui_FindBack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBACK_H
