#include <stdio.h>
#include <stdlib.h>

int main() {
  float S, N1, N2;

  printf("Digite o primeiro número\n");
  scanf("%f", &N1);
  printf("Digite o segundo número\n");
  scanf("%f", &N2);
  S = N1 + N2;
  if (S > 10) printf("%f", S);

  system("pause");
  return 0;
}
