#include "qmathutiltest.h"

QMathUtilTest::QMathUtilTest()
{
}

void QMathUtilTest::testMCD()
{
    QCOMPARE(QMathUtil::calculateMCD(4, 8), 4);
}

