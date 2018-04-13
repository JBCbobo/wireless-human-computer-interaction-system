#ifndef SINGL_MOTION_H
#define SINGL_MOTION_H

#include <QDialog>

namespace Ui {
    class Singl_Motion;
}

class Singl_Motion : public QDialog {
    Q_OBJECT
public:
    Singl_Motion(QWidget *parent = 0);
    ~Singl_Motion();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Singl_Motion *ui;
};

#endif // SINGL_MOTION_H
