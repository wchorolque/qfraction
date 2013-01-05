#include "fraction.h"
#include "qmathutil.h"

void Fraction::reduce()
{
    if (0 == m_Numerator) {
        m_Denominator = 1;
    } else {
        qint32 mcd = QMathUtil::calculateMCD(m_Numerator, m_Denominator);

        m_Numerator = m_Numerator / mcd;
        m_Denominator = m_Denominator / mcd;
    }
}

Fraction::Fraction(qint32 numerator, qint32 denominator)
{
    m_Numerator = numerator;
    m_Denominator = denominator;

    reduce();
}

void Fraction::setNumerator(qint32 numerator)
{
    m_Numerator = numerator;
    if (0 == numerator) {
        m_Denominator = 1;
    }

}

qint32 Fraction::getNumerator() const
{
    return m_Numerator;
}

void Fraction::setDenominator(qint32 denominator)
{
    if (0 == m_Numerator || 0 == denominator) {
        m_Denominator = 1;
    } else {
        m_Denominator = denominator;
    }
}

qint32 Fraction::getDenominator() const
{
    return m_Denominator;
}

Fraction &Fraction::operator +=(const Fraction &f)
{
    qint32 denominator = QMathUtil::calculateMCM(m_Denominator, f.m_Denominator);

    qint32 temp1 = (denominator / m_Denominator) * m_Numerator;
    qint32 temp2 = (denominator / f.m_Denominator) * f.m_Numerator;
    qint32 numerator = temp1 + temp2;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}

Fraction &Fraction::operator -=(const Fraction &f)
{
    qint32 denominator = QMathUtil::calculateMCM(m_Denominator, f.m_Denominator);

    qint32 temp1 = (denominator / m_Denominator) * m_Numerator;
    qint32 temp2 = (denominator / f.m_Denominator) * f.m_Numerator;
    qint32 numerator = temp1 - temp2;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}

Fraction &Fraction::operator *=(const Fraction &f)
{
    qint32 numerator = m_Numerator * f.m_Numerator;
    qint32 denominator = m_Denominator * f.m_Denominator;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}

Fraction &Fraction::operator /=(const Fraction &f)
{
    qint32 numerator = m_Numerator * f.m_Denominator;
    qint32 denominator = m_Denominator * f.m_Numerator;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}

Fraction &Fraction::operator +=(qint32 number)
{
    qint32 denominator = m_Denominator;

    qint32 temp1 = (denominator / m_Denominator) * m_Numerator;
    qint32 temp2 = denominator * number;
    qint32 numerator = temp1 + temp2;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}

Fraction &Fraction::operator -=(qint32 number)
{
    qint32 denominator = m_Denominator;

    qint32 temp1 = (denominator / m_Denominator) * m_Numerator;
    qint32 temp2 = denominator * number;
    qint32 numerator = temp1 - temp2;

    setNumerator(numerator);
    setDenominator(denominator);

    reduce();

    return *this;
}
