#include <stdio.h>
#include <stdlib.h>

int main()
{

int i, divisivel, numero;
divisivel = 0;
for(i = 1; i <= 50; i++){
	//entrada do numero pelo usuario
	printf("Digite um número");
	scanf("%d", &numero);
	//calcula a divisibilidade entre 
	//o número digitado e 3
	if(numero % 3 == 0){
		//se o numero for divisivel por 3
		// +1 é adicionado a divisivel
		divisivel++;
}
	//imprime quantos numeros divisiveis
	//por 3 foram digitados
}
	printf("%d\n", divisivel);

    return 0;
}
