/*
 * Person.cpp
 *
 *  Created on: 18 de jun de 2016
 *      Author: grad
 */

#include "Person.h"
#include <iostream>
#include <sstream>

Person::Person() {
	name = "";
	age = 0;
}
Person::Person(string name, int age){
	this->name = name;
	this->age = age;
}
string Person::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "\n";
	ss << "Age: ";
	ss << age;
	ss << "\n";
	return ss.str();
}

