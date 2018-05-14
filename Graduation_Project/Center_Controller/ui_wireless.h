/********************************************************************************
** Form generated from reading UI file 'wireless.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRELESS_H
#define UI_WIRELESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wireless
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;

    void setupUi(QWidget *wireless)
    {
        if (wireless->objectName().isEmpty())
            wireless->setObjectName(QString::fromUtf8("wireless"));
        wireless->resize(800, 320);
        widget = new QWidget(wireless);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(201, 141, 103, 66));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_3->raise();

        retranslateUi(wireless);

        QMetaObject::connectSlotsByName(wireless);
    } // setupUi

    void retranslateUi(QWidget *wireless)
    {
        wireless->setWindowTitle(QApplication::translate("wireless", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("wireless", "\346\250\241\345\235\227\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("wireless", "\346\225\260\346\215\256\344\274\240\350\276\223\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wireless: public Ui_wireless {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRELESS_H
