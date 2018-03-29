#include "rx_thread.h"
#include "Hardware/NRF24L01/NRF24L01.h"

extern u8 buf[32];
extern User_data *u;

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
    if(event->timerId() == m_id)
    {
        NRF24L01_RX_Mode();
        if(!NRF24L01_RxPacket((unsigned char*)buf))
        {
            User_data_decode();
            emit Rx_flag("success");
        }
        else
        {
            emit Rx_flag("failed");
        }
    }
}
