#-------------------------------------------------
#
# Project created by QtCreator 2016-06-28T17:52:23
#
#-------------------------------------------------

QT       -= gui

TARGET = ChampionshipInterfaces
TEMPLATE = lib

DEFINES += CHAMPIONSHIPINTERFACES_LIBRARY

SOURCES += championshipinterfaces.cpp \
    iplugin.cpp

HEADERS += championshipinterfaces.h\
        championshipinterfaces_global.h \
    icore.h \
    iuicontroller.h \
    iplugincontroller.h \
    ichampionshipplugin.h \
    iplugin.h

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/ChampionshipInterfaces
    INSTALLS += headers
}
