#-------------------------------------------------
#
# Project created by QtCreator 2018-06-08T16:41:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BQ
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    jeu.cpp \
    theme.cpp \
    utilisateur.cpp

HEADERS  += mainwindow.h \
    menu.h \
    jeu.h \
    theme.h \
    utilisateur.h

FORMS    += mainwindow.ui \
    menu.ui \
    jeu.ui \
    theme.ui \
    utilisateur.ui
