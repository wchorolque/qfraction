#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include<QtGlobal>

using namespace std;

class Fraction
{
private:
    qint32 m_Numerator;
    qint32 m_Denominator;

    void reduce();
public:
    Fraction(qint32 numerator=0, qint32 denominator=1);

    void setNumerator(qint32 numerator);
    qint32 getNumerator() const;

    void setDenominator(qint32 denominator);
    qint32 getDenominator() const;

    Fraction& operator +=(const Fraction& f);
    Fraction& operator -=(const Fraction& f);
    Fraction& operator *=(const Fraction& f);
    Fraction& operator /=(const Fraction& f);

    Fraction& operator +=(qint32 number);
    Fraction& operator -=(qint32 number);
    Fraction& operator *=(qint32 number);
    Fraction& operator /=(qint32 number);

    friend ostream& operator <<(ostream& out, const Fraction& f);
    friend Fraction operator +(const Fraction& f1, const Fraction& f2);
    friend Fraction operator -(const Fraction& f1, const Fraction& f2);
    friend Fraction operator *(const Fraction& f1, const Fraction& f2);
    friend Fraction operator /(const Fraction& f1, const Fraction& f2);
};

#endif // FRACTION_H
