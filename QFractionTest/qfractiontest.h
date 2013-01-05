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
    void testSuma();
    void testResta();
    void testProducto();
    void testDivision();
};

#endif // QFRACTIONTEST_H
