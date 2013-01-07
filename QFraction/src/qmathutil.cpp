#include "qmathutil.h"

QMathUtil::QMathUtil()
{
}

qint32 QMathUtil::calculateMCD(qint32 number1, qint32 number2)
{
    if (number1 < 0) {
        number1 = abs(number1);
    }
    if (number2 < 0) {
        number2 = abs(number2);
    }
    if (0 == number2) {
        return number1;
    } else {
        return calculateMCD(number2, number1 % number2);
    }
}

qint32 QMathUtil::calculateMCM(qint32 number1, qint32 number2)
{
    qint32 mcm = (number1 * number2) / calculateMCD(number1, number2);

    return mcm;
}

quint32 QMathUtil::countDecimals(qreal &number)
{
    qint32 decimals = 0;

    while ((number- (qint32)number) != 0) {
        number *= 10;
        decimals++;
    }

    return decimals;
}
