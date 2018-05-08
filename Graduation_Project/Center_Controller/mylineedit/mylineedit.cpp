#include "mylineedit.h"
#include "keypad.h"

myLineEdit::myLineEdit(QWidget *parent) :
    QLineEdit(parent)
{
}


void myLineEdit::mousePressEvent(QMouseEvent *)
{   
    Keypad * keypad = new Keypad(this);
    keypad->setModal(true);
    keypad->show();
    emit SendDialog(keypad);
}
