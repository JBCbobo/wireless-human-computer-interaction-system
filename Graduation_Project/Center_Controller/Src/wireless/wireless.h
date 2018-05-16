#ifndef WIRELESS_H
#define WIRELESS_H

#include <QWidget>

namespace Ui {
    class wireless;
}

class wireless : public QWidget {
    Q_OBJECT
public:
    wireless(QWidget *parent = 0);
    ~wireless();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::wireless *ui;

private slots:
    void on_pushButton_6_clicked();
    void on_pushButton_3_clicked();
};

#endif // WIRELESS_H
