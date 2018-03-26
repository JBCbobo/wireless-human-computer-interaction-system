/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QTextEdit *textEdit_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QTextEdit *textEdit_4;
    QGroupBox *groupBox;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_21;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_18;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QTextEdit *textEdit_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QTextEdit *textEdit_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(800, 480);
        QFont font;
        font.setPointSize(10);
        Dialog->setFont(font);
        Dialog->setMouseTracking(false);
        Dialog->setFocusPolicy(Qt::NoFocus);
        Dialog->setContextMenuPolicy(Qt::NoContextMenu);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 10, 371, 71));
        QFont font1;
        font1.setPointSize(28);
        label_3->setFont(font1);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(710, 10, 71, 71));
        label_4->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 270, 191, 51));
        layoutWidget->setMaximumSize(QSize(16777215, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 49));
        QFont font2;
        font2.setPointSize(14);
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(true);
        textEdit_2->setMaximumSize(QSize(16777215, 49));
        QFont font3;
        font3.setPointSize(16);
        textEdit_2->setFont(font3);
        textEdit_2->setAcceptDrops(true);
        textEdit_2->setReadOnly(false);
        textEdit_2->setAcceptRichText(true);

        horizontalLayout_2->addWidget(textEdit_2);

        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 340, 191, 51));
        layoutWidget_2->setMaximumSize(QSize(16777215, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 49));
        label_6->setFont(font2);

        horizontalLayout_3->addWidget(label_6);

        textEdit_3 = new QTextEdit(layoutWidget_2);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setEnabled(true);
        textEdit_3->setMaximumSize(QSize(16777215, 49));
        textEdit_3->setFont(font3);
        textEdit_3->setAcceptDrops(true);
        textEdit_3->setReadOnly(false);
        textEdit_3->setAcceptRichText(true);

        horizontalLayout_3->addWidget(textEdit_3);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 410, 191, 51));
        layoutWidget_3->setMaximumSize(QSize(16777215, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 49));
        label_7->setFont(font2);

        horizontalLayout_4->addWidget(label_7);

        textEdit_4 = new QTextEdit(layoutWidget_3);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setEnabled(true);
        textEdit_4->setMaximumSize(QSize(16777215, 49));
        textEdit_4->setFont(font3);
        textEdit_4->setAcceptDrops(true);
        textEdit_4->setReadOnly(false);
        textEdit_4->setAcceptRichText(true);

        horizontalLayout_4->addWidget(textEdit_4);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 270, 441, 191));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(20, 140, 90, 40));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 82, 90, 40));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 24, 90, 40));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(220, 82, 90, 40));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 24, 90, 40));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(220, 140, 90, 40));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(120, 82, 90, 41));
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(120, 140, 90, 40));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 24, 90, 40));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 24, 90, 40));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 82, 90, 40));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 140, 90, 40));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(690, 270, 81, 191));
        pushButton_21 = new QPushButton(groupBox_2);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(10, 140, 60, 40));
        pushButton_19 = new QPushButton(groupBox_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(10, 20, 60, 40));
        pushButton_20 = new QPushButton(groupBox_2);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(10, 80, 60, 40));
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(450, 130, 321, 131));
        pushButton_17 = new QPushButton(groupBox_3);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(220, 20, 90, 40));
        pushButton_16 = new QPushButton(groupBox_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(120, 80, 90, 40));
        pushButton_13 = new QPushButton(groupBox_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(20, 20, 90, 40));
        pushButton_14 = new QPushButton(groupBox_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(20, 80, 90, 40));
        pushButton_15 = new QPushButton(groupBox_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(120, 20, 90, 40));
        pushButton_18 = new QPushButton(groupBox_3);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(220, 80, 90, 40));
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 200, 191, 51));
        layoutWidget1->setMaximumSize(QSize(16777215, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 49));
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setMaximumSize(QSize(16777215, 49));
        textEdit->setFont(font3);
        textEdit->setAcceptDrops(true);
        textEdit->setReadOnly(false);
        textEdit->setAcceptRichText(true);

        horizontalLayout->addWidget(textEdit);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(33, 130, 81, 41));
        label_2->setFont(font2);
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 130, 90, 40));
        comboBox->setMaximumSize(QSize(1000, 10000));
        comboBox->setFont(font2);
        layoutWidget_4 = new QWidget(Dialog);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(250, 140, 191, 51));
        layoutWidget_4->setMaximumSize(QSize(16777215, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 49));
        label_8->setFont(font2);

        horizontalLayout_5->addWidget(label_8);

        textEdit_5 = new QTextEdit(layoutWidget_4);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setEnabled(true);
        textEdit_5->setMaximumSize(QSize(16777215, 49));
        textEdit_5->setFont(font3);
        textEdit_5->setAcceptDrops(true);
        textEdit_5->setReadOnly(false);
        textEdit_5->setAcceptRichText(true);

        horizontalLayout_5->addWidget(textEdit_5);

        layoutWidget_5 = new QWidget(Dialog);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(250, 210, 191, 51));
        layoutWidget_5->setMaximumSize(QSize(16777215, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 49));
        label_9->setFont(font2);

        horizontalLayout_6->addWidget(label_9);

        textEdit_6 = new QTextEdit(layoutWidget_5);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setEnabled(true);
        textEdit_6->setMaximumSize(QSize(16777215, 49));
        textEdit_6->setFont(font3);
        textEdit_6->setAcceptDrops(true);
        textEdit_6->setReadOnly(false);
        textEdit_6->setAcceptRichText(true);

        horizontalLayout_6->addWidget(textEdit_6);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\346\225\260\346\216\247\351\222\273\345\272\212\346\216\247\345\210\266\345\231\250v1.0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\346\211\223\345\255\224\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\346\267\261\345\272\246", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "\346\225\260\345\255\227\351\224\256\345\214\272", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("Dialog", "9", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("Dialog", "8", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Dialog", "2", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("Dialog", "7", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Dialog", "1", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "Yes", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Dialog", "6", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("Dialog", "0", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Dialog", "3", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Dialog", "4", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Dialog", "5", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "No", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\351\222\273\345\255\224\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("Dialog", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("Dialog", "\346\211\251\345\255\224", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\347\216\257\346\250\241\350\275\254\345\212\250\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("Dialog", "\345\217\263\350\275\254\347\262\227\350\260\203", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("Dialog", "\345\267\245\344\273\266\345\267\246\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("Dialog", "\351\222\273\351\200\237\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("Dialog", "\351\222\273\351\200\237\345\207\217\345\260\221", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("Dialog", "\345\267\245\344\273\266\345\217\263\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("Dialog", "\345\217\263\350\275\254\347\273\206\350\260\203", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\350\275\254\345\212\250\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\351\222\273\345\244\264\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\351\227\264\350\267\235", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\350\241\214\350\267\235", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
