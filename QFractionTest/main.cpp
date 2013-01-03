#include <QtTest/QtTest>

#include "qmathutiltest.h"
#include "qfractiontest.h"

int main()
{
    QMathUtilTest mt;
    QTest::qExec(&mt);

    QFractionTest ft;
    QTest::qExec(&ft);

    return 0;
}
