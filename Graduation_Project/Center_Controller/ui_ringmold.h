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
    QPushButton *pushButton_turnleft;
    QPushButton *pushButton_fine;
    QPushButton *pushButton_reduce;
    QPushButton *pushButton_turnright;
    QPushButton *pushButton_coarse;
    QPushButton *pushButton_increas;

    void setupUi(QWidget *ringmold)
    {
        if (ringmold->objectName().isEmpty())
            ringmold->setObjectName(QString::fromUtf8("ringmold"));
        ringmold->resize(640, 380);
        widget = new QWidget(ringmold);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 80, 381, 201));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_turnleft = new QPushButton(widget);
        pushButton_turnleft->setObjectName(QString::fromUtf8("pushButton_turnleft"));
        QFont font;
        font.setPointSize(16);
        pushButton_turnleft->setFont(font);

        gridLayout->addWidget(pushButton_turnleft, 0, 0, 1, 1);

        pushButton_fine = new QPushButton(widget);
        pushButton_fine->setObjectName(QString::fromUtf8("pushButton_fine"));
        pushButton_fine->setFont(font);

        gridLayout->addWidget(pushButton_fine, 0, 1, 1, 1);

        pushButton_reduce = new QPushButton(widget);
        pushButton_reduce->setObjectName(QString::fromUtf8("pushButton_reduce"));
        pushButton_reduce->setFont(font);

        gridLayout->addWidget(pushButton_reduce, 0, 2, 1, 1);

        pushButton_turnright = new QPushButton(widget);
        pushButton_turnright->setObjectName(QString::fromUtf8("pushButton_turnright"));
        pushButton_turnright->setFont(font);

        gridLayout->addWidget(pushButton_turnright, 1, 0, 1, 1);

        pushButton_coarse = new QPushButton(widget);
        pushButton_coarse->setObjectName(QString::fromUtf8("pushButton_coarse"));
        pushButton_coarse->setFont(font);

        gridLayout->addWidget(pushButton_coarse, 1, 1, 1, 1);

        pushButton_increas = new QPushButton(widget);
        pushButton_increas->setObjectName(QString::fromUtf8("pushButton_increas"));
        pushButton_increas->setFont(font);

        gridLayout->addWidget(pushButton_increas, 1, 2, 1, 1);

        QWidget::setTabOrder(pushButton_turnleft, pushButton_turnright);
        QWidget::setTabOrder(pushButton_turnright, pushButton_fine);
        QWidget::setTabOrder(pushButton_fine, pushButton_coarse);
        QWidget::setTabOrder(pushButton_coarse, pushButton_reduce);
        QWidget::setTabOrder(pushButton_reduce, pushButton_increas);

        retranslateUi(ringmold);

        QMetaObject::connectSlotsByName(ringmold);
    } // setupUi

    void retranslateUi(QWidget *ringmold)
    {
        ringmold->setWindowTitle(QApplication::translate("ringmold", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_turnleft->setText(QApplication::translate("ringmold", "\345\267\245\344\273\266\345\267\246\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_fine->setText(QApplication::translate("ringmold", "\345\217\263\350\275\254\347\273\206\350\260\203", 0, QApplication::UnicodeUTF8));
        pushButton_reduce->setText(QApplication::translate("ringmold", "\350\275\254\351\200\237\345\207\217\345\260\221", 0, QApplication::UnicodeUTF8));
        pushButton_turnright->setText(QApplication::translate("ringmold", "\345\267\245\344\273\266\345\217\263\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_coarse->setText(QApplication::translate("ringmold", "\345\217\263\350\275\254\347\262\227\350\260\203", 0, QApplication::UnicodeUTF8));
        pushButton_increas->setText(QApplication::translate("ringmold", "\350\275\254\351\200\237\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ringmold: public Ui_ringmold {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RINGMOLD_H
