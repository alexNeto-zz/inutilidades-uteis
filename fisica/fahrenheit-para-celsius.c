#include <stdio.h>
#include <stdlib.h>

int main() {
  float F, C;

  printf("Qual a temperatura em F\n");
  scanf("%f", &F);
  C = 5 * (F - 32) / 9;
  printf("%f", C);

  system("pause");
  return 0;
}
