//============================================================================
// Name        : sizeof_multD_arrays.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string animals[2][3]{
		{"fox", "dog", "cat"},
		{"mouse", "squirrel", "parrot"}
	};
	cout << "Tamanho de animals: " << sizeof(animals) << endl;
	cout << "Tamanho de animals[0]: " << sizeof(animals[0]) << endl;
	cout << "Tamanho de string: " << sizeof(string) << endl;
	for(unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++){
		for(unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
