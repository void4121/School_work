#include "fraction.h"
#include <iostream>

using namespace std;

fract::fract() : numerator(0), denominator(1){}

fract::fract(int num, int den)
{
    numerator = num;
    denominator = den;

}

int fract::getNumerator() const
{
    return numerator;
}

int fract::getDenominator() const
{
    return denominator;
}

void fract::setNumerator(int num)
{
    numerator = num;
}


void fract::setDenominator(int den)
{
    denominator = den;
}

fract fract::operator+(const fract &x) const
{
	int num = numerator * x.denominator + x.numerator * denominator;
    int den = denominator * x.denominator;
    return fract(num, den);
}

fract fract::operator-(const fract &x) const
{
	int num = numerator * x.denominator - x.numerator * denominator;
    int den = denominator * x.denominator;
    return fract(num, den);
}

fract fract::operator*(const fract &x) const
{
	int num = numerator * x.numerator;
    int den = denominator * x.denominator;
    return fract(num, den);
}

fract fract::operator/(const fract &x) const
{
	int num = numerator * x.denominator;
    int den = denominator * x.numerator;
    return fract(num, den);
}
void fract::print() const {
    std::cout << numerator << "/" << denominator;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void fract::simplify() {
    int common_divisor = gcd(numerator, denominator);
    numerator /= common_divisor;
    denominator /= common_divisor;
}


