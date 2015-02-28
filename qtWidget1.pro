#-------------------------------------------------
#
# Project created by QtCreator 2015-02-28T16:59:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtWidget1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    translatedMessage.cpp \
    abstractmessage.cpp \
    flyingdotsmessage.cpp \
    splashscreen.cpp

HEADERS  += mainwindow.h \
    abstractmessage.hpp \
    translatedMessage.h \
    flyingdotsmessage.h \
    splashscreen.h

FORMS    += mainwindow.ui
