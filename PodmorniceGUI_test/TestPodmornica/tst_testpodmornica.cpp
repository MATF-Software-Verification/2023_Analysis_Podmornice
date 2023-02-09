#include <QtTest>
#include<QVector>
#include<iostream>
#include"tst_testpodmornica.h"
#include"../../Podmornice/podmorniceGUI_Novo/PodmorniceGUI/kreniigru.h"

// add necessary includes here



TestPodmornica::TestPodmornica()
{

}

TestPodmornica::~TestPodmornica()
{

}


void TestPodmornica::init()
{

       potopljenePodmornice=0;
       pokusaji=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            matr[i][j]=0;

    //a je horizontalna podmornica duzine 3
    int duzina_a=3;
    QVector<int> koordinate_vrste_a (duzina_a);
    QVector<int> koordinate_kolone_a (duzina_a);

    //kako pravimo proizvoljnu pomornicu, unecemo rucno
    //koordite
    koordinate_vrste_a[0]=1;
    koordinate_vrste_a[1]=1;
    koordinate_vrste_a[2]=1;

    koordinate_kolone_a[0]=0;
    koordinate_kolone_a[1]=1;
    koordinate_kolone_a[2]=2;

    for(int j=0;j<3;j++){
        matr[1][j]=3;
    }


    a=new Podmornica('h',3,koordinate_vrste_a,koordinate_kolone_a,0,"Podmornica duzine 3");

//b je vertikalna podmornica duzine 5

    int duzina_b=5;
    QVector<int> koordinate_vrste_b (duzina_b);
    QVector<int> koordinate_kolone_b (duzina_b);

    //kako pravimo proizvoljnu pomornicu, unecemo rucno
    //koordite
    koordinate_vrste_b[0]=0;
    koordinate_vrste_b[1]=1;
    koordinate_vrste_b[2]=2;
    koordinate_vrste_b[3]=3;
    koordinate_vrste_b[4]=4;

    koordinate_kolone_b[0]=3;
    koordinate_kolone_b[1]=3;
    koordinate_kolone_b[2]=3;
    koordinate_kolone_b[3]=3;
    koordinate_kolone_b[4]=3;

    b=new Podmornica('v',5,koordinate_vrste_b,koordinate_kolone_b,0,"Podmornica duzine 5");

    for(int i=0;i<5;i++){
        matr[i][3]=5;
    }

}

void TestPodmornica::cleanup()
{
    delete a;
    delete b;

}

void TestPodmornica::test_getPodmornica()
{
    QCOMPARE(a->getPodmornica(1,2),"Podmornica duzine 3");
    QCOMPARE(b->getPodmornica(3,3),"Podmornica duzine 5");
    QCOMPARE(a->getPodmornica(0,1),"");
}

void TestPodmornica::test_proveriPotop()
{
    a->setPogodak();
    a->setPogodak();
    a->setPogodak();

    b->setPogodak();
    b->setPogodak();
    b->setPogodak();
    b->setPogodak();

    QCOMPARE(a->proveriPotop(3),9);
    QCOMPARE(b->proveriPotop(5),0);

}

void TestPodmornica::test_proveriPreklapanje()
{
    /*    c duzine 4 horizontalno/vertikalno
     *    prvo probamo (1,2) - (1,5)
     *    drugo probamo (1,4) - (4,4)
    */

    QCOMPARE(proveriPreklapanje(matr,2,1,4,'h'),1);
    QCOMPARE(proveriPreklapanje(matr,4,0,4,'h'),0);
    QCOMPARE(proveriPreklapanje(matr,3,1,4,'v'),1);
    QCOMPARE(proveriPreklapanje(matr,4,1,4,'v'),0);

    // 1

    QCOMPARE(proveriPreklapanje(matr,0,0,1,'h'),0);
    QCOMPARE(proveriPreklapanje(matr,1,1,1,'h'),1);
    QCOMPARE(proveriPreklapanje(matr,1,1,1,'v'),1);
    QCOMPARE(proveriPreklapanje(matr,0,0,1,'v'),0);

    // 2
    QCOMPARE(proveriPreklapanje(matr,1,1,2,'h'),1);
    QCOMPARE(proveriPreklapanje(matr,4,0,2,'h'),0);
    QCOMPARE(proveriPreklapanje(matr,2,1,2,'v'),1);
    QCOMPARE(proveriPreklapanje(matr,1,2,2,'v'),0);

    //3
    QCOMPARE(proveriPreklapanje(matr,1,1,3,'h'),1);
    QCOMPARE(proveriPreklapanje(matr,4,4,3,'h'),0);
    QCOMPARE(proveriPreklapanje(matr,3,1,3,'v'),1);
    QCOMPARE(proveriPreklapanje(matr,4,3,3,'v'),0);

    //5
    QCOMPARE(proveriPreklapanje(matr,2,1,5,'h'),1);
    QCOMPARE(proveriPreklapanje(matr,4,0,5,'h'),0);
    QCOMPARE(proveriPreklapanje(matr,3,1,5,'v'),1);
    QCOMPARE(proveriPreklapanje(matr,4,1,5,'v'),0);

}

void TestPodmornica::test_uzmiPravac()
{
    QCOMPARE(uzmiPravac(0),'v');
    QCOMPARE(uzmiPravac(1),'v');
    QCOMPARE(uzmiPravac(2),'v');
    QCOMPARE(uzmiPravac(3),'v');
    QCOMPARE(uzmiPravac(4),'v');
    QCOMPARE(uzmiPravac(5),'h');
    QCOMPARE(uzmiPravac(6),'h');
    QCOMPARE(uzmiPravac(7),'h');
    QCOMPARE(uzmiPravac(8),'h');
    QCOMPARE(uzmiPravac(9),'h');
}

void TestPodmornica::test_izaberiVrsteKolone()
{
    int kolona=-1;

    int vrsta=-1;

    //hocemo podmornicu duzine 4 horizontalno
    //ona moze poceti u bilo kojoj vrsti
    //a indeks kolone moze biti 0,1,2,3,4,5,6


    izaberiVrsteiKolone(kolona,vrsta,4,'h');
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=6);
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=9);

    //vertikalna podmornica

    izaberiVrsteiKolone(kolona,vrsta,4,'v');
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=6);
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);

    //5
    izaberiVrsteiKolone(kolona,vrsta,5,'h');
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=5);
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=9);

    izaberiVrsteiKolone(kolona,vrsta,5,'v');
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=5);
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);

    //1

    izaberiVrsteiKolone(kolona,vrsta,1,'h');
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=9);

    izaberiVrsteiKolone(kolona,vrsta,1,'v');
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=9);
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);

    //2

    izaberiVrsteiKolone(kolona,vrsta,2,'h');
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=8);
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=9);

    izaberiVrsteiKolone(kolona,vrsta,2,'v');
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=8);
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);

    //3
    izaberiVrsteiKolone(kolona,vrsta,3,'h');
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=6);
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=7);

    izaberiVrsteiKolone(kolona,vrsta,3,'v');
    QVERIFY(vrsta>=0);
    QVERIFY(vrsta<=7);
    QVERIFY(kolona>=0);
    QVERIFY(kolona<=9);


}

void TestPodmornica::test_izmeniPodmornicu()
{

    QVector<Podmornica> lista;
    QCOMPARE(izmeniPodmornicu(0,0,'h',lista,1),1);
    QCOMPARE(izmeniPodmornicu(0,0,'v',lista,1),1);
    QCOMPARE(izmeniPodmornicu(0,0,'h',lista,2),1);
    QCOMPARE(izmeniPodmornicu(0,0,'v',lista,2),1);
    QCOMPARE(izmeniPodmornicu(0,0,'h',lista,3),1);
    QCOMPARE(izmeniPodmornicu(0,0,'v',lista,3),1);
    QCOMPARE(izmeniPodmornicu(0,0,'h',lista,4),1);
    QCOMPARE(izmeniPodmornicu(0,0,'v',lista,4),1);
    QCOMPARE(izmeniPodmornicu(0,0,'h',lista,5),1);
    QCOMPARE(izmeniPodmornicu(0,0,'v',lista,5),1);

}

void TestPodmornica::test_izmeniTablu()
{
    int brojac=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(matr[i][j]!=0)
                brojac+=matr[i][j];

    izmeniTablu(matr,4,4,5,'h');
    izmeniTablu(matr,5,5,4,'v');
    izmeniTablu(matr,0,0,1,'h');
    izmeniTablu(matr,9,9,1,'v');

    int noviBrojac=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(matr[i][j]!=0)
                noviBrojac+=matr[i][j];

    QCOMPARE(noviBrojac,brojac+25+16+1+1);
}

void TestPodmornica::test_postaviPodmornicu()
{
    int brojac=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(matr[i][j]!=0)
                brojac+=matr[i][j];

    //listaPodmornica.clear();
    bool ret1=postaviPodmornicu(matr,1,1,listaPodmornica);
    bool ret2=postaviPodmornicu(matr,2,2,listaPodmornica);

    QVERIFY(ret1==true);
    QVERIFY(ret2==true);

    int brojacNovi=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(matr[i][j]!=0)
                brojacNovi+=matr[i][j];

    QCOMPARE(brojacNovi,brojac+5);
}

void TestPodmornica::test_igraj()
{


    QVector<int> koordinate_vrste_jedan (1);
    QVector<int> koordinate_kolone_jedan (1);

    //kako pravimo proizvoljnu pomornicu, unecemo rucno
    //koordite
    koordinate_vrste_jedan[0]=0;

    koordinate_kolone_jedan[0]=0;


        matr[0][0]=1;


    Podmornica *jedan=new Podmornica('h',1,koordinate_vrste_jedan,koordinate_kolone_jedan,0,"Podmornica duzine 1");

    QVector<int> koordinate_vrste_dva (2);
    QVector<int> koordinate_kolone_dva (2);

    //kako pravimo proizvoljnu pomornicu, unecemo rucno
    //koordite
    koordinate_vrste_dva[0]=0;
    koordinate_vrste_dva[1]=0;

    koordinate_kolone_dva[0]=6;
    koordinate_kolone_dva[1]=7;


    for(int j=6;j<8;j++){
        matr[0][j]=2;
    }

    Podmornica *dva=new Podmornica('h',2,koordinate_vrste_dva,koordinate_kolone_dva,0,"Podmornica duzine 2");

    QVector<int> koordinate_vrste_cetiri (4);
    QVector<int> koordinate_kolone_cetiri (4);

    //kako pravimo proizvoljnu pomornicu, unecemo rucno
    //koordite
    koordinate_vrste_cetiri[0]=5;
    koordinate_vrste_cetiri[1]=5;
    koordinate_vrste_cetiri[2]=5;
    koordinate_vrste_cetiri[2]=5;

    koordinate_kolone_cetiri[0]=0;
    koordinate_kolone_cetiri[1]=1;
    koordinate_kolone_cetiri[2]=2;
    koordinate_kolone_cetiri[3]=3;

    for(int j=0;j<4;j++){
        matr[5][j]=4;
    }

    Podmornica *cetiri=new Podmornica('h',4,koordinate_vrste_cetiri,koordinate_kolone_cetiri,0,"Podmornica duzine 4");

    listaPodmornica.clear();
    listaPodmornica.push_back(*jedan); //1
    listaPodmornica.push_back(*dva); //2
    listaPodmornica.push_back(*a); //3
    listaPodmornica.push_back(*cetiri); //4
    listaPodmornica.push_back(*b); //5

    int ret=-1;
    ret=igraj(5,5,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(1,0,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(1,1,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(1,2,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(5,0,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(0,0,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(0,6,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    ret=igraj(0,3,matr,&pokusaji,&potopljenePodmornice,listaPodmornica);
    QCOMPARE(ret,0);

    QCOMPARE(pokusaji,8);
    QCOMPARE(potopljenePodmornice,2);

    delete jedan;
    delete dva;
    delete cetiri;
}


/*
QTEST_APPLESS_MAIN(TestPodmornica)

#include "tst_testpodmornica.moc"
*/
