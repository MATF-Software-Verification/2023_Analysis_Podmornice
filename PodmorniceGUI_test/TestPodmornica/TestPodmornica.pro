QT += testlib \
    widgets \
    core gui
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

DEFINES+="MY_TST_MAC=1" "MY_MAC_KIH=1" "MY_TST_MAC_KRENIIGRU=1" "MY_UKLONIRAND=1"

TEMPLATE = app

QMAKE_CXXFLAGS += -g -Wall --coverage -O0
QMAKE_LFLAGS += -g -Wall --coverage -O0

SOURCES +=  tst_testpodmornica.cpp \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/gubitak.cpp \
    ../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.cpp \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/pobeda.cpp \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/podmornicegui.cpp \
    main.cpp

HEADERS += \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/gubitak.h \
    ../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.h \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/pobeda.h \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/podmornicegui.h \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/ui_kreniigru.h \
    #../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/ui_podmornicegui.h \
    tst_testpodmornica.h
