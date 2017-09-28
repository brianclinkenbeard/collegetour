#-------------------------------------------------
#
# Project created by QtCreator 2017-09-03T15:51:40
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = collegetour
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/colleges.cpp \
    src/souvenirs.cpp \
    src/displaycolleges.cpp \
    src/distances.cpp \
    src/adminlogin.cpp \
    src/adminwindow.cpp \
    src/collegeeditwindow.cpp \
    src/purchasesouvenirs.cpp

HEADERS += \
    src/mainwindow.h \
    src/displaycolleges.h \
    src/adminlogin.h \
    src/adminwindow.h \
    src/collegeeditwindow.h \
    src/purchasesouvenirs.h \
    src/college.h \
    src/distance.h \
    src/souvenir.h

FORMS += \
    src/mainwindow.ui \
    src/displaycolleges.ui \
    src/adminlogin.ui \
    src/adminwindow.ui \
    src/collegeeditwindow.ui \
    src/purchasesouvenirs.ui

RESOURCES += \
    resources.qrc
