//============================================================================
// Name        : test.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float fvalue = 76.4;

	cout << sizeof(float) << endl;
	cout << fixed << fvalue << endl;
	cout << setprecision(20) << fvalue << endl;
	cout << scientific << fvalue << endl;
	cout << setprecision(20) << fvalue << endl;
	
	double dvalue = 76.4;
	
	cout << sizeof(double) << endl;
	cout << fixed << dvalue << endl;
	cout << setprecision(20) << dvalue << endl;
	cout << scientific << dvalue << endl;
	cout << setprecision(20) << dvalue << endl;

	long double ldvalue = 0;
	
	cout << sizeof(long double) << endl;
	cout << fixed << ldvalue << endl;
	cout << setprecision(20) << ldvalue << endl;
	cout << scientific << ldvalue << endl;
	cout << setprecision(20) << ldvalue << endl;
	return 0;
}
