//============================================================================
// Name        : getters_setters.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;
	person.setName("Georgina");
	cout << person.toString() << endl;

	return 0;
}
