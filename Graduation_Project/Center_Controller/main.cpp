#include <QtGui/QApplication>
#include "dialog.h"
#include "Hardware/NRF24L01/NRF24L01.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
