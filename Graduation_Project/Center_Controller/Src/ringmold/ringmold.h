#ifndef RINGMOLD_H
#define RINGMOLD_H

#include <QWidget>

namespace Ui {
    class ringmold;
}

class ringmold : public QWidget {
    Q_OBJECT
public:
    ringmold(QWidget *parent = 0);
    ~ringmold();

protected:
    void changeEvent(QEvent *e);

signals:
    void turnright();
    void turnleft();
    void reduce();
    void increas();
    void fine();
    void coarse();

private:
    Ui::ringmold *ui;

private slots:
    void clicked_pushButton(int);
    void on_pushButton_turnright_clicked();
    void on_pushButton_coarse_clicked();
    void on_pushButton_increas_clicked();
    void on_pushButton_reduce_clicked();
    void on_pushButton_fine_clicked();
    void on_pushButton_turnleft_clicked();
};

#endif // RINGMOLD_H
