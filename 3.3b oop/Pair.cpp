#include "Pair.h"

Pair::Pair(const long f, const unsigned long s) : grn(f), kop(s) {}
Pair::Pair(const Pair& x)
{
	grn = x.grn;
	kop = x.kop;
}
Pair::~Pair()
{}

bool Pair::operator ==	(const Pair& x)
{
	return (this->grn == x.grn && this->kop == x.kop);
}
bool Pair::operator >(const Pair& x)
{
	if ((this->grn > x.grn) || (this->grn == x.grn && this->kop > x.kop))
		return true;
	else
		return false;
}
bool Pair::operator <(const Pair& x)
{
	if ((this->grn < x.grn) || (this->grn == x.grn && this->kop < x.kop))
		return true;
	else
		return false;
}
string format(unsigned long kop)
{
	stringstream ss;
	if(kop < 10)
		ss << "0" << kop;
	else
		ss << kop;
	return ss.str();
}
Pair::operator string()const
{
	stringstream ss;
	ss << grn << ", " << format(kop);
	return ss.str();	
}
ostream& operator <<(ostream& out, const Pair& x)
{
	return out << string(x);
}
istream& operator >>(istream& in, Pair& x)
{
	int a, b;
	cout << "Grn: ";in >> a;
	cout << "Kop: ";in >> b;
	x.setGrn(a);
	x.setKop(b);
	return in;
}