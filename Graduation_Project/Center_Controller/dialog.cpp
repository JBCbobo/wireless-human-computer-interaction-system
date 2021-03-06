#include "dialog.h"
#include <QBitmap>
#include <QDebug>
#include <QKeyEvent>
#include <QDateTime>
#include <QValidator>
#include "ui_dialog.h"
#include "Hardware/Motion/Motion.h"
#include "thread/rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"
#include "inputpara.h"
#include "singl_motion.h"

extern u8 buf[32];

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    QValidator *validator = new QIntValidator(0,255,this);
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_2->setValidator(validator);
    ui->lineEdit_3->setValidator(validator);
    ui->lineEdit_4->setValidator(validator);
    ui->radioButton->setChecked(true);
    this->setWindowFlags(this->windowFlags()|Qt::FramelessWindowHint);
    Rx_thread *Reciver = new Rx_thread(this);
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    connect(Reciver,SIGNAL(Rx_flag(QString)),this,SLOT(Disp_Rx_value(QString)),Qt::QueuedConnection);
    connect(Reciver,SIGNAL(Rx_flag(QString)),this,SLOT(on_pushButton_f2_clicked()),Qt::QueuedConnection);
    connect(Reciver,SIGNAL(Motion_stop()),this,SLOT(on_pushButton_cancel_clicked()),Qt::QueuedConnection);
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
        pix.load(":/images/image/wifi.bmp");
        QBitmap mask = pix.createMaskFromColor(QColor(255,255,255),Qt::MaskInColor);
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
    QWidget *current_focus_w = this->focusWidget(); //获取当前具有焦点的部件
    if(current_focus_w->inherits("QLineEdit"))
    {
        QLineEdit * display = qobject_cast<QLineEdit*>(current_focus_w);
        if(value == "backspace")
        {
            display->backspace();
        }
        else
        {
            display->setText(display->text()+value);
        }
    }
}

void Dialog::Getkeyvalue()
{
    QString value = ((QPushButton * )sender())->text();//获取按键值
    emit Keyvalue(value);
}

void Dialog::on_pushButton_yes_clicked()
{

    buf[4] = (u8)ui->lineEdit->text().toInt();
    buf[5] = (u8)ui->lineEdit_2->text().toInt();
    buf[6] = (u8)ui->lineEdit_3->text().toInt();
    buf[7] = (u8)ui->lineEdit_4->text().toInt();
    NRF24L01_TX_Mode();
    NRF24L01_TxPacket(buf);
}

void Dialog::on_pushButton_no_clicked()
{
    emit Keyvalue("backspace");
}

void Dialog::Disp_Rx_value(QString str)
{
    char tmp[10];
    if(str=="success")
    {
        sprintf(tmp,"%u",buf[4]);
        ui->lineEdit->setText(tmp);
        sprintf(tmp,"%u",buf[5]);
        ui->lineEdit_2->setText(tmp);
        sprintf(tmp,"%u",buf[6]);
        ui->lineEdit_3->setText(tmp);
        sprintf(tmp,"%u",buf[7]);
        ui->lineEdit_4->setText(tmp);
    }

}

void Dialog::on_pushButton_cancel_clicked()
{
    killTimer(time);
    Motion_gpio("80","0");
}

void Dialog::timerEvent(QTimerEvent *event)
{

    static char flag = 0;
    if(event->timerId() == time)
    {
        flag = ~ flag;
        if(flag == 0)
            Motion_gpio("80","0");
        else
            Motion_gpio("80","1");
    }
}

void Dialog::timerUpdate()
{
    QDateTime sys_time = QDateTime::currentDateTime();
    QString str_sys_time = sys_time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_time->setText(str_sys_time);
}

void Dialog::on_pushButton_f2_clicked()
{
    QString str_time = ui->lineEdit->text();
    time = startTimer(str_time.toInt());
}

void Dialog::on_pushButton_10_clicked()
{
    Singl_Motion *Singl_Motion_dialog = new Singl_Motion(this);
    Singl_Motion_dialog->setModal(true);
    Singl_Motion_dialog->show();
}

void Dialog::on_pushButton_11_clicked()
{
    InputPara *inputPara_dialog = new InputPara(this);
    inputPara_dialog->setModal(true);
    inputPara_dialog->show();
}
