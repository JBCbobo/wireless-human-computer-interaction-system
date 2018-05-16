#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>
#include "keypad.h"

class myLineEdit : public QLineEdit
{
Q_OBJECT
public:
    explicit myLineEdit(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *);
signals:
    void Showkeypad(void);

public slots:

};

#endif // MYLINEEDIT_H
