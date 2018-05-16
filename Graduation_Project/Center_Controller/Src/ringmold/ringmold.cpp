#include "ringmold.h"
#include "ui_ringmold.h"
#include <QMessageBox>

ringmold::ringmold(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ringmold)
{
    ui->setupUi(this);
    connect(this,SIGNAL(turnright()),ui->pushButton_turnright,SIGNAL(clicked()));
    connect(this,SIGNAL(turnleft()),ui->pushButton_turnleft,SIGNAL(clicked()));
    connect(this,SIGNAL(reduce()),ui->pushButton_reduce,SIGNAL(clicked()));
    connect(this,SIGNAL(increas()),ui->pushButton_increas,SIGNAL(clicked()));
    connect(this,SIGNAL(fine()),ui->pushButton_fine,SIGNAL(clicked()));
    connect(this,SIGNAL(coarse()),ui->pushButton_coarse,SIGNAL(clicked()));
}

ringmold::~ringmold()
{
    delete ui;
}

void ringmold::changeEvent(QEvent *e)
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

void ringmold::clicked_pushButton(int value)
{
    switch(value)
    {
        case 1:emit turnleft();break;
        case 2:emit turnright();break;
        case 3:emit fine();break;
        case 4:emit coarse();break;
        case 5:emit reduce();break;
        case 6:emit increas();break;
    }

}

void ringmold::on_pushButton_turnleft_clicked()//工件左转
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","turnleft");
}

void ringmold::on_pushButton_turnright_clicked()//工件右转
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","turnright");
}

void ringmold::on_pushButton_fine_clicked()//右转细调
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","fine");
}

void ringmold::on_pushButton_coarse_clicked()//右转粗调
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","coarse");
}


void ringmold::on_pushButton_reduce_clicked()//转速减少
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","reduce");
}

void ringmold::on_pushButton_increas_clicked()//转速增加
{
    QMessageBox Messagebox;
    Messagebox.about(this,"Test","increas");
}


