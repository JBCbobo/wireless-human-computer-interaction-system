#include "singl_motion.h"
#include "ui_singl_motion.h"

Singl_Motion::Singl_Motion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Singl_Motion)
{
    ui->setupUi(this);
    ui->Motion_Number->addItem("M1");
    ui->Motion_Number->addItem("M2");
    ui->Motion_Number->addItem("M3");
}

Singl_Motion::~Singl_Motion()
{
    delete ui;
}

void Singl_Motion::changeEvent(QEvent *e)
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
