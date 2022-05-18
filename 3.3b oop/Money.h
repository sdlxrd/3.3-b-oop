#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Pair.h"
using namespace std;

class Money:public Pair
{
public:
	Money(const long grn = 0, const unsigned long kop = 0);
	Money(const Money&);
	Money(double z);
	~Money(void);
	
	friend Money operator -(const Money&, const Money&);
	friend Money operator *(const Money&, const double);

	Money& operator ++();
	Money& operator --();	
	Money operator ++(int);
	Money operator --(int);
	
};

