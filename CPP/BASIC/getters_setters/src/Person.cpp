#include "Person.h"

#include <iostream>

using namespace std;

Person::Person() {
	name = "George";
}
string Person::toString(){
	return "The name of the person is: " + name;
}
void Person::setName(string newName){
	name = newName;
}
