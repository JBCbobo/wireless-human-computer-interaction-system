#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class myLabel : public QLabel
{
Q_OBJECT
public:
    explicit myLabel(QWidget *parent = 0);

signals:

public slots:
    void paintEvent(QPaintEvent * event);
    void updateIndex();

private:
    int charWidth;
    int curIndex;
    QString showText;

};

#endif // MYLABEL_H
