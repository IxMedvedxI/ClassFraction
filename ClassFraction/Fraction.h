#pragma once
#include <ostream>
#include <iostream>
using namespace std;
class Fraction
{
private:
	int a;
	int b;
public:
	Fraction();
	Fraction(int a, int b);
	Fraction(const Fraction& fraction);
	~Fraction() {};

	void setNumerator(int x);
	void setFraction(int x,int y);
	void setDenominator(int y);
	int getNumerator();
	int getDenominator();

	void simple();
	Fraction& operator=(int number);
	Fraction& operator=(const Fraction& fract);
	//мат вычисления
	Fraction& operator+(int number);
	Fraction& operator+(const Fraction& fract);
	Fraction& operator-(int number);
	Fraction& operator-(const Fraction& fract);
	Fraction& operator*(int number);
	Fraction& operator*(const Fraction& fract);
	Fraction& operator/(int number);
	Fraction& operator/(const Fraction& fract);
	Fraction& operator+=(int number);
	Fraction& operator+=(const Fraction& fract);
	Fraction& operator-=(int number);
	Fraction& operator-=(const Fraction& fract);
	Fraction& operator*=(int number);
	Fraction& operator*=(const Fraction& fract);
	Fraction& operator/=(int number);
	Fraction& operator/=(const Fraction& fract);
	//Сравнения
	bool operator<(int number);
	bool operator<(Fraction fract);
	bool operator<=(int number);
	bool operator<=(Fraction fract);
	bool operator>(int number);
	bool operator>(Fraction fract);
	bool operator>=(int number);
	bool operator>=(Fraction fract);
	bool operator==(int number);
	bool operator==(Fraction fract);
	//++ --
	//префикс
	Fraction& operator++();
	Fraction& operator--();
	//постфикс
	Fraction& operator++(int);
	Fraction& operator--(int);



	friend ostream& operator<<(ostream& os, const Fraction& f);
	friend istream& operator>>(istream& is, Fraction& f);

};

