/********************************************************************************
** Form generated from reading UI file 'singlemotion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEMOTION_H
#define UI_SINGLEMOTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_singlemotion
{
public:
    QPushButton *pushButton_down;
    QPushButton *pushButton_location;
    QComboBox *Motion_Number;
    QPushButton *pushButton_drilling;
    QLabel *Drill_motion;
    QPushButton *pushButton_up;

    void setupUi(QWidget *singlemotion)
    {
        if (singlemotion->objectName().isEmpty())
            singlemotion->setObjectName(QString::fromUtf8("singlemotion"));
        singlemotion->resize(640, 380);
        pushButton_down = new QPushButton(singlemotion);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(400, 160, 91, 31));
        QFont font;
        font.setPointSize(16);
        pushButton_down->setFont(font);
        pushButton_location = new QPushButton(singlemotion);
        pushButton_location->setObjectName(QString::fromUtf8("pushButton_location"));
        pushButton_location->setGeometry(QRect(280, 160, 91, 31));
        pushButton_location->setFont(font);
        Motion_Number = new QComboBox(singlemotion);
        Motion_Number->setObjectName(QString::fromUtf8("Motion_Number"));
        Motion_Number->setGeometry(QRect(90, 130, 81, 31));
        Motion_Number->setFont(font);
        pushButton_drilling = new QPushButton(singlemotion);
        pushButton_drilling->setObjectName(QString::fromUtf8("pushButton_drilling"));
        pushButton_drilling->setGeometry(QRect(280, 90, 91, 31));
        pushButton_drilling->setFont(font);
        Drill_motion = new QLabel(singlemotion);
        Drill_motion->setObjectName(QString::fromUtf8("Drill_motion"));
        Drill_motion->setGeometry(QRect(80, 90, 121, 31));
        Drill_motion->setFont(font);
        pushButton_up = new QPushButton(singlemotion);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(400, 90, 91, 31));
        pushButton_up->setFont(font);
        QWidget::setTabOrder(Motion_Number, pushButton_drilling);
        QWidget::setTabOrder(pushButton_drilling, pushButton_up);
        QWidget::setTabOrder(pushButton_up, pushButton_location);
        QWidget::setTabOrder(pushButton_location, pushButton_down);

        retranslateUi(singlemotion);

        QMetaObject::connectSlotsByName(singlemotion);
    } // setupUi

    void retranslateUi(QWidget *singlemotion)
    {
        singlemotion->setWindowTitle(QApplication::translate("singlemotion", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QApplication::translate("singlemotion", "\344\270\213\351\231\215", 0, QApplication::UnicodeUTF8));
        pushButton_location->setText(QApplication::translate("singlemotion", "\351\222\273\345\255\224", 0, QApplication::UnicodeUTF8));
        pushButton_drilling->setText(QApplication::translate("singlemotion", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
        Drill_motion->setText(QApplication::translate("singlemotion", "\351\222\273\345\244\264\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("singlemotion", "\344\270\212\345\215\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class singlemotion: public Ui_singlemotion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEMOTION_H
