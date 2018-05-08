/********************************************************************************
** Form generated from reading UI file 'inputpara.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPARA_H
#define UI_INPUTPARA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include "mylineedit/mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_InputPara
{
public:
    QLabel *label;
    myLineEdit *lineEdit;
    myLineEdit *lineEdit_2;
    myLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;

    void setupUi(QDialog *InputPara)
    {
        if (InputPara->objectName().isEmpty())
            InputPara->setObjectName(QString::fromUtf8("InputPara"));
        InputPara->resize(445, 217);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputPara->sizePolicy().hasHeightForWidth());
        InputPara->setSizePolicy(sizePolicy);
        InputPara->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/wireless.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        InputPara->setWindowIcon(icon);
        label = new QLabel(InputPara);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 61, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEdit = new myLineEdit(InputPara);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 71, 31));
        lineEdit->setFont(font);
        lineEdit_2 = new myLineEdit(InputPara);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 71, 31));
        lineEdit_2->setFont(font);
        lineEdit_3 = new myLineEdit(InputPara);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 140, 71, 31));
        lineEdit_3->setFont(font);
        label_2 = new QLabel(InputPara);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 81, 21));
        label_2->setFont(font);
        label_3 = new QLabel(InputPara);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 81, 31));
        label_3->setFont(font);
        pushButton = new QPushButton(InputPara);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 130, 70, 40));
        pushButton_2 = new QPushButton(InputPara);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 130, 70, 40));
        groupBox = new QGroupBox(InputPara);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 28, 231, 41));
        groupBox->setFlat(true);
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(120, 10, 97, 21));
        radioButton_4->setFont(font);
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 10, 97, 21));
        radioButton_3->setFont(font);
        groupBox_2 = new QGroupBox(InputPara);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 80, 231, 41));
        groupBox_2->setFlat(true);
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 10, 97, 21));
        radioButton_2->setFont(font);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 10, 97, 21));
        radioButton->setFont(font);

        retranslateUi(InputPara);
        QObject::connect(pushButton_2, SIGNAL(clicked()), InputPara, SLOT(close()));

        QMetaObject::connectSlotsByName(InputPara);
    } // setupUi

    void retranslateUi(QDialog *InputPara)
    {
        InputPara->setWindowTitle(QApplication::translate("InputPara", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InputPara", "\345\255\224\346\225\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InputPara", "\346\211\251\345\255\224\346\267\261\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("InputPara", "\351\222\273\345\255\224\346\267\261\345\272\246", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("InputPara", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("InputPara", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        radioButton_4->setText(QApplication::translate("InputPara", "\345\201\266\346\225\260\346\216\222", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("InputPara", "\345\245\207\346\225\260\346\216\222", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        radioButton_2->setText(QApplication::translate("InputPara", "\345\260\217\351\222\273\345\244\264", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("InputPara", "\345\244\247\351\222\273\345\244\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputPara: public Ui_InputPara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPARA_H
