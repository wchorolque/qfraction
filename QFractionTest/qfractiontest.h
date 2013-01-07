#ifndef QFRACTIONTEST_H
#define QFRACTIONTEST_H

#include <QtTest/QTest>
#include "../QFraction/src/fraction.h"

class QFractionTest : public QObject
{
    Q_OBJECT

public:
    QFractionTest();

private Q_SLOTS:
    void testCreate();
    void testCreatePositiveReal();

    void testBinaryOneAddHalf();
    void testBinaryZeroAddHalf();
    void testBinaryHalfAddHalf();
    void testUnaryOneAddHalf();
    void testUnaryHalfAddZero();
    void testUnaryZeroAddHalf();

    void testUnaryZeroSubtractHalf();
    void testUnaryHalfSubtractZero();
    void testUnaryOneSubtractHalf();
    void testBinaryHalfSubtractHalf();
    void testBinaryZeroSubtractHalf();
    void testBinaryOneSubtractHalf();

    void testUnaryHalfProductHalf();
    void testUnaryZeroProductHalf();
    void testUnaryOneProductHalf();
    void testBinaryHalfProductHalf();
    void testBinaryZeroProductHalf();
    void testBinaryOneProductHalf();

    void testUnaryHalfDivideHalf();
    void testUnaryZeroDivideHalf();
    void testUnaryOneDivideHalf();
    void testBinaryHalfDivideHalf();
    void testBinaryZeroDivideHalf();
    void testBinaryOneDivideHalf();

    void testEqual();
    void testNotEqual();

    void testIntegerAddFraction();
    void testIntegerSubtractFraction();
    void testIntegerMultiplyFraction();
    void testIntegerDivideFraction();
};

#endif // QFRACTIONTEST_H
