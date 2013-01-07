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

    Fraction temp = fraction1 + fraction2;

    QCOMPARE(temp.getNumerator(), 3);
    QCOMPARE(temp.getDenominator(), 2);

    temp = fraction3 + fraction4;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);

    temp = fraction2 + fraction4;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 1);

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

    Fraction temp = fraction1 - fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);

    temp = fraction3 - fraction4;

    QCOMPARE(temp.getNumerator(), -1);
    QCOMPARE(temp.getDenominator(), 2);

    temp = fraction2 - fraction4;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);

    fraction1 -= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction2 -= fraction3;

    QCOMPARE(fraction2.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);

    fraction3 -= fraction4;

    QCOMPARE(fraction3.getNumerator(), -1);
    QCOMPARE(fraction3. getDenominator(), 2);
}

void QFractionTest::testProducto()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);
    Fraction fraction3 = Fraction(0);
    Fraction fraction4 = Fraction(1, 2);

    Fraction temp = fraction1 * fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);

    temp = fraction3 * fraction4;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);

    temp = fraction2 * fraction4;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 4);

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

    Fraction temp = fraction1 / fraction2;

    QCOMPARE(temp.getNumerator(), 2);
    QCOMPARE(temp.getDenominator(), 1);

    temp = fraction3 / fraction4;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);

    temp = fraction2 / fraction4;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 1);

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
