#include "keypad.h"
#include "ui_keypad.h"

Keypad::Keypad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Keypad)
{
    ui->setupUi(this);
    this->move(400,50);
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
    connect(ui->pushButton_dot,SIGNAL(clicked()),this,SLOT(Getkeyvalue()));
}

Keypad::~Keypad()
{
    delete ui;
}

void Keypad::changeEvent(QEvent *e)
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

void Keypad::Getkeyvalue()
{
    QString value = ((QPushButton * )sender())->text();//获取按键值
    emit Keyvalue(value);
}

void Keypad::on_pushButton_yes_clicked()
{
    this->close();
}

void Keypad::on_pushButton_no_clicked()
{
    emit Keyvalue("backspace");
}

void Keypad::on_pushButton_cancel_clicked()
{
   emit Keyvalue("clear");
}
