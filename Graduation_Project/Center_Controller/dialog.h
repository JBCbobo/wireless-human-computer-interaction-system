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
    QString str;

signals:
    void Keyvalue(QString);

public slots:
    void on_pushButton_f2_clicked();
    void on_pushButton_cancel_clicked();
    void on_pushButton_no_clicked();
    void on_pushButton_yes_clicked();
    void Disp_Rx_value(QString);
    void Getkeyvalue();
    void Update_number(QString);
    void timerEvent(QTimerEvent *event);
    void timerUpdate();


private slots:
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
};

#endif // DIALOG_H
