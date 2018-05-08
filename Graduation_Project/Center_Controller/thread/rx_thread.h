#ifndef RX_THREAD_H
#define RX_THREAD_H

#include <QtCore>

class Rx_thread : public QThread
{
Q_OBJECT
public:
    explicit Rx_thread(QObject *parent = 0);
protected:
    void run();
    void timerEvent(QTimerEvent *);

signals:
    void Rx_flag(QString);
    void Motion_stop();

public slots:

private:
    int m_id;

};

#endif // RX_THREAD_H
