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
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "myWidget/mylabel/mylabel.h"
#include "myWidget/mylabel/mylabelbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QLabel *label_wifi;
    QLabel *label_title;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_model;
    QLabel *label_oddeven;
    QLabel *label_drill;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QWidget *page_2;
    myLabelButton *label_colthes;
    QPushButton *pushButton;
    myLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_time;

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
        Dialog->setStyleSheet(QString::fromUtf8(""));
        pushButton_13 = new QPushButton(Dialog);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(690, 260, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_13->setFont(font1);
        pushButton_13->setFocusPolicy(Qt::TabFocus);
        pushButton_13->setStyleSheet(QString::fromUtf8(""));
        pushButton_12 = new QPushButton(Dialog);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(690, 340, 101, 41));
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
        pushButton_11->setGeometry(QRect(690, 100, 101, 41));
        pushButton_11->setFont(font1);
        pushButton_11->setFocusPolicy(Qt::TabFocus);
        pushButton_11->setStyleSheet(QString::fromUtf8(""));
        pushButton_10 = new QPushButton(Dialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(690, 180, 101, 41));
        pushButton_10->setFont(font1);
        pushButton_10->setFocusPolicy(Qt::TabFocus);
        pushButton_10->setStyleSheet(QString::fromUtf8("pushButton_10{\n"
"	border-image: url(:/images/image/wireless.bmp);\n"
"}"));
        label_wifi = new QLabel(Dialog);
        label_wifi->setObjectName(QString::fromUtf8("label_wifi"));
        label_wifi->setGeometry(QRect(760, 10, 30, 30));
        label_wifi->setMinimumSize(QSize(30, 30));
        label_wifi->setStyleSheet(QString::fromUtf8(""));
        label_title = new QLabel(Dialog);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(20, 0, 371, 71));
        QFont font2;
        font2.setPointSize(28);
        label_title->setFont(font2);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 640, 380));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 270, 521, 41));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_model = new QLabel(widget);
        label_model->setObjectName(QString::fromUtf8("label_model"));
        label_model->setMaximumSize(QSize(16777215, 49));
        QFont font3;
        font3.setPointSize(16);
        label_model->setFont(font3);

        horizontalLayout_5->addWidget(label_model);

        label_oddeven = new QLabel(widget);
        label_oddeven->setObjectName(QString::fromUtf8("label_oddeven"));
        label_oddeven->setMaximumSize(QSize(16777215, 49));
        label_oddeven->setFont(font3);

        horizontalLayout_5->addWidget(label_oddeven);

        label_drill = new QLabel(widget);
        label_drill->setObjectName(QString::fromUtf8("label_drill"));
        label_drill->setMaximumSize(QSize(16777215, 49));
        label_drill->setFont(font3);

        horizontalLayout_5->addWidget(label_drill);

        widget1 = new QWidget(page);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 9, 521, 241));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 49));
        label->setFont(font3);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 40));
        lineEdit->setMaximumSize(QSize(80, 40));
        lineEdit->setFont(font3);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setMaxLength(3);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 49));
        label_5->setFont(font3);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(80, 40));
        lineEdit_2->setMaximumSize(QSize(80, 40));
        lineEdit_2->setFont(font3);
        lineEdit_2->setFocusPolicy(Qt::NoFocus);
        lineEdit_2->setMaxLength(3);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 49));
        label_6->setFont(font3);

        horizontalLayout_3->addWidget(label_6);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(80, 40));
        lineEdit_3->setMaximumSize(QSize(80, 40));
        lineEdit_3->setFont(font3);
        lineEdit_3->setFocusPolicy(Qt::NoFocus);
        lineEdit_3->setMaxLength(3);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 49));
        label_7->setFont(font3);

        horizontalLayout_4->addWidget(label_7);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(80, 40));
        lineEdit_4->setMaximumSize(QSize(80, 40));
        lineEdit_4->setFont(font3);
        lineEdit_4->setFocusPolicy(Qt::NoFocus);
        lineEdit_4->setMaxLength(3);
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        stackedWidget->addWidget(page);
        label_model->raise();
        label_drill->raise();
        label_oddeven->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        label_colthes = new myLabelButton(Dialog);
        label_colthes->setObjectName(QString::fromUtf8("label_colthes"));
        label_colthes->setGeometry(QRect(720, 10, 30, 30));
        label_colthes->setMinimumSize(QSize(30, 30));
        label_colthes->setStyleSheet(QString::fromUtf8(""));
        label_colthes->setTextFormat(Qt::AutoText);
        label_colthes->setScaledContents(false);
        label_colthes->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(694, 410, 91, 61));
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton->setIconSize(QSize(48, 48));
        pushButton->setFlat(false);
        label_2 = new myLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 440, 640, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Abyssinica SIL"));
        font4.setPointSize(16);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 60, 800, 20));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(Dialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(640, 70, 10, 410));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(223, 171, 255);"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(Dialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 440, 645, 3));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setFrameShape(QFrame::HLine);
        label_time = new QLabel(Dialog);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(450, 20, 271, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Abyssinica SIL"));
        font5.setPointSize(14);
        label_time->setFont(font5);
        QWidget::setTabOrder(pushButton_11, pushButton_10);
        QWidget::setTabOrder(pushButton_10, pushButton_13);
        QWidget::setTabOrder(pushButton_13, pushButton_12);
        QWidget::setTabOrder(pushButton_12, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_3);

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
        label_wifi->setText(QString());
        label_title->setText(QApplication::translate("Dialog", "\346\225\260\346\216\247\351\222\273\345\272\212\346\216\247\345\210\266\345\231\250v2.2", 0, QApplication::UnicodeUTF8));
        label_model->setText(QApplication::translate("Dialog", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_oddeven->setText(QApplication::translate("Dialog", "\345\245\207\345\201\266\346\225\260\346\216\222", 0, QApplication::UnicodeUTF8));
        label_drill->setText(QApplication::translate("Dialog", "\345\244\247\345\260\217\351\222\273\345\244\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\350\275\254\345\212\250\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lineEdit->setInputMask(QString());
        label_5->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\346\211\223\345\255\224\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setInputMask(QString());
        label_7->setText(QApplication::translate("Dialog", "\351\222\273\345\255\224\346\267\261\345\272\246", 0, QApplication::UnicodeUTF8));
        label_colthes->setText(QString());
        pushButton->setText(QApplication::translate("Dialog", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250\346\225\260\346\216\247\351\222\273\345\272\212\346\216\247\345\210\266\345\231\250\357\274\201", 0, QApplication::UnicodeUTF8));
        label_time->setText(QApplication::translate("Dialog", " 2018-05-10 21:02:00 Monday", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
