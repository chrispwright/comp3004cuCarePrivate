#-------------------------------------------------
#
# Project created by QtCreator 2012-09-13T21:36:44
#
#-------------------------------------------------

QT       += core gui
QT       += network

TARGET = CUCare
TEMPLATE = app


SOURCES += main.cpp\
        cucare.cpp \
    loginscreen.cpp \
    patient.cpp \
    user.cpp \
    consultation.cpp \
    followup.cpp \
    addeditpatientwindow.cpp \
    addeditconsultationwindow.cpp \
    outputmessages.cpp \
    addeditfollowups.cpp

HEADERS  += cucare.h \
    loginscreen.h \
    patient.h \
    user.h \
    consultation.h \
    followup.h \
    addeditpatientwindow.h \
    addeditconsultationwindow.h \
    outputmessages.h \
    addeditfollowups.h \
    staticdefinitions.h

FORMS    += cucare.ui \
    loginscreen.ui \
    addeditpatientwindow.ui \
    addeditconsultationwindow.ui \
    addeditfollowups.ui
