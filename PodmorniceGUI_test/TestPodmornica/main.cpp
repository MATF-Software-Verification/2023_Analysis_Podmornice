#include "tst_testpodmornica.h"
#include<QTest>

int main(){
    TestPodmornica t;
    return QTest::qExec(&t);

}
