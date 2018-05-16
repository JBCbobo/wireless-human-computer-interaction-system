#include "mylabel.h"
#include<QTimer>
#include<QDateTime>
#include<QPainter>


myLabel::myLabel(QWidget *parent) :
    QLabel(parent)
{
    curIndex =0;
    showText ="欢迎使用数控钻床控制器";
    charWidth=fontMetrics().width("欢");
    QTimer *timer =new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(updateIndex()));
    timer->start(500);
}

void myLabel::paintEvent(QPaintEvent*event)
{
    QPainter painter(this);
    painter.drawText(0,30,showText.mid(curIndex));
    painter.drawText(width()-charWidth*curIndex,30,showText.left(curIndex));
}


void myLabel::updateIndex()
{
    update();
    curIndex++;
    if(curIndex*charWidth>width())
        curIndex =0;
}
