/*
 * person.h
 *
 *  Created on: 29 de mai de 2016
 *      Author: grad
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person();
	string toString();
	void setName(string newName);
};



#endif /* PERSON_H_ */
