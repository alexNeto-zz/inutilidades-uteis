#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i, numeRefei = 0, dez = 0, entreDez = 0, maisDDez = 0;
	
	for(i = 0; i < 350; i++)
	{
		printf("Digite a Quantidade de refeições:\t");
		scanf("%d", &numeRefei);
		
		if(numeRefei < 10)
			dez++;	
		else if(numeRefei >= 10 && numeRefei < 20)
			entreDez++;
		else 
			maisDDez++;
	}
	
	printf("Menos de dez refeições:\t%d\n\
Entre dez e vinte:\t%d\n\
Mais de vinte:\t%d\n", dez, entreDez, maisDDez);

    return 0;
}	
