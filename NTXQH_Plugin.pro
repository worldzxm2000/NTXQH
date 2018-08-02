#-------------------------------------------------
#
# Project created by QtCreator 2018-04-02T15:44:52
#
#-------------------------------------------------

QT        += core
# -= gui

TARGET = NTXQH_Plugin
TEMPLATE = lib

DEFINES += NTXQH_PLUGIN_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += dll
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += ntxqh_plugin.cpp \
    dictionary.cpp

HEADERS += ntxqh_plugin.h \
    iplugininstance.h \
    dictionary.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

LIBS += -L. -lIPluginInstance
