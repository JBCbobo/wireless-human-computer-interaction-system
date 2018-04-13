#ifndef INPUTPARA_H
#define INPUTPARA_H

#include <QDialog>
#include <QButtonGroup>
#include "keypad.h"

namespace Ui {
    class InputPara;
}

class InputPara : public QDialog {
    Q_OBJECT
public:
    InputPara(QWidget *parent = 0);
    ~InputPara();

protected:
    void changeEvent(QEvent *e);
public slots:
    void Update_number(QString);

private:
    Ui::InputPara *ui;
    QButtonGroup *OddEvenRow;
    QButtonGroup *Drill;

private slots:
    void on_pushButton_clicked();
    void ReciveSendDialog(Keypad*);
};

#endif // INPUTPARA_H
