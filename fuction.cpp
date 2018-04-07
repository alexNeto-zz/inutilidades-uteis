//============================================================================
// Name        : fuction.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void showMenu(){
	cout << "1 - Search" << endl;
	cout << "2 - View records" << endl;
	cout << "3 - Quite" << endl;
	cout << "Enter a selection" << endl;

}
void processSelection(){
	int input;
	cin >> input;
	switch (input){
		case 1:
			cout << "Searching" << endl;
			break;
		case 2:
			cout << "Viewing" << endl;
			break;
		case 3:
			cout << "Quitting" << endl;
		default:
			cout << "Invalid number" << endl;
		}

}
int main() {
	showMenu();
	processSelection();
	return 0;
}
