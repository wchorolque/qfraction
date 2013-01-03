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
    void testSuma();
    void testCreate();
};

#endif // QFRACTIONTEST_H
