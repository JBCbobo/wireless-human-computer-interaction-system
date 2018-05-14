#include <QtGui/QApplication>
#include <QTextCodec>
#include <QWSServer>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    QWSServer::setCursorVisible(false);
    Dialog w;
    w.show();
    return a.exec();
}
