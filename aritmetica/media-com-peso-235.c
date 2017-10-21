#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, C;
  float F;
  printf("Digite a nota \"A\"\n");
  scanf("%d", &A);
  printf("Digite a nota \"B\"\n");
  scanf("%d", &B);
  printf("Digite a nota \"C\"\n");
  scanf("%d", &C);
  F = ((A * 2) + (B * 3) + (C * 5))/10;
  printf("A nota sera %.2f\n", F);
  system("PAUSE");	
  return 0;
}
