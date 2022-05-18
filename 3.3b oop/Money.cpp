#include "Money.h"
#include <string>
#include <sstream>

using namespace std;

Money::Money(const long grn, const unsigned long kop)
{
	long a = grn;
	unsigned long b = kop;
	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	setGrn(a);
	setKop(b);
}
Money::Money(double x)
{
	long a = (long)x;
	x -= a;
	x *= 100;
	unsigned long b = (unsigned long)x;
	while(b >99)
		{
		b -= 100;
		a++;
	}
	while(b < -99)
		{
		b += 100;
		a--;
	}
	setGrn(a);
	setKop(b);	
}
Money::Money(const Money& x)
{
	int a = x.getGrn();
	int b = x.getKop();
	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	setGrn(a);
	setKop(b);


}
Money::~Money(void)
{}
Money operator -(const Money& x, const Money& y)
{
	Money t;
	if ((x.getGrn() < y.getGrn()) && (x.getKop() < y.getKop()))
	{
		t.setGrn(0);
		t.setKop(0);
		return t;
	}
	if (x.getKop() < y.getKop())
	{
			t.setGrn((x.getGrn() - 1) - y.getGrn());
			t.setKop(100 - (y.getKop() - x.getKop()));
	}
	else
	{
		t.setGrn(x.getGrn() - y.getGrn());
		t.setKop(x.getKop() - y.getKop());
	}
	return t;
}
Money operator *(const Money& x, const double n)
{
	Money t;
	long a = (x.getGrn() * n);
	unsigned long b = (x.getKop() * n);
	while (b > 99)
	{
		b -= 100;
		a++;
	}
	t.setGrn(a);
	t.setKop(b);
	return t;
}
Money& Money::operator ++()
{
	int x = this->getGrn();
	int y = this->getKop();
	x++;
	y++;
	this->setGrn(x);
	this->setKop(y);
	return *this;
}
Money Money::operator ++(int)
{
	Money t(*this);

	int x = this->getGrn();
	int y = this->getKop();
	x++;
	y++;
	this->setGrn(x);
	this->setKop(y);
	return t;
}
Money& Money::operator --()
{
	int x = this->getGrn();
	int y = this->getKop();
	x--;
	y--;
	this->setGrn(x);
	this->setKop(y);
	return *this;
}
Money Money::operator --(int)
{
	Money t(*this);

	int x = this->getGrn();
	int y = this->getKop();
	x--;
	y--;
	this->setGrn(x);
	this->setKop(y);
	return t;
}