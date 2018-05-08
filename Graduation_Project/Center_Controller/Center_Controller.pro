# -------------------------------------------------
# Project created by QtCreator 2018-03-08T10:09:18
# -------------------------------------------------
TARGET = Center_Controller
TEMPLATE = app
SOURCES += main.cpp \
    dialog.cpp \
    Hardware/Motion/Motion.c \
    Hardware/NRF24L01/NRF24L01.c \
    inputpara.cpp \
    singl_motion.cpp \
    keypad.cpp \
    thread/rx_thread.cpp \
    mylineedit/mylineedit.cpp
HEADERS += dialog.h \
    Hardware/Motion/Motion.h \
    Hardware/NRF24L01/NRF24L01.h \
    inputpara.h \
    singl_motion.h \
    keypad.h \
    thread/rx_thread.h \
    mylineedit/mylineedit.h
FORMS += dialog.ui \
    inputpara.ui \
    singl_motion.ui \
    keypad.ui
RESOURCES += src.qrc
