# -------------------------------------------------
# Project created by QtCreator 2018-03-08T10:09:18
# -------------------------------------------------
TARGET = Center_Controller
TEMPLATE = app
SOURCES += main.cpp \
    dialog.cpp \
    Hardware/Motion/Motion.c \
    Hardware/NRF24L01/NRF24L01.c \
    ../rx_thread.cpp \
    inputpara.cpp \
    singl_motion.cpp \
    keypad.cpp \
    mylineedit.cpp \
    thread/rx_thread.cpp
HEADERS += dialog.h \
    Hardware/Motion/Motion.h \
    Hardware/NRF24L01/NRF24L01.h \
    ../rx_thread.h \
    inputpara.h \
    singl_motion.h \
    keypad.h \
    mylineedit.h \
    thread/rx_thread.h
FORMS += dialog.ui \
    inputpara.ui \
    singl_motion.ui \
    keypad.ui
RESOURCES += src.qrc
