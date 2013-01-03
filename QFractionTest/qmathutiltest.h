#ifndef QMATHUTILTEST_H
#define QMATHUTILTEST_H

#include <QtTest>

#include "../QFraction/src/qmathutil.h"

class QMathUtilTest : public QObject
{
    Q_OBJECT
public:
    QMathUtilTest();

private Q_SLOTS:
    void testMCD();
    void testMCM();
};

#endif // QMATHUTILTEST_H
