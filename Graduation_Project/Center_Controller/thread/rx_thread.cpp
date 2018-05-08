#include "rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"

extern u8 buf[32];

Rx_thread::Rx_thread(QObject *parent) :
    QThread(parent)
{
    m_id = startTimer(500);
}

void Rx_thread::run()
{
    exec();
}

void Rx_thread::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == m_id)
    {
        NRF24L01_RX_Mode();
        if(!NRF24L01_RxPacket((unsigned char*)buf))
        {
            if(buf[0]==0) emit Rx_flag("success");
            else emit Motion_stop();
        }
    }
}
