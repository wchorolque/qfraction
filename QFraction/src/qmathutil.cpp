#include "qmathutil.h"

QMathUtil::QMathUtil()
{
}

qint32 QMathUtil::calculateMCD(qint32 number1, qint32 number2)
{
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
