#include "dialog.h"
#include <QBitmap>
#include <QDebug>
#include <QKeyEvent>
#include "ui_dialog.h"
#include "Hardware/Motion/Motion.h"
#include "../rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"

extern u8 buf[32];

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    QValidator *validator = new QIntValidator(-1,255,this);
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_2->setValidator(validator);
    ui->lineEdit_3->setValidator(validator);
    ui->lineEdit_4->setValidator(validator);
    ui->lineEdit_5->setValidator(validator);
    ui->lineEdit_6->setValidator(validator);
    ui->comboBox->addItem("M1");
    ui->comboBox->addItem("M2");
    ui->comboBox->addItem("M3");
    ui->comboBox->addItem("M4");
    ui->comboBox->addItem("M5");
    ui->comboBox->addItem("M6");
    this->setWindowFlags(this->windowFlags()|Qt::FramelessWindowHint);
    Rx_thread *Reciver = new Rx_thread(this);
    connect(Reciver,SIGNAL(Rx_flag(QString)),this,SLOT(Disp_Rx_value(QString)),Qt::QueuedConnection);
    connect(this, SIGNAL(Keyvalue(QString)), this, SLOT(Update_number(QString)));
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
    GPIO_Configure("80","out");
    NRF24L01_Init();
    if(NRF24L01_check())
    {
        QPixmap pix;
        pix.load(":/images/image/wireless.bmp");
        QBitmap mask = pix.createMaskFromColor(QColor(0,0,0),Qt::MaskInColor);
        pix.setMask(mask);
        ui->label_4->setAutoFillBackground(true);
        pix = pix.scaled(ui->label_4->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        ui->label_4->setPixmap(pix);
    }
    Reciver->start();
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::Update_number(QString value)
{

}

void Dialog::Getkeyvalue()
{
    QString value = ((QPushButton * )sender())->text();//获取按键值
    str.append(value);
    emit Keyvalue(str);
}

void Dialog::on_pushButton_yes_clicked()
{
    Motion_gpio("80","1");
}

void Dialog::on_pushButton_no_clicked()
{
    ui->lineEdit->setText("OFF");
    Motion_gpio("80","0");
}

void Dialog::Disp_Rx_value(QString str)
{
    char tmp[10];
    if(str=="success")
    {
        ui->comboBox->setCurrentIndex(buf[0]);
        sprintf(tmp,"%u",buf[1]);
        ui->lineEdit->setText(tmp);
        sprintf(tmp,"%u",buf[2]);
        ui->lineEdit_2->setText(tmp);
        sprintf(tmp,"%u",buf[3]);
        ui->lineEdit_3->setText(tmp);
        sprintf(tmp,"%u",buf[4]);
        ui->lineEdit_4->setText(tmp);
        sprintf(tmp,"%u",buf[5]);
        ui->lineEdit_5->setText(tmp);
        sprintf(tmp,"%u",buf[6]);
        ui->lineEdit_6->setText(tmp);
    }

}
