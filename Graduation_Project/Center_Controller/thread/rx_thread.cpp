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
            switch(buf[0])
            {
                case 0:emit Rx_flag("success");break;
                case 2:emit Rx_flag("nrf24l01");break;
                case 3:emit Rx_flag("singlemotion");break;
                case 4:emit Rx_flag("ringmold");break;
            }


        }
    }
}
