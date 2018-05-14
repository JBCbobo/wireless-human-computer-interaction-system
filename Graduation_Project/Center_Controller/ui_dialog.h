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
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QLabel *label_4;
    QLabel *label_time;
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_model;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_drill;
    QLabel *label_oddeven;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *page_2;
    QPushButton *pushButton;

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
        Dialog->setStyleSheet(QString::fromUtf8("Dialog{\n"
"background-image: url(:/images/image/start.png);\n"
"}\n"
""));
        pushButton_13 = new QPushButton(Dialog);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(550, 410, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        pushButton_13->setFont(font1);
        pushButton_13->setFocusPolicy(Qt::TabFocus);
        pushButton_13->setStyleSheet(QString::fromUtf8(""));
        pushButton_12 = new QPushButton(Dialog);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(110, 410, 101, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font1);
        pushButton_12->setFocusPolicy(Qt::TabFocus);
        pushButton_12->setStyleSheet(QString::fromUtf8(""));
        pushButton_12->setIconSize(QSize(72, 72));
        pushButton_12->setCheckable(false);
        pushButton_12->setAutoDefault(false);
        pushButton_12->setDefault(false);
        pushButton_12->setFlat(false);
        pushButton_11 = new QPushButton(Dialog);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(400, 410, 101, 41));
        pushButton_11->setFont(font1);
        pushButton_11->setFocusPolicy(Qt::TabFocus);
        pushButton_11->setStyleSheet(QString::fromUtf8(""));
        pushButton_10 = new QPushButton(Dialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(250, 410, 101, 41));
        pushButton_10->setFont(font1);
        pushButton_10->setFocusPolicy(Qt::TabFocus);
        pushButton_10->setStyleSheet(QString::fromUtf8("pushButton_10{\n"
"	border-image: url(:/images/image/wireless.bmp);\n"
"}"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(730, 10, 30, 30));
        label_4->setMinimumSize(QSize(30, 30));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_time = new QLabel(Dialog);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(480, 10, 241, 30));
        label_time->setMinimumSize(QSize(241, 30));
        QFont font2;
        font2.setPointSize(16);
        label_time->setFont(font2);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 0, 371, 71));
        QFont font3;
        font3.setPointSize(28);
        label_3->setFont(font3);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 800, 320));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 190, 164, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 49));
        QFont font4;
        font4.setPointSize(14);
        label_7->setFont(font4);

        horizontalLayout_4->addWidget(label_7);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(80, 40));
        lineEdit_4->setMaximumSize(QSize(80, 40));
        lineEdit_4->setFont(font2);
        lineEdit_4->setMaxLength(3);
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);

        label_model = new QLabel(page);
        label_model->setObjectName(QString::fromUtf8("label_model"));
        label_model->setGeometry(QRect(620, 90, 76, 40));
        label_model->setMaximumSize(QSize(16777215, 49));
        label_model->setFont(font4);
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 90, 164, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 49));
        label_5->setFont(font4);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(80, 40));
        lineEdit_2->setMaximumSize(QSize(80, 40));
        lineEdit_2->setFont(font2);
        lineEdit_2->setMaxLength(3);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 90, 164, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 49));
        label->setFont(font4);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 40));
        lineEdit->setMaximumSize(QSize(80, 40));
        lineEdit->setFont(font2);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setMaxLength(3);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        label_drill = new QLabel(page);
        label_drill->setObjectName(QString::fromUtf8("label_drill"));
        label_drill->setGeometry(QRect(620, 210, 76, 40));
        label_drill->setMaximumSize(QSize(16777215, 49));
        label_drill->setFont(font4);
        label_oddeven = new QLabel(page);
        label_oddeven->setObjectName(QString::fromUtf8("label_oddeven"));
        label_oddeven->setGeometry(QRect(620, 150, 76, 40));
        label_oddeven->setMaximumSize(QSize(16777215, 49));
        label_oddeven->setFont(font4);
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(50, 190, 164, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 49));
        label_6->setFont(font4);

        horizontalLayout_3->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(80, 40));
        lineEdit_3->setMaximumSize(QSize(80, 40));
        lineEdit_3->setFont(font2);
        lineEdit_3->setMaxLength(3);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);

        layoutWidget4 = new QWidget(page);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(490, 110, 81, 110));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font2);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font2);

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget4);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font2);

        verticalLayout->addWidget(radioButton_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 410, 51, 29));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("Dialog", "\347\216\257\346\250\241\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("Dialog", "\346\227\240\347\272\277\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("Dialog", "\345\215\225\345\255\224\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_time->setText(QApplication::translate("Dialog", "timer", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\346\225\260\346\216\247\351\222\273\345\272\212\346\216\247\345\210\266\345\231\250v2.2", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\346\267\261\345\272\246", 0, QApplication::UnicodeUTF8));
        label_model->setText(QApplication::translate("Dialog", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\350\275\254\345\212\250\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lineEdit->setInputMask(QString());
        label_drill->setText(QApplication::translate("Dialog", "\345\244\247\345\260\217\351\222\273\345\244\264", 0, QApplication::UnicodeUTF8));
        label_oddeven->setText(QApplication::translate("Dialog", "\345\245\207\345\201\266\346\225\260\346\216\222", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\346\211\223\345\255\224\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setInputMask(QString());
        radioButton->setText(QApplication::translate("Dialog", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Dialog", "\346\211\251\345\255\224", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
