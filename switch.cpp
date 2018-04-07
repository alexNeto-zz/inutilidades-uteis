//============================================================================
// Name        : switch.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Digite um número de 1 a 4: " << flush;
	cout << endl;
	int input;
	cin >> input;
	switch (input){
		case  1:
			cout << "Um" << endl;
			break;
		case 2:
			cout << "Dois" << endl;
			break;
		case 3:
			cout << "Três" << endl;
			break;
		case 4:
			cout << "Quatro" << endl;
			break;
		default:
			cout << "Número não identificado" << endl;
	}

	return 0;
}
