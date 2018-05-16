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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wireless
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;

    void setupUi(QWidget *wireless)
    {
        if (wireless->objectName().isEmpty())
            wireless->setObjectName(QString::fromUtf8("wireless"));
        wireless->resize(640, 380);
        pushButton_3 = new QPushButton(wireless);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 80, 131, 61));
        QFont font;
        font.setPointSize(16);
        pushButton_3->setFont(font);
        pushButton_6 = new QPushButton(wireless);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 80, 131, 61));
        pushButton_6->setFont(font);

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
