#ifndef SINGLEMOTION_H
#define SINGLEMOTION_H

#include <QWidget>

namespace Ui {
    class singlemotion;
}

class singlemotion : public QWidget {
    Q_OBJECT
public:
    singlemotion(QWidget *parent = 0);
    ~singlemotion();

protected:
    void changeEvent(QEvent *e);

signals:
    void up();
    void down();
    void location();
    void drilling();

private:
    Ui::singlemotion *ui;

private slots:
    void clicked_pushButton(int,int);
    void on_pushButton_down_clicked();
    void on_pushButton_up_clicked();
    void on_pushButton_location_clicked();
    void on_pushButton_drilling_clicked();
};

#endif // SINGLEMOTION_H
