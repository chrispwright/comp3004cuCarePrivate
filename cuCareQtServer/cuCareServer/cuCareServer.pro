#-------------------------------------------------
#
# Project created by QtCreator 2012-10-28T23:58:20
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = cuCareServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    server.cpp \
    connectionthread.cpp \
    messagemanager.cpp \
    auditmanager.cpp

HEADERS += \
    server.h \
    connectionthread.h \
    messagemanager.h \
    staticdefinitions.h \
    auditmanager.h
