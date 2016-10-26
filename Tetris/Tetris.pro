#-------------------------------------------------
#
# Project created by QtCreator 2016-10-16T16:35:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tetris
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    controller.cpp \
    teris.cpp \
    block.cpp \
    map.cpp \
    boundary.cpp

HEADERS  += mainwindow.h \
    constants.h \
    controller.h \
    teris.h \
    block.h \
    map.h \
    boundary.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
