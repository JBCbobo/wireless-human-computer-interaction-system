#ifndef MYLABELBUTTON_H
#define MYLABELBUTTON_H

#include <QLabel>

class myLabelButton : public QLabel
{
Q_OBJECT
public:
    explicit myLabelButton(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *ev);
signals:

public slots:
private:
        int flexIndex;

};

#endif // MYLABELBUTTON_H
