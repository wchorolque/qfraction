#include <QtTest/QtTest>

#include "qmathutiltest.h"
#include "qfractiontest.h"

#include <iostream>

int main()
{
    QMathUtilTest mt;
    QTest::qExec(&mt);

    std::cout << endl;

    QFractionTest ft;
    QTest::qExec(&ft);

    return 0;
}
