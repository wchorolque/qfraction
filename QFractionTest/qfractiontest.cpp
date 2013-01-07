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

void QFractionTest::testBinaryOneAddHalf()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 + fraction2;

    QCOMPARE(temp.getNumerator(), 3);
    QCOMPARE(temp.getDenominator(), 2);
}

void QFractionTest::testBinaryZeroAddHalf()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 + fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);
}

void QFractionTest::testBinaryHalfAddHalf()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 + fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testUnaryOneAddHalf()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 += fraction2;

    QCOMPARE(fraction1.getNumerator(), 3);
    QCOMPARE(fraction1.getDenominator(), 2);
}

void QFractionTest::testUnaryHalfAddZero()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(0);

    fraction1 += fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 2);
}

void QFractionTest::testUnaryZeroAddHalf()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 += fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 2);
}

void QFractionTest::testBinaryOneSubtractHalf()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 - fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);
}

void QFractionTest::testBinaryZeroSubtractHalf()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 - fraction2;

    QCOMPARE(temp.getNumerator(), -1);
    QCOMPARE(temp.getDenominator(), 2);
}

void QFractionTest::testBinaryHalfSubtractHalf()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 - fraction2;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testUnaryOneSubtractHalf()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 -= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 2);
}

void QFractionTest::testUnaryHalfSubtractZero()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(0);

    fraction1 -= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 2);
}

void QFractionTest::testUnaryZeroSubtractHalf()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 -= fraction2;

    QCOMPARE(fraction1.getNumerator(), -1);
    QCOMPARE(fraction1. getDenominator(), 2);
}

void QFractionTest::testBinaryOneProductHalf ()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 * fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 2);
}

void QFractionTest::testBinaryZeroProductHalf ()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 * fraction2;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testBinaryHalfProductHalf ()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 * fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 4);
}

void QFractionTest::testUnaryOneProductHalf ()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 *= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction2.getDenominator(), 2);
}

void QFractionTest::testUnaryZeroProductHalf ()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 *= fraction2;

    QCOMPARE(fraction1.getNumerator(), 0);
    QCOMPARE(fraction1.getDenominator(), 1);
}

void QFractionTest::testUnaryHalfProductHalf ()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 *= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 4);
}

void QFractionTest::testBinaryOneDivideHalf ()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 / fraction2;

    QCOMPARE(temp.getNumerator(), 2);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testBinaryZeroDivideHalf ()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 / fraction2;

    QCOMPARE(temp.getNumerator(), 0);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testBinaryHalfDivideHalf ()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    Fraction temp = fraction1 / fraction2;

    QCOMPARE(temp.getNumerator(), 1);
    QCOMPARE(temp.getDenominator(), 1);
}

void QFractionTest::testUnaryOneDivideHalf ()
{
    Fraction fraction1 = Fraction(1);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 /= fraction2;

    QCOMPARE(fraction1.getNumerator(), 2);
    QCOMPARE(fraction1.getDenominator(), 1);
}

void QFractionTest::testUnaryZeroDivideHalf ()
{
    Fraction fraction1 = Fraction(0);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 /= fraction2;

    QCOMPARE(fraction1.getNumerator(), 0);
    QCOMPARE(fraction1.getDenominator(), 1);
}

void QFractionTest::testUnaryHalfDivideHalf ()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    fraction1 /= fraction2;

    QCOMPARE(fraction1.getNumerator(), 1);
    QCOMPARE(fraction1.getDenominator(), 1);
}
