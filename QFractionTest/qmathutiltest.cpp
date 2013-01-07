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

void QMathUtilTest::testCountDecimals()
{
    qreal number = 0.75;
    qint32 decimals = QMathUtil::countDecimals(number);

    QCOMPARE(decimals, 2);
    QCOMPARE(number, 75.0);
}

