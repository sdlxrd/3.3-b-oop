#include <iostream>
#include "Money.h"
using namespace std;
int main()
{
	Money a(0, 0), b(0, 0);
	double x;
	cout << "First:" << endl;
	cin >> a;
	cout  << endl << "Second:" << endl;	
	cin >> b;
	cout << endl << "First sum = " << a << endl;
	cout << "Second sum = " << b << endl << endl;
	cout << "first - second: " << a - b << endl << endl;
	cout << "x= "; cin >> x;
	cout << "first * x: " << a * x << endl;
	cout << "second * x: " << b * x << endl << endl;
	if (a == b)
	{
		cout << a.getGrn() << ", " << a.getKop() << " == " << b.getGrn() << ", " << b.getKop() << endl << endl;
	}
	if (a < b)
		{
		cout << a.getGrn() << ", " << a.getKop() << " < " << b.getGrn() << ", " << b.getKop() << endl << endl;
	}
	if (a > b)
	{
		cout << a.getGrn() << ", " << a.getKop() << " > " << b.getGrn() << ", " << b.getKop() << endl << endl;
	}
	
	cout << "a++  " << a++ << endl;
	cout << "result = " << a << endl;
	cout << "++a  " << ++a << endl;
	
	cout << "a--  " << a-- << endl;
	cout << "result = " << a << endl;
	cout << "--a  " << --a << endl;
}