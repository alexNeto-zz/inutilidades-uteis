#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i, positivo, negativo;
	float numero, media;
	positivo = 0;
	negativo = 0;
	for(i = 0; i < 40; i++)
	{

		printf("Digite um número:\t");
		scanf("%f", &numero);

		if (numero > 0)
		{
			//determinará o denominador da operação
			positivo++;
			//determinará o numerador da operação
			media += numero;
			
		}
		else
		{
			//contará a quantidade de números
			//negativos 
			negativo++;
		}
	}
	media /=positivo;
	printf("A média dos valores POSITIVOS digitados é de: %.2f\n\
A quantidade de números negativos digitador é de: %d\n\
",media, negativo );


    return 0;
}
