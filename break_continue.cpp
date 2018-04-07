//============================================================================
// Name        : break-continue.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//break: quebra permanentemente
	for(int i = 0; i < 10; i++){
		cout << i << flush;
		if(i > 4)
			break;
		cout << "°" << endl;
	}
	//continue: quebra apenas uma vez
	for(int i = 0; i < 10; i++){
		cout << i << flush;
			if(i > 4)
				continue;
			cout << "°" << endl;

	}
	return 0;
}
