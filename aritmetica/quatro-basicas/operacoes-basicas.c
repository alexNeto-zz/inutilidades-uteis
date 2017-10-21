#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int N1, N2, A, S, M, D;

  printf("Digite um número: \n");
  scanf("%d", &N1);
  
  printf("Digite outro número: \n");
  scanf("%d", &N2);
  
  A = N1 + N2;
  S = N1 - N2;
  M = N1 * N2;
  D = N1 / N2;    
  
  printf("O resultado da soma é: %d \n", A);
  printf("O resultado da soma é: %d \n", S);
  printf("O resultado da soma é: %d \n", M);
  printf("O resultado da soma é: %d \n", D);
  
  system("pause");	
  return 0;
}
