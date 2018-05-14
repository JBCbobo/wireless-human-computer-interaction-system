/********************************************************************************
** Form generated from reading UI file 'ringmold.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RINGMOLD_H
#define UI_RINGMOLD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ringmold
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;

    void setupUi(QWidget *ringmold)
    {
        if (ringmold->objectName().isEmpty())
            ringmold->setObjectName(QString::fromUtf8("ringmold"));
        ringmold->resize(800, 320);
        widget = new QWidget(ringmold);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(41, 61, 299, 66));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);


        retranslateUi(ringmold);

        QMetaObject::connectSlotsByName(ringmold);
    } // setupUi

    void retranslateUi(QWidget *ringmold)
    {
        ringmold->setWindowTitle(QApplication::translate("ringmold", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ringmold", "\345\267\245\344\273\266\345\267\246\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ringmold", "\345\217\263\350\275\254\347\273\206\350\260\203", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ringmold", "\350\275\254\351\200\237\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ringmold", "\345\267\245\344\273\266\345\217\263\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ringmold", "\345\217\263\350\275\254\347\262\227\350\260\203", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ringmold", "\350\275\254\351\200\237\345\207\217\345\260\221", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ringmold: public Ui_ringmold {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RINGMOLD_H
