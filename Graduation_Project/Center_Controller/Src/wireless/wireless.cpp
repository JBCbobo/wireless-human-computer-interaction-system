#include "wireless.h"
#include "ui_wireless.h"

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
