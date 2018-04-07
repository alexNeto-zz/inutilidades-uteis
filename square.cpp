//============================================================================
// Name        : quare.cpp
// Author      : Jüão Pedro
// Version     : 1.0
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
void welcome(){
	cout << "Welcome" << endl;
	cout << "Square calculator" << endl;
	cout << "Version 1.0" << endl;
	cout << "Enter a number" << endl;
}
double input(){
	double x;
	cin >> x;
	return x;
}
double square(double x){
	return x * x;
}
void print(double x){
	cout << x << "² = " << square(x);
}
int main(){
	welcome();
	double x = input();
	print(x);
	return 0;
}
