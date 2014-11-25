#-------------------------------------------------
#
# Project created by QtCreator 2014-11-24T18:13:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SPbSUT
TEMPLATE = app


SOURCES += main.cpp\
        mainscreen.cpp \
    menu.cpp \
    news.cpp \
    spbsut.cpp \
    categories.cpp \
    items.cpp \
    item.cpp \
    newsitem.cpp

HEADERS  += mainscreen.h \
    menu.h \
    news.h \
    spbsut.h \
    categories.h \
    items.h \
    item.h \
    newsitem.h

FORMS    += mainscreen.ui \
    menu.ui \
    news.ui \
    categories.ui \
    items.ui \
    item.ui \
    newsitem.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    ressources.qrc

