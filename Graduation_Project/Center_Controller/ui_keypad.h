/********************************************************************************
** Form generated from reading UI file 'keypad.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPAD_H
#define UI_KEYPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Keypad
{
public:
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_yes;
    QPushButton *pushButton_3;
    QPushButton *pushButton_no;
    QPushButton *pushButton_0;

    void setupUi(QDialog *Keypad)
    {
        if (Keypad->objectName().isEmpty())
            Keypad->setObjectName(QString::fromUtf8("Keypad"));
        Keypad->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Keypad->sizePolicy().hasHeightForWidth());
        Keypad->setSizePolicy(sizePolicy);
        Keypad->setMinimumSize(QSize(250, 253));
        Keypad->setMaximumSize(QSize(250, 253));
        pushButton_cancel = new QPushButton(Keypad);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(190, 70, 50, 50));
        QFont font;
        font.setPointSize(12);
        pushButton_cancel->setFont(font);
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new QPushButton(Keypad);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 70, 50, 50));
        pushButton_6->setFont(font);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_1 = new QPushButton(Keypad);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 130, 50, 50));
        pushButton_1->setFont(font);
        pushButton_1->setFocusPolicy(Qt::NoFocus);
        pushButton_9 = new QPushButton(Keypad);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 10, 50, 50));
        pushButton_9->setFont(font);
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(Keypad);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 130, 50, 50));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(Keypad);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 70, 50, 50));
        pushButton_4->setFont(font);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_8 = new QPushButton(Keypad);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 10, 50, 50));
        pushButton_8->setFont(font);
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_dot = new QPushButton(Keypad);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(130, 190, 50, 50));
        pushButton_dot->setFont(font);
        pushButton_dot->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(Keypad);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 70, 50, 50));
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_7 = new QPushButton(Keypad);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 10, 50, 50));
        pushButton_7->setFont(font);
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_yes = new QPushButton(Keypad);
        pushButton_yes->setObjectName(QString::fromUtf8("pushButton_yes"));
        pushButton_yes->setEnabled(true);
        pushButton_yes->setGeometry(QRect(190, 130, 50, 111));
        pushButton_yes->setFont(font);
        pushButton_yes->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(Keypad);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 130, 50, 50));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_no = new QPushButton(Keypad);
        pushButton_no->setObjectName(QString::fromUtf8("pushButton_no"));
        pushButton_no->setGeometry(QRect(190, 10, 50, 50));
        pushButton_no->setFont(font);
        pushButton_no->setFocusPolicy(Qt::NoFocus);
        pushButton_0 = new QPushButton(Keypad);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 190, 111, 50));
        pushButton_0->setFont(font);
        pushButton_0->setFocusPolicy(Qt::NoFocus);

        retranslateUi(Keypad);

        QMetaObject::connectSlotsByName(Keypad);
    } // setupUi

    void retranslateUi(QDialog *Keypad)
    {
        Keypad->setWindowTitle(QApplication::translate("Keypad", "Keypad", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("Keypad", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Keypad", "6", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("Keypad", "1", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("Keypad", "9", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Keypad", "2", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Keypad", "4", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Keypad", "8", 0, QApplication::UnicodeUTF8));
        pushButton_dot->setText(QApplication::translate("Keypad", ".", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Keypad", "5", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Keypad", "7", 0, QApplication::UnicodeUTF8));
        pushButton_yes->setText(QApplication::translate("Keypad", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Keypad", "3", 0, QApplication::UnicodeUTF8));
        pushButton_no->setText(QApplication::translate("Keypad", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("Keypad", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Keypad: public Ui_Keypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPAD_H
