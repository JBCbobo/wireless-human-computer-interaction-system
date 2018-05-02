#include "inputpara.h"
#include "keypad.h"
#include "ui_inputpara.h"

extern unsigned char buf[32];

InputPara::InputPara(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputPara),
    OddEvenRow(new QButtonGroup),
    Drill(new QButtonGroup)
{
    ui->setupUi(this);
    ui->groupBox->setStyleSheet("QGroupBox{border:none}");
    ui->groupBox_2->setStyleSheet("QGroupBox{border:none}");
    ui->radioButton->setChecked(true);
    ui->radioButton_3->setChecked(true);
    OddEvenRow->addButton(ui->radioButton,0);
    OddEvenRow->addButton(ui->radioButton_2,1);
    Drill->addButton(ui->radioButton_3,0);
    Drill->addButton(ui->radioButton_4,1);
    connect(ui->lineEdit,SIGNAL(SendDialog(Keypad*)),this,SLOT(ReciveSendDialog(Keypad*)));
    connect(ui->lineEdit_2,SIGNAL(SendDialog(Keypad*)),this,SLOT(ReciveSendDialog(Keypad*)));
    connect(ui->lineEdit_3,SIGNAL(SendDialog(Keypad*)),this,SLOT(ReciveSendDialog(Keypad*)));
}

InputPara::~InputPara()
{
    delete ui;
}

void InputPara::changeEvent(QEvent *e)
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

void InputPara::Update_number(QString value)
{

    QWidget *current_focus_w = this->focusWidget(); //获取当前具有焦点的部件
    if(current_focus_w->inherits("QLineEdit"))
    {
        QLineEdit * display = qobject_cast<QLineEdit*>(current_focus_w);
        if(value=="backspace")
        {
            display->backspace();
        }
        else if(value == "clear")
        {
           display->clear();
        }
        else
        {
             display->setText(display->text()+value);
        }
    }
}

void InputPara::ReciveSendDialog(Keypad* keypad)
{
    connect(keypad, SIGNAL(Keyvalue(QString)), this, SLOT(Update_number(QString)));
}

void InputPara::on_pushButton_clicked()
{
    buf[8] = ui->lineEdit->text().toInt();
    buf[9] = ui->lineEdit_2->text().toInt();
    buf[10] = ui->lineEdit_3->text().toInt();
    buf[11] = OddEvenRow->checkedId();
    buf[12] = Drill->checkedId();
    this->close();
}
