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
};

#endif // WIRELESS_H
