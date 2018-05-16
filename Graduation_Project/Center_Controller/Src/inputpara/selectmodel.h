#ifndef SELECTMODEL_H
#define SELECTMODEL_H

#include <QDialog>

namespace Ui {
    class SelectModel;
}

class SelectModel : public QDialog {
    Q_OBJECT
public:
    SelectModel(QWidget *parent = 0);
    ~SelectModel();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SelectModel *ui;
};

#endif // SELECTMODEL_H
