#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Pair
{
	long grn;
	unsigned long kop;
public:
	Pair(const long grn = 0, const unsigned long kop = 0);
	Pair(const Pair&);
	~Pair();
	long getGrn() const { return grn; }
	unsigned long getKop() const { return kop; }
	void setGrn(const long grn) { this->grn = grn; }
	void setKop(const unsigned long kop) { this->kop = kop; }

	operator string()const;
	bool operator ==(const Pair&);
	bool operator >(const Pair&);
	bool operator <(const Pair&);
	
	friend ostream& operator <<(ostream&, const Pair&);
	friend istream& operator >>(istream&, Pair&);
};

