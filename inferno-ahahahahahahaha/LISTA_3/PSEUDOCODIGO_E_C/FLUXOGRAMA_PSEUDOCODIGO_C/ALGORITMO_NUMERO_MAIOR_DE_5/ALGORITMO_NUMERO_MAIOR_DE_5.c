#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


 int main(int argc, char *argv[])
 {
    setlocale(LC_ALL, "Portuguese");

    int N[5];
    int x, i;
    
    printf("digite 5 n�meros\n");
 
    for(i = 0; i < 5; i++)   
    {
       scanf("%d", &N[i] );
    }
    i = 1;
    x = N[0];
 
    while(i < 5) 
    {
        if (N[i] > x)
        {
           x = N[i];
        }
        i++;
    }
 
    printf("\n O maior n�mero que voce digitou foi %d .\n", x);
    
    i = 1;
    x = N[0];
    
    while(i < 5) 
    {
        if(N[i] < x)
        {
           x = N[i];
        }
        i++;
    }
    printf("\n O menor n�mero que voce digitou foi %d .\n", x);
    
    system("pause");
    return 0;
 }
