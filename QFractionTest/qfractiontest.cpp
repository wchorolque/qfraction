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
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);
    Fraction fraction3 = Fraction(0);
    Fraction fraction4 = Fraction(1, 2);

    fraction1 += fraction2;

    QCOMPARE(fraction1.getNumerator(), 3);
    QCOMPARE(fraction1.getDenominator(), 2);

    fraction2 += fraction3;

    QCOMPARE(fraction2.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction3 += fraction4;

    QCOMPARE(fraction3.getNumerator(), 1);
    QCOMPARE(fraction3.getDenominator(), 2);

}

void QFractionTest::testResta()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);
    Fraction fraction3 = Fraction(0);
    Fraction fraction4 = Fraction(1, 2);

    fraction1 -= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction2 -= fraction3;

    QCOMPARE(fraction2.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction2 -= fraction4;

    QCOMPARE(fraction2.getNumerator(), 0);
    QCOMPARE(fraction2. getDenominator(), 1);
}

void QFractionTest::testProducto()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);
    Fraction fraction3 = Fraction(0);
    Fraction fraction4 = Fraction(1, 2);

    fraction1 *= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction3 *= fraction4;

    QCOMPARE(fraction3.getNumerator(), 0);
    QCOMPARE(fraction3.getDenominator(), 1);

    fraction2 *= fraction4;

    QCOMPARE(fraction2.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 4);
}

void QFractionTest::testDivision()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);
    Fraction fraction3 = Fraction(0);
    Fraction fraction4 = Fraction(1, 2);

    fraction1 /= fraction2;

    QCOMPARE(fraction1.getNumerator(), 2);
    QCOMPARE(fraction1.getDenominator(), 1);

    fraction3 /= fraction4;

    QCOMPARE(fraction3.getNumerator(), 0);
    QCOMPARE(fraction3.getDenominator(), 1);

    fraction2 /= fraction4;

    QCOMPARE(fraction2.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 1);
}
