#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void estacao(int dia, int mes){
	if((dia >= 23 && mes == 9 ) || (dia < 21 && mes == 10) || mes == 10)
		printf("%2d/%2d é primavera\n", dia, mes);
	else if((dia >= 21 && mes == 12 ) || (dia < 21 && mes == 3) || mes == 1 || mes == 2)
		printf("%2d/%2d é verão\n", dia, mes);
	else if((dia >= 21 && mes == 3 ) || (dia < 21 && mes == 6) || mes == 4 || mes == 5)
		printf("%2d/%2d é outono\n", dia, mes);
	else if((dia >= 21 && mes == 6 ) || (dia < 23 && mes == 9) || mes == 7 || mes == 8)
		printf("%2d/%2d é inverno\n", dia, mes);
	

}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes;
    int dia;
    printf("Digite uma data ex: 25 10: ");
    scanf("%d%d", &dia, &mes);
	estacao(dia,mes);
	
    return 0;
}
