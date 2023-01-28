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
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/gubitak.cpp \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.cpp \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/pobeda.cpp \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/podmornicegui.cpp \
    main.cpp

HEADERS += \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/gubitak.h \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.h \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/pobeda.h \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/podmornicegui.h \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/ui_kreniigru.h \
    ../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/ui_podmornicegui.h \
    tst_testpodmornica.h
