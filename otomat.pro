QT += core
QT -= gui

CONFIG += c++11

TARGET = otomat
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    otomatobj.cpp \
    rule.cpp

HEADERS += \
    otomatobj.h \
    rule.h
