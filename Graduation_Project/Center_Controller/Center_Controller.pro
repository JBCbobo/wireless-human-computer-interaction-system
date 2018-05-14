# -------------------------------------------------
# Project created by QtCreator 2018-03-08T10:09:18
# -------------------------------------------------
TARGET = Center_Controller
TEMPLATE = app
SOURCES += main.cpp \
    dialog.cpp \
    Hardware/Motion/Motion.c \
    Hardware/NRF24L01/NRF24L01.c \
    singl_motion.cpp \
    keypad.cpp \
    thread/rx_thread.cpp \
    mylineedit/mylineedit.cpp \
    Src/wireless/wireless.cpp \
    Src/ringmold/ringmold.cpp \
    Src/inputpara/inputpara.cpp
HEADERS += dialog.h \
    Hardware/Motion/Motion.h \
    Hardware/NRF24L01/NRF24L01.h \
    singl_motion.h \
    keypad.h \
    thread/rx_thread.h \
    mylineedit/mylineedit.h \
    Src/wireless/wireless.h \
    Src/ringmold/ringmold.h \
    Src/inputpara/inputpara.h
FORMS += dialog.ui \
    singl_motion.ui \
    keypad.ui \
    Src/wireless/wireless.ui \
    Src/ringmold/ringmold.ui \
    Src/inputpara/inputpara.ui
RESOURCES += src.qrc
OTHER_FILES += 
