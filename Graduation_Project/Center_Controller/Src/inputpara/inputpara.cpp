#include "inputpara.h"
#include "Hardware/NRF24L01/NRF24L01.h"
#include "Hardware/Motion/Motion.h"
#include "ui_inputpara.h"

extern u8 buf[32];

inputpara::inputpara(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inputpara),
    OddEvenRow(new QButtonGroup),
    Drill(new QButtonGroup)
{
    ui->setupUi(this);
    ui->groupBox->setStyleSheet("QGroupBox{border:none}");
    ui->groupBox_2->setStyleSheet("QGroupBox{border:none}");
    ui->radioButton->setChecked(true);
    ui->radioButton_3->setChecked(true);
    OddEvenRow->addButton(ui->radioButton_3,0);
    OddEvenRow->addButton(ui->radioButton_4,1);
    Drill->addButton(ui->radioButton,0);
    Drill->addButton(ui->radioButton_2,1);
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
}

inputpara::~inputpara()
{
    delete ui;
}

void inputpara::SetWidgetValue()
{
//    sprintf(tmp,"%u",buf[9]); //转动速度
//    ui->lineEdit->setText(tmp);
//    sprintf(tmp,"%u",buf[10]); //钻动速度
//    ui->lineEdit_2->setText(tmp);
//    sprintf(tmp,"%u",buf[4]); //孔数
//    ui->lineEdit_3->setText(tmp);
//    sprintf(tmp,"%u",buf[7]);//钻孔速度
//    ui->lineEdit_4->setText(tmp);
//    ui->label_drill->setText(tr(drill_Item[buf[8]])); //大小钻头
//    ui->label_model->setText(tr(model_Item[buf[1]])); //模式
//    ui->label_oddeven->setText(tr(OddEven_Item[buf[5]]));//奇偶数排
}

void inputpara::changeEvent(QEvent *e)
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

void inputpara::Update_number(QString value)
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

void inputpara::Getkeyvalue()
{
    QString value = ((QPushButton * )sender())->text();//获取按键值
    emit Keyvalue(value);
}

void inputpara::on_pushButton_yes_clicked()
{

    buf[4] = ui->lineEdit->text().toInt();
    buf[5] = OddEvenRow->checkedId();
    buf[6] = ui->lineEdit_2->text().toInt();
    buf[7] = ui->lineEdit_3->text().toInt();
    buf[8] = Drill->checkedId();
    NRF24L01_TX_Mode();
    NRF24L01_TxPacket(buf);
}

void inputpara::on_pushButton_no_clicked()
{
    emit Keyvalue("backspace");
}


void inputpara::on_pushButton_cancel_clicked()
{
    killTimer(time);
    Motion_gpio("80","0");
}

void inputpara::timerEvent(QTimerEvent *event)
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


void inputpara::on_pushButton_f2_clicked()
{
    QString str_time = ui->lineEdit->text();
    time = startTimer(str_time.toInt());
}

