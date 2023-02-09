#ifndef TST_TESTPODMORNICA_H
#define TST_TESTPODMORNICA_H

#include <QTest>
#include"../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.h"

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
    void test_postaviPodmornicu();
    void test_igraj();
private:
    Podmornica *a,*b;
    int matr[10][10];
    int potopljenePodmornice;
    int pokusaji;
    QVector<Podmornica> listaPodmornica;

};



#endif // TST_TESTPODMORNICA_H
