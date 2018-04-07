//============================================================================
// Name        : sizeof_arrays.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int values[] = {2, 5, 4, 6, 6, 4, 7, 3};
	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;
	int lenValues = sizeof(values) / sizeof(int);
	for(int i = 0; i < lenValues; i++){
		cout << values[i] << " " << flush;
	}
	cout << endl;
	return 0;
}
