#include "Fraction.h"

Fraction::Fraction()
{
	a = 1;
	b = 1;
}

Fraction::Fraction(int x, int y)
{
	a = x;
	b = y;
}

Fraction::Fraction(const Fraction& fraction)
{
	a = fraction.a;
	b = fraction.b;
}

void Fraction::setNumerator(int x)
{
	a = x;
}

void Fraction::setFraction(int x, int y)
{
	a = x;
	b = y;
}

void Fraction::setDenominator(int y)
{
	b = y;
}

int Fraction::getNumerator()
{
	return a;
}

int Fraction::getDenominator()
{
	return b;
}

void Fraction::simple()
{
	int n = abs(a);
	int d = abs(b);
	int nod;
	while (n != 0 and d != 0) {
		if (n > d){
			n = n % d;
		}
		else {
			d = d % n;
		}
	}
	nod = n + d;
	a /= nod;
	b /= nod;
}

Fraction& Fraction::operator=(int number)
{
	a = number;
	b = 1;
	return *this;
}

Fraction& Fraction::operator=(const Fraction& fract)
{
	a = fract.a;
	b = fract.b;
	return *this;
}



Fraction& Fraction::operator+(int number)
{
	Fraction comp(*this);
	comp.a += b * number;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator+(const Fraction& fract)
{
	Fraction comp(*this);
	comp.a *= fract.b;
	comp.b *= fract.b;
	comp.a += fract.a * b;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator-(int number)
{	
	Fraction comp(*this);
	comp.a -= b * number;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator-(const Fraction& fract)
{

	Fraction comp(*this);
	comp.a *= fract.b;
	comp.b *= fract.b;
	comp.a -= fract.a * b;
	comp.simple();
	return comp;
}
Fraction& Fraction::operator*(int number)
{
	Fraction comp(*this);
	comp.a *= number;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator*(const Fraction& fract)
{
	Fraction comp(*this);
	comp.a *= fract.a;
	comp.b *= fract.b;
	comp.simple();
	return comp;
}
Fraction& Fraction::operator/(int number)
{
	Fraction comp(*this);
	comp.b *= number;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator/(const Fraction& fract)
{
	Fraction comp(*this);
	comp.a *= fract.b;
	comp.b *= fract.a;
	comp.simple();
	return comp;
}

Fraction& Fraction::operator+=(int number)
{
	a += b * number;
	simple();
	return *this;
}

Fraction& Fraction::operator+=(const Fraction& fract)
{
	int c = b;
	a *= fract.b;
	b *= fract.b;
	a += fract.a * c;
	simple();
	return *this;
}

Fraction& Fraction::operator-=(int number)
{
	a -= b * number;
	simple();
	return *this;
}

Fraction& Fraction::operator-=(const Fraction& fract)
{
	int c = b;
	a *= fract.b;
	b *= fract.b;
	a -= fract.a * c;
	simple();
	return *this;
}
Fraction& Fraction::operator*=(int number)
{
	a *= number;
	simple();
	return *this;
}

Fraction& Fraction::operator*=(const Fraction& fract)
{
	a *= fract.a;
	b *= fract.b;
	simple();
	return *this;
}
Fraction& Fraction::operator/=(int number)
{
	b *= number;
	simple();
	return *this;
}

Fraction& Fraction::operator/=(const Fraction& fract)
{
	a *= fract.b;
	b *= fract.a;
	simple();
	return *this;
}

bool Fraction::operator<(int number)
{
	return a < (b*number);
}

bool Fraction::operator<(Fraction fract)
{
	return (a * fract.b)<(fract.a * b);
}

bool Fraction::operator<=(int number)
{
	return a <= (b*number);
}

bool Fraction::operator<=(Fraction fract)
{
	return (a * fract.b)<=(fract.a * b);
}

bool Fraction::operator>=(int number)
{
	return a >= (b*number);
}

bool Fraction::operator>=(Fraction fract)
{
	return (a * fract.b) >= (fract.a * b);
}

bool Fraction::operator>(int number)
{
	return a > (b*number);
}

bool Fraction::operator>(Fraction fract)
{
	return (a * fract.b)>(fract.a * b);
}

bool Fraction::operator==(int number)
{
	return a == (b*number);
}

bool Fraction::operator==(Fraction fract)
{
	return (a * fract.b)==(fract.a * b);
}

Fraction& Fraction::operator++()
{
	a += b;
	return *this;
}

Fraction& Fraction::operator--()
{
	a -= b;
	return *this;
}

Fraction& Fraction::operator++(int)
{
	Fraction cop(*this);
	++*this;
	return cop;
}

Fraction& Fraction::operator--(int)
{
	Fraction cop(*this);
	--*this;
	return cop;
}

ostream& operator<<(ostream& os, const Fraction& f)
{
	if (f.b == 1) {
		return os << f.a;
	}
	else {
		return os << f.a << "/" << f.b;
	}
}

istream& operator>>(istream& is, Fraction& f)
{
	cout << "input numerator and denominator\n";
	is >> f.a >> f.b;
	f.simple();
	return is;
}
