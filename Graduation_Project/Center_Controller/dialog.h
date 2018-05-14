#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class wireless;
class ringmold;
class inputpara;

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
    wireless *m_wireless;
    ringmold *m_ringmold;
    inputpara *m_inputpara;

public slots:
    void Disp_Rx_value(QString);
    void timerUpdate();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();

};

#endif // DIALOG_H
