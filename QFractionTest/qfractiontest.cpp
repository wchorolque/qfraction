#include <QString>
#include <QtTest>

#include "qfractiontest.h"

QFractionTest::QFractionTest()
{
}

void QFractionTest::testCreate()
{
    Fraction fraction = Fraction(2, 2);

    QCOMPARE(fraction.getNumerator(), 1);
    QCOMPARE(fraction.getDenominator(), 1);
}

void QFractionTest::testSuma()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 += fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 1);
}
