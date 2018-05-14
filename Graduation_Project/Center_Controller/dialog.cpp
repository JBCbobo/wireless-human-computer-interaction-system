#include "dialog.h"
#include <QBitmap>
#include <QDebug>
#include <QKeyEvent>
#include <QDateTime>
#include <QIcon>
#include "ui_dialog.h"
#include "Hardware/Motion/Motion.h"
#include "thread/rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"
#include "Src/inputpara/inputpara.h"
#include "singl_motion.h"
#include "Src/ringmold/ringmold.h"
#include "Src/wireless/wireless.h"

extern u8 buf[32];

char model_Item[][10]={
    "定位",
    "扩孔",
    "钻孔"
};

char drill_Item[][10]={
    "大钻头",
    "小钻头"
};

char OddEven_Item[][10]={
    "奇数排",
    "偶数排"
};

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    this->setWindowFlags(this->windowFlags()|Qt::FramelessWindowHint);
    Rx_thread *Reciver = new Rx_thread(this);
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    connect(Reciver,SIGNAL(Rx_flag(QString)),this,SLOT(Disp_Rx_value(QString)),Qt::QueuedConnection);
    GPIO_Configure("80","out");
    NRF24L01_Init();
    if(NRF24L01_check())
    {
        QPixmap pix;
        pix.load(":/images/image/wifi.png");
        pix = pix.scaled(ui->label_4->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        ui->label_4->setPixmap(pix);
    }
    Reciver->start();
    m_ringmold = new ringmold(this);
    m_wireless = new wireless(this);
    m_inputpara = new inputpara(this);

    ui->stackedWidget->addWidget(m_ringmold);
    ui->stackedWidget->addWidget(m_wireless);
    ui->stackedWidget->addWidget(m_inputpara);
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


void Dialog::Disp_Rx_value(QString str)
{
    char tmp[10];
    if(str=="success")
    {
        sprintf(tmp,"%u",buf[9]); //转动速度
        ui->lineEdit->setText(tmp);
        sprintf(tmp,"%u",buf[10]); //钻动速度
        ui->lineEdit_2->setText(tmp);
        sprintf(tmp,"%u",buf[4]); //孔数
        ui->lineEdit_3->setText(tmp);
        sprintf(tmp,"%u",buf[7]);//钻孔速度
        ui->lineEdit_4->setText(tmp);
        ui->label_drill->setText(tr(drill_Item[buf[8]])); //大小钻头
        ui->label_model->setText(tr(model_Item[buf[1]])); //模式
        ui->label_oddeven->setText(tr(OddEven_Item[buf[5]]));//奇偶数排
    }
    else if(str=="nrf24l01")
    {

    }
    else if(str=="singlemotion")
    {

    }
    else if(str=="ringmold")
    {

    }

}

void Dialog::timerUpdate()
{
    QDateTime sys_time = QDateTime::currentDateTime();
    QString str_sys_time = sys_time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_time->setText(str_sys_time);
}

void Dialog::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Dialog::on_pushButton_11_clicked()
{

    ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Dialog::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Dialog::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}
