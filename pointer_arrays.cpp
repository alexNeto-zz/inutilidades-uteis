//============================================================================
// Name        : pointer_arrays.cpp
// Author      : "grad"
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[] = {"one", "two", "three"};
	string* pTexts = texts;
	int range = sizeof(texts)/sizeof(string);
	for(int i = 0; i < range; i++){
		cout << *pTexts << endl;
		pTexts++;
	}
	cout << "==========================" << endl;

	string *pT = &texts[0];
	string *uT = &texts[2];
	while(true){
		cout << *pT << endl;
		if(pT == uT)
			break;
		pT++;
	}
 	return 0;
}
