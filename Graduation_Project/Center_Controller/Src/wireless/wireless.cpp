#include "wireless.h"
#include "ui_wireless.h"
#include <QMessageBox>
#include "Hardware/NRF24L01/NRF24L01.h"

extern u8 buf[32];

wireless::wireless(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wireless)
{
    ui->setupUi(this);
}

wireless::~wireless()
{
    delete ui;
}

void wireless::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void wireless::on_pushButton_3_clicked()
{
    QMessageBox Messagebox;
    if(NRF24L01_check())
    {
        Messagebox.about(this,"Normol","NRF24L01 Normol!");
    }
    else
    {

        Messagebox.about(this,"Error","NRF24L01 error!");
    }
}

void wireless::on_pushButton_6_clicked()
{
    QMessageBox Messagebox;
    buf[0] = 2;
    NRF24L01_TX_Mode();
    if(NRF24L01_TxPacket(buf)==TX_OK)
    {
        Messagebox.about(this,"Error","Send Data failed!");
    }
    else
    {
        Messagebox.about(this,"Normol","Send Data  Success!");
    }
}
