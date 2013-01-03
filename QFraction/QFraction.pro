#-------------------------------------------------
#
# Project created by QtCreator 2013-01-03T07:32:33
#
#-------------------------------------------------

QT       += core testlib

QT       -= gui

TARGET = QFraction
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    src/fraction.cpp \
    src/qmathutil.cpp

HEADERS += \
    src/fraction.h \
    src/qmathutil.h
