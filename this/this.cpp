//============================================================================
// Name        : this.cpp
// Author      : "grad"
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1("Bob", 42);
	cout << person1.toString() << endl;


	return 0;
}
