/*
 * Cat.cpp
 *
 *  Created on: 29 de mai de 2016
 *      Author: grad
 */
#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::speak(){
	if(happy == true){
	cout << "meouw" << endl;
	}
	else{
		cout << "Ssssssss" << endl;
	}

}
void Cat::makeHappy(){
	happy = true;
}
void Cat::makeSad(){
	happy = false;
}
