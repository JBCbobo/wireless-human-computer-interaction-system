#include "mylineedit.h"
#include "keypad.h"

myLineEdit::myLineEdit(QWidget *parent) :
    QLineEdit(parent)
{
}


void myLineEdit::mousePressEvent(QMouseEvent *)
{   

    emit Showkeypad();
}
