//============================================================================
// Name        : pointers.cpp
// Author      : "grad"
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *value){
	cout << "2 " << *value << endl;
	*value = 10;
	cout << "3 " << *value << endl;
}

int main() {
	int nValue = 8;
	int* pnValue = &nValue;
	cout << "nValues: " << nValue << endl;
	cout << "pnValue address: " << pnValue << endl;
	cout << "pnValue: " << *pnValue << endl;

	cout << "================================" << endl;

	double dvalue = 1234.657;
	cout << "1 " << dvalue << endl;
	manipulate(&dvalue);
	cout << "4 " << dvalue << endl;
	return 0;
}
