#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N[3];
    int i, Maior;    
    printf("digite 3 números\n");
 
    for(i = 0; i < 3; i++)   
    {
       scanf("%d", &N[i] );
    }

	i = 1;
    Maior = N[0];
 
    while(i < 3) 
    {
        if (N[i] > Maior)
        {
           Maior = N[i];
        }
        i++;
    }
		
	system("pause");
	return 0;
}
