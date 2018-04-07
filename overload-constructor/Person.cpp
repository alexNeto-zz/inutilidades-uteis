/*
 * Person.cpp
 *
 *  Created on: 18 de jun de 2016
 *      Author: grad
 */

#include "Person.h"
#include <sstream>
using namespace std;
Person::Person() {
	name = "Undefined";
	age = 0;
}
Person::Person(string newName, int newAge){
	name = newName;
	age = newAge;
}
string Person::toString(){
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; ";
	ss << "Age: ";
	ss << age;
	return ss.str();
}

