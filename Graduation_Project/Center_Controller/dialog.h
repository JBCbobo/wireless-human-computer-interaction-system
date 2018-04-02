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
    void keyPressEvent(QKeyEvent *e);

private:
    Ui::Dialog *ui;
    int time;
    QString str;

signals:
    void Rx_flag(QString);
    void Keyvalue(QString);

public slots:
    void Disp_Rx_value(QString);
    void Getkeyvalue();
    void Update_number(QString);

private slots:
    void on_pushButton_no_clicked();
    void on_pushButton_yes_clicked();
};

#endif // DIALOG_H