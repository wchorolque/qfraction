#include "qmathutiltest.h"

QMathUtilTest::QMathUtilTest()
{
}

void QMathUtilTest::testMCD()
{
    QCOMPARE(QMathUtil::calculateMCD(4, 8), 4);
    QCOMPARE(QMathUtil::calculateMCD(6, 9), 3);
    QCOMPARE(QMathUtil::calculateMCD(-6, 9), 3);
    QCOMPARE(QMathUtil::calculateMCD(6, -9), 3);
    QCOMPARE(QMathUtil::calculateMCD(15, 24), 3);
}

void QMathUtilTest::testMCM()
{
    QCOMPARE(QMathUtil::calculateMCM(6, 9), 18);
    QCOMPARE(QMathUtil::calculateMCM(3, 7), 21);
    QCOMPARE(QMathUtil::calculateMCM(7, 13), 91);
}

