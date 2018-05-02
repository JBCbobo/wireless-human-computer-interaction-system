#ifndef KEYPAD_H
#define KEYPAD_H

#include <QDialog>

namespace Ui {
    class Keypad;
}

class Keypad : public QDialog {
    Q_OBJECT
public:
    Keypad(QWidget *parent = 0);
    ~Keypad();
signals:
    void Keyvalue(QString);
protected:
    void changeEvent(QEvent *e);
public slots:
    void Getkeyvalue();

private:
    Ui::Keypad *ui;

private slots:
    void on_pushButton_cancel_clicked();
    void on_pushButton_no_clicked();
    void on_pushButton_yes_clicked();
};

#endif // KEYPAD_H
