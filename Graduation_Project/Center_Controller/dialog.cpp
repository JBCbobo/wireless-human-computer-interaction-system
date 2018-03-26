#include "dialog.h"
#include <QBitmap>
#include <QDebug>
#include "ui_dialog.h"
#include "Hardware/Motion/Motion.h"
#include "../rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    ui->comboBox->addItem("M1");
    ui->comboBox->addItem("M2");
    ui->comboBox->addItem("M2");
    ui->textEdit->setText("360");
    this->setWindowFlags(this->windowFlags()|Qt::FramelessWindowHint);
    Rx_thread *Reciver = new Rx_thread(this);
    connect(Reciver,SIGNAL(Rx_flag(QString)),this,SLOT(Disp_Rx_value(QString)),Qt::QueuedConnection);
    GPIO_Configure(80);
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
//    GPIO_close(80);
//    GPIO_close(14);
//    GPIO_close(175);
//    GPIO_close(13);
//    GPIO_close(15);
//    GPIO_close(10);
//    GPIO_close(12);
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

void Dialog::on_pushButton_clicked()
{
    Turnon_Motion(80);
}

void Dialog::on_pushButton_2_clicked()
{
    ui->textEdit->setText("OFF");
    Turnoff_Motion(80);
}

void Dialog::Disp_Rx_value(QString str)
{
    ui->textEdit->setText(str);
}

