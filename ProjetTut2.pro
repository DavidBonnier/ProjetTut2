#-------------------------------------------------
#
# Project created by QtCreator 2014-06-13T18:03:48
#
#-------------------------------------------------

QT += core gui
QT += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetTut2
TEMPLATE = app

include(Geometrie/Geometrie.pri)

SOURCES += main.cpp\
        interface.cpp

HEADERS  += interface.h

FORMS    += interface.ui

RESOURCES += \
    interface.qrc
