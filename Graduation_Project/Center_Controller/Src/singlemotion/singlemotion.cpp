#include "singlemotion.h"
#include "ui_singlemotion.h"
#include <QMessageBox>

//QString times;

singlemotion::singlemotion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::singlemotion)
{
    ui->setupUi(this);
    ui->Motion_Number->addItem("M1");
    ui->Motion_Number->addItem("M2");
    ui->Motion_Number->addItem("M3");
    connect(this,SIGNAL(up()),ui->pushButton_up,SIGNAL(clicked()));
    connect(this,SIGNAL(down()),ui->pushButton_down,SIGNAL(clicked()));
    connect(this,SIGNAL(drilling()),ui->pushButton_drilling,SIGNAL(clicked()));
    connect(this,SIGNAL(location()),ui->pushButton_location,SIGNAL(clicked()));
}

singlemotion::~singlemotion()
{
    delete ui;
}

void singlemotion::changeEvent(QEvent *e)
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

void singlemotion::clicked_pushButton(int num,int value)
{
    ui->Motion_Number->setCurrentIndex(num);
    switch(value)
    {
        case 1:emit location();break;
        case 2:emit drilling();break;
        case 3:emit up();break;
        case 4:emit down();break;
    }

}

void singlemotion::on_pushButton_drilling_clicked()//钻孔
{
  //  times+='1';
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","Drilling");
}

void singlemotion::on_pushButton_location_clicked()//定位
{
    //times.clear();
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","Location");
}

void singlemotion::on_pushButton_up_clicked() //上升
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","Up");
}

void singlemotion::on_pushButton_down_clicked()//下降
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","Down");
}
