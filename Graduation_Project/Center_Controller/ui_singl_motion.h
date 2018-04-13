/********************************************************************************
** Form generated from reading UI file 'singl_motion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGL_MOTION_H
#define UI_SINGL_MOTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Singl_Motion
{
public:
    QComboBox *Motion_Number;
    QLabel *Drill_motion;
    QPushButton *pushButton_down;
    QPushButton *pushButton_location;
    QPushButton *pushButton_drilling;
    QPushButton *pushButton_up;

    void setupUi(QDialog *Singl_Motion)
    {
        if (Singl_Motion->objectName().isEmpty())
            Singl_Motion->setObjectName(QString::fromUtf8("Singl_Motion"));
        Singl_Motion->resize(240, 237);
        Singl_Motion->setMinimumSize(QSize(240, 237));
        Singl_Motion->setMaximumSize(QSize(240, 320));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/wireless.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Singl_Motion->setWindowIcon(icon);
        Motion_Number = new QComboBox(Singl_Motion);
        Motion_Number->setObjectName(QString::fromUtf8("Motion_Number"));
        Motion_Number->setGeometry(QRect(140, 50, 81, 31));
        QFont font;
        font.setPointSize(16);
        Motion_Number->setFont(font);
        Drill_motion = new QLabel(Singl_Motion);
        Drill_motion->setObjectName(QString::fromUtf8("Drill_motion"));
        Drill_motion->setGeometry(QRect(10, 50, 121, 31));
        QFont font1;
        font1.setPointSize(18);
        Drill_motion->setFont(font1);
        pushButton_down = new QPushButton(Singl_Motion);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(130, 190, 91, 31));
        QFont font2;
        font2.setPointSize(14);
        pushButton_down->setFont(font2);
        pushButton_location = new QPushButton(Singl_Motion);
        pushButton_location->setObjectName(QString::fromUtf8("pushButton_location"));
        pushButton_location->setGeometry(QRect(10, 190, 91, 31));
        pushButton_location->setFont(font2);
        pushButton_drilling = new QPushButton(Singl_Motion);
        pushButton_drilling->setObjectName(QString::fromUtf8("pushButton_drilling"));
        pushButton_drilling->setGeometry(QRect(10, 120, 91, 31));
        pushButton_drilling->setFont(font2);
        pushButton_up = new QPushButton(Singl_Motion);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(130, 120, 91, 31));
        pushButton_up->setFont(font2);

        retranslateUi(Singl_Motion);

        QMetaObject::connectSlotsByName(Singl_Motion);
    } // setupUi

    void retranslateUi(QDialog *Singl_Motion)
    {
        Singl_Motion->setWindowTitle(QApplication::translate("Singl_Motion", "Dialog", 0, QApplication::UnicodeUTF8));
        Drill_motion->setText(QApplication::translate("Singl_Motion", "\351\222\273\345\244\264\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QApplication::translate("Singl_Motion", "DOWN", 0, QApplication::UnicodeUTF8));
        pushButton_location->setText(QApplication::translate("Singl_Motion", "\351\222\273\345\255\224", 0, QApplication::UnicodeUTF8));
        pushButton_drilling->setText(QApplication::translate("Singl_Motion", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("Singl_Motion", "UP", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Singl_Motion: public Ui_Singl_Motion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGL_MOTION_H
