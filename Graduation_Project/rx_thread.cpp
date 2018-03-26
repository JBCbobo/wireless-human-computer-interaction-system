#include "rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"


Rx_thread::Rx_thread(QObject *parent) :
    QThread(parent)
{
    m_id = startTimer(1000);
}

void Rx_thread::run()
{
    exec();
}

void Rx_thread::timerEvent(QTimerEvent *event)
{
    char buf[32]={0};
    if(event->timerId() == m_id)
    {
        NRF24L01_RX_Mode();
        if(!NRF24L01_RxPacket((unsigned char*)buf))
        {
            emit Rx_flag("Heelo");
        }
    }
}
