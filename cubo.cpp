//============================================================================
// Name        : cubo.cpp
// Author      : Jüão Pedro
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void bemVindo(){
	cout << "Bem-vindo!\n";
	cout << "Calculadora de cubos\n";
	cout << "Versão 1.0\n";
}
double input(){
	cout << "Digite um número: ";
	double x;
	cin >> x;
	return x;
}
double calculo(double x){
	return x * x;
}
void print(double x){
	cout << x << "³ = " << calculo(x) << endl;
}
int main() {
	bemVindo();
	double x = 1;
	do{
		//input();
		double x = input();
		//calculo(x);
		print(x);
	}while(x != 0);
	return 0;
}
