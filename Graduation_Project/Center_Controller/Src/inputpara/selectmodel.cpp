#include "selectmodel.h"
#include "ui_selectmodel.h"

SelectModel::SelectModel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectModel)
{
    ui->setupUi(this);
}

SelectModel::~SelectModel()
{
    delete ui;
}

void SelectModel::changeEvent(QEvent *e)
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
