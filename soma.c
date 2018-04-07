/*
 ============================================================================
 Name        : soma.c
 Author      : Jüão Pedro
 Version     :
 Copyright   : Your copyleft notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void bemVindo(){
	puts("Bem-Vindo\n");
	puts("Programa que soma um número com ele mesmo\n");
}
double input(){
	puts("Digite um número\n");
	double x;
	scanf("%lf", &x);
	return x;
}
double conta(double x){
	return x + x;
}
void print(double x){
	printf("%lf + %lf = %lf\n", x, x, conta(x));
}
int main(void){
	bemVindo();
	double x = input();
	print(x);
	return EXIT_SUCCESS;
}
