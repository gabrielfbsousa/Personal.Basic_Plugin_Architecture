#-------------------------------------------------
#
# Project created by QtCreator 2016-07-05T14:12:01
#
#-------------------------------------------------

QT       += widgets

TARGET = $$qtLibraryTarget(NewPlayerPlugin)

TEMPLATE = lib
CONFIG += plugin


DEFINES += NEWPLAYERPLUGIN_LIBRARY

SOURCES += newplayerplugin.cpp

HEADERS += newplayerplugin.h\
        newplayerplugin_global.h

DESTDIR = ../ChampionshipManager/plugins


unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/NewPlayerPlugin
    INSTALLS += headers
}

DISTFILES += \
    NewPlayerPlugin.json

OTHER_FILES += NewPlayerPlugin.json

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tools/ChampionshipManager/plugins
INSTALLS += target
