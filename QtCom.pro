#-------------------------------------------------
#
# Project created by QtCreator 2015-07-15T08:59:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtCom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp

HEADERS  += mainwindow.h \
    posix_qextserialport.h \
    qextserialbase.h

FORMS    += mainwindow.ui
