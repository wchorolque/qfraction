#include "fraction.h"
#include "qmathutil.h"

void Fraction::reduce()
{
    qint32 mcd = QMathUtil::calculateMCD(this->m_Numerator, this->m_Denominator);

    this->m_Numerator = this->m_Numerator / mcd;
    this->m_Denominator = this->m_Denominator / mcd;
}

Fraction::Fraction(qint32 numerator, qint32 denominator)
{
    this->setNumerator(numerator);
    this->setDenominator(denominator);
}

void Fraction::setNumerator(qint32 numerator)
{
    this->m_Numerator = numerator;
    this->reduce();
}

qint32 Fraction::getNumerator() const
{
    return this->m_Numerator;
}

void Fraction::setDenominator(qint32 denominator)
{
    this->m_Denominator = denominator;
    this->reduce();
}

qint32 Fraction::getDenominator() const
{
    return this->m_Denominator;
}

Fraction &Fraction::operator +=(const Fraction &f)
{
    qint32 denominator = QMathUtil::calculateMCM(this->m_Denominator, f.m_Denominator);

    qint32 temp1 = (denominator / this->m_Denominator) * this->m_Numerator;
    qint32 temp2 = (denominator / f.m_Denominator) * f.m_Numerator;
    qint32 numerator = temp1 + temp2;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}

Fraction &Fraction::operator -=(const Fraction &f)
{
    qint32 denominator = QMathUtil::calculateMCM(this->m_Denominator, f.m_Denominator);

    qint32 temp1 = (denominator / this->m_Denominator) * this->m_Numerator;
    qint32 temp2 = (denominator / f.m_Denominator) * f.m_Numerator;
    qint32 numerator = temp1 - temp2;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}

Fraction &Fraction::operator *=(const Fraction &f)
{
    qint32 numerator = this->m_Numerator * f.m_Numerator;
    qint32 denominator = this->m_Denominator * f.m_Denominator;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}

Fraction &Fraction::operator /=(const Fraction &f)
{
    qint32 numerator = this->m_Numerator * f.m_Denominator;
    qint32 denominator = this->m_Denominator * f.m_Numerator;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}

Fraction &Fraction::operator +=(qint32 number)
{
    qint32 denominator = this->m_Denominator;

    qint32 temp1 = (denominator / this->m_Denominator) * this->m_Numerator;
    qint32 temp2 = denominator * number;
    qint32 numerator = temp1 + temp2;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}

Fraction &Fraction::operator -=(qint32 number)
{
    qint32 denominator = this->m_Denominator;

    qint32 temp1 = (denominator / this->m_Denominator) * this->m_Numerator;
    qint32 temp2 = denominator * number;
    qint32 numerator = temp1 - temp2;

    this->setNumerator(numerator);
    this->setDenominator(denominator);

    return *this;
}
