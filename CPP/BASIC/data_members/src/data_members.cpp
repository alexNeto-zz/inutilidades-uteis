//============================================================================
// Name        : data_members.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"
using namespace std;

int main() {
	Cat cat;

	cat.makeHappy();
	cat.speak();

	Cat cat1;
	cat1.makeSad();
	cat1.speak();
	return 0;
}
