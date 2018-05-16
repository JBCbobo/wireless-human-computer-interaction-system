# -------------------------------------------------
# Project created by QtCreator 2018-03-08T10:09:18
# -------------------------------------------------
TARGET = Center_Controller
TEMPLATE = app
SOURCES += main.cpp \
    dialog.cpp \
    Hardware/Motion/Motion.c \
    Hardware/NRF24L01/NRF24L01.c \
    keypad.cpp \
    thread/rx_thread.cpp \
    Src/wireless/wireless.cpp \
    Src/ringmold/ringmold.cpp \
    Src/inputpara/inputpara.cpp \
    Src/singlemotion/singlemotion.cpp \
    myWidget/mylabel/mylabel.cpp \
    myWidget/mylabel/mylabelbutton.cpp \
    Src/inputpara/selectmodel.cpp
HEADERS += dialog.h \
    Hardware/Motion/Motion.h \
    Hardware/NRF24L01/NRF24L01.h \
    keypad.h \
    thread/rx_thread.h \
    Src/wireless/wireless.h \
    Src/ringmold/ringmold.h \
    Src/inputpara/inputpara.h \
    Src/singlemotion/singlemotion.h \
    myWidget/mylabel/mylabel.h \
    myWidget/mylabel/mylabelbutton.h \
    Src/inputpara/selectmodel.h
FORMS += dialog.ui \
    keypad.ui \
    Src/wireless/wireless.ui \
    Src/ringmold/ringmold.ui \
    Src/inputpara/inputpara.ui \
    Src/singlemotion/singlemotion.ui \
    Src/inputpara/selectmodel.ui
RESOURCES += src.qrc
OTHER_FILES += Qss/default.qss \
    Qss/flex1.qss \
    Qss/flex2.qss
