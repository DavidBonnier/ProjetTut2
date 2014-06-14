INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

FORMS += \
    Geometrie/geometrie.ui

HEADERS += \
    Geometrie/geometrie.h \
    Geometrie/scenedessin.h \
    Geometrie/viewscene.h

SOURCES += \
    Geometrie/geometrie.cpp \
    Geometrie/scenedessin.cpp \
    Geometrie/viewscene.cpp

RESOURCES += \
    Geometrie/Geometrie.qrc

include(Instrument/Instrument.pri)
