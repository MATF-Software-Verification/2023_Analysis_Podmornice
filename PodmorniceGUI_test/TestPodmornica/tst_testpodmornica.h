#ifndef TST_TESTPODMORNICA_H
#define TST_TESTPODMORNICA_H

#include <QTest>
#include"../../2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.h"

class TestPodmornica : public QObject
{
    Q_OBJECT

public:
    TestPodmornica();
    ~TestPodmornica ();

private slots:
    void init();
    void cleanup();
    void test_getPodmornica();
    void test_proveriPotop();
    void test_proveriPreklapanje();
    void test_uzmiPravac();
    void test_izaberiVrsteKolone();
    void test_izmeniPodmornicu();
    void test_izmeniTablu();
private:
    Podmornica *a,*b;
    int matr[10][10];

};



#endif // TST_TESTPODMORNICA_H
