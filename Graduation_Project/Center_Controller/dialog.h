#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}
class Rx_thread;

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;
    int time;

signals:
    void Rx_flag(QString);
public slots:
    void Disp_Rx_value(QString);

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DIALOG_H
