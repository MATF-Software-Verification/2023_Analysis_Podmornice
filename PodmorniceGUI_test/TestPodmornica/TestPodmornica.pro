QT += testlib \
    widgets \
    core gui
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

QMAKE_CXXFLAGS += -g -Wall --coverage -O0
QMAKE_LFLAGS += -g -Wall --coverage -O0

SOURCES +=  tst_testpodmornica.cpp \
    ../gubitak.cpp \
    ../kreniigru.cpp \
    ../pobeda.cpp \
    ../podmornicegui.cpp \
    main.cpp

HEADERS += \
    ../gubitak.h \
    ../kreniigru.h \
    ../pobeda.h \
    ../podmornicegui.h \
    ../ui_kreniigru.h \
    ../ui_podmornicegui.h \
    tst_testpodmornica.h
