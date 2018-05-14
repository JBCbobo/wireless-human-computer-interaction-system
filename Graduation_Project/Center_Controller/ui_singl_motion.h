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
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Singl_Motion)
    {
        if (Singl_Motion->objectName().isEmpty())
            Singl_Motion->setObjectName(QString::fromUtf8("Singl_Motion"));
        Singl_Motion->resize(800, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/wireless.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Singl_Motion->setWindowIcon(icon);
        Singl_Motion->setStyleSheet(QString::fromUtf8("Singl_Motion{\n"
"background-image: url(:/images/image/start.png);\n"
"}"));
        Motion_Number = new QComboBox(Singl_Motion);
        Motion_Number->setObjectName(QString::fromUtf8("Motion_Number"));
        Motion_Number->setGeometry(QRect(150, 90, 81, 31));
        QFont font;
        font.setPointSize(16);
        Motion_Number->setFont(font);
        Drill_motion = new QLabel(Singl_Motion);
        Drill_motion->setObjectName(QString::fromUtf8("Drill_motion"));
        Drill_motion->setGeometry(QRect(20, 90, 121, 31));
        QFont font1;
        font1.setPointSize(18);
        Drill_motion->setFont(font1);
        pushButton_down = new QPushButton(Singl_Motion);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(460, 120, 91, 31));
        QFont font2;
        font2.setPointSize(14);
        pushButton_down->setFont(font2);
        pushButton_location = new QPushButton(Singl_Motion);
        pushButton_location->setObjectName(QString::fromUtf8("pushButton_location"));
        pushButton_location->setGeometry(QRect(340, 120, 91, 31));
        pushButton_location->setFont(font2);
        pushButton_drilling = new QPushButton(Singl_Motion);
        pushButton_drilling->setObjectName(QString::fromUtf8("pushButton_drilling"));
        pushButton_drilling->setGeometry(QRect(340, 50, 91, 31));
        pushButton_drilling->setFont(font2);
        pushButton_up = new QPushButton(Singl_Motion);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(460, 50, 91, 31));
        pushButton_up->setFont(font2);
        pushButton = new QPushButton(Singl_Motion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 250, 111, 40));
        pushButton_2 = new QPushButton(Singl_Motion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 250, 101, 40));

        retranslateUi(Singl_Motion);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Singl_Motion, SLOT(close()));

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
        pushButton->setText(QApplication::translate("Singl_Motion", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Singl_Motion", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Singl_Motion: public Ui_Singl_Motion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGL_MOTION_H
