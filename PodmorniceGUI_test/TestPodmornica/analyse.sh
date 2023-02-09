#!/bin/bash

set -xe;

rm -f *.gcda *.gcno
qmake TestPodmornica.pro
make clean
make
./TestPodmornica
lcov --rc lcov_branch_coverage=1 -c -d . -o coverage-test.info
#lcov --rc lcov_branch_coverage=1  -r coverage-test.info  '/usr/*' '/opt/*' '*.moc'  -o coverage-test-filt.info
genhtml --rc lcov_branch_coverage=1 -o Reports coverage-test.info
firefox Reports/index.html
