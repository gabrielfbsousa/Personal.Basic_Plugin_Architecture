#-------------------------------------------------
#
# Project created by QtCreator 2016-06-22T16:01:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChampionshipManager
TEMPLATE = app


SOURCES += main.cpp\
    core.cpp \
    projectcontroller.cpp \
    plugincontroller.cpp \
    mainwindow.cpp \
    champwindow.cpp \
    uicontroller.cpp

HEADERS  += \
    core.h \
    projectcontroller.h \
    plugincontroller.h \
    mainwindow.h \
    champwindow.h \
    uicontroller.h

FORMS    += \
    champwindow.ui

LIBS           = -L../plugins -Lplugins


#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/plugins/release/ -lNewPlayerPlugin
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/plugins/debug/ -lNewPlayerPlugin
#else:unix: LIBS += -L$$PWD/plugins/ -lNewPlayerPlugin

#INCLUDEPATH += $$PWD/plugins
#DEPENDPATH += $$PWD/plugins

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/plugins/release/ -lNewPlayerPlugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/plugins/debug/ -lNewPlayerPlugin
else:unix: LIBS += -L$$PWD/plugins/ -lNewPlayerPlugin

INCLUDEPATH += $$PWD/plugins
DEPENDPATH += $$PWD/plugins
