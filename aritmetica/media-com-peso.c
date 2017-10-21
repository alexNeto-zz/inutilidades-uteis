#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  int A, B;
  float F;

  printf("Digite a nota \"A\"");
  scanf("%d", &A);
  printf("Digite a nota \"B\"");
  scanf("%d", &B);
  F = ((A * 3) + (B * 7))/10;
  printf("A nota sera %.2f\n", F);
  
  
  system("PAUSE");	
  return 0;
}
