#ifndef QMATHUTIL_H
#define QMATHUTIL_H

#include <QtCore>

class QMathUtil
{
public:
    QMathUtil();
    static qint32 calculateMCD(qint32 number1, qint32 number2 = 1);
    static qint32 calculateMCM(qint32 number1, qint32 number2);
};

#endif // QMATHUTIL_H
