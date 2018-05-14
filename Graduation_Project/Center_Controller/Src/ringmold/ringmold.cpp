#include "ringmold.h"
#include "ui_ringmold.h"

ringmold::ringmold(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ringmold)
{
    ui->setupUi(this);
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
