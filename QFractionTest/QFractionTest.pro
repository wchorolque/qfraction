#-------------------------------------------------
#
# Project created by QtCreator 2013-01-03T10:51:25
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_qfractiontesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../QFraction/src/

SOURCES += ../QFraction/src/fraction.cpp \
    ../QFraction/src/qmathutil.cpp \
    qmathutiltest.cpp \
    qfractiontest.cpp \
    main.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    qmathutiltest.h \
    qfractiontest.h
