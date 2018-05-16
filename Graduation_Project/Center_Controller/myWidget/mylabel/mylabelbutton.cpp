#include "mylabelbutton.h"
#include <QFile>
#include <QtGui/QApplication>
#define FLEXS 3
myLabelButton::myLabelButton(QWidget *parent) :
    QLabel(parent)
{
}

void myLabelButton::mousePressEvent(QMouseEvent *ev)
{
    QFile qss1(":/Qss/flex1.qss");
    QFile qss2(":/Qss/default.qss");
    QFile qss3(":/Qss/flex2.qss");
    flexIndex++;
    if(flexIndex>=FLEXS) flexIndex=0;
    switch(flexIndex)
    {
        case 0:
            qss1.open(QFile::ReadOnly);
            qApp->setStyleSheet(qss1.readAll());
            qss1.close();
            break;
        case 1:
            qss2.open(QFile::ReadOnly);
            qApp->setStyleSheet(qss2.readAll());
            qss2.close();
            break;
        case 2:
            qss3.open(QFile::ReadOnly);
            qApp->setStyleSheet(qss3.readAll());
            qss3.close();
            break;
    }

}
