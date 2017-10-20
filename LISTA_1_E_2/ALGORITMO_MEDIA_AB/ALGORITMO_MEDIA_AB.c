#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  float A, B, M;
  
  printf("Digite o primeiro numero\n");
  scanf("%f", &A);
  printf("Digite o segundo numero\n");
  scanf("%f", &B);
  M = (A + B)/2;
  printf("A media e: %f\n", M);
  
  system("PAUSE");	
  return 0;
}
