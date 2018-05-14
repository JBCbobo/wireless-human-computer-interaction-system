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

private:
    Ui::ringmold *ui;
};

#endif // RINGMOLD_H
