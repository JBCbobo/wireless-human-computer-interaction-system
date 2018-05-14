#ifndef INPUTPARA_H
#define INPUTPARA_H

#include <QWidget>
#include <QButtonGroup>

namespace Ui {
    class inputpara;
}

class inputpara : public QWidget {
    Q_OBJECT
public:
    inputpara(QWidget *parent = 0);
    ~inputpara();

protected:
    void changeEvent(QEvent *e);

signals:
    void Keyvalue(QString);

public slots:
    void on_pushButton_f2_clicked();
    void on_pushButton_cancel_clicked();
    void on_pushButton_no_clicked();
    void on_pushButton_yes_clicked();
    void Getkeyvalue();
    void Update_number(QString);
    void timerEvent(QTimerEvent *event);

private:
    Ui::inputpara *ui;
    int time;
    QButtonGroup *OddEvenRow;
    QButtonGroup *Drill;
};

#endif // INPUTPARA_H
