#include <QtTest>

#include "fraction.h"

class QTestFractionTest : public QObject
{
    Q_OBJECT
    
public:
    QTestFractionTest();
    
private Q_SLOTS:
    void testCase1();
};

QTestFractionTest::QTestFractionTest()
{
}

void QTestFractionTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(QTestFractionTest)

#include "tst_qtestfractiontest.moc"
