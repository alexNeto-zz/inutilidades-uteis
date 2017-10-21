#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N[3];
    int x, i;    
    printf("digite 3 números\n");
 
    for(i = 0; i < 3; i++)   
    {
       scanf("%d", &N[i] );
    }

	i = 1;
    x = N[0];
 
    while(i < 3) 
    {
        if (N[i] > x)
        {
           x = N[i];
        }
        i++;
    }
    printf("O número maior é: %d\n", x);
    
	system("pause");
	return 0;
}
