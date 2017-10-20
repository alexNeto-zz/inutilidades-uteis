#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int N1, N2, A, S, M, D;
    printf("Digite um numero: \n");
    scanf("%d", &N1);
    printf("Digite outro numero: \n");
    scanf("%d", &N2);
    A = N1 + N2;
    S = N1 - N2;
    M = N1 * N2;
    D = N1 / N2;    
    printf("O resultado da soma e: %d \n", A);
    printf("O resultado da soma e: %d \n", S);
    printf("O resultado da soma e: %d \n", M);
    printf("O resultado da soma e: %d \n", D);
  
  system("PAUSE");	
  return 0;
}
