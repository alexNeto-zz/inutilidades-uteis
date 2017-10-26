#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("Use vírgula para casas decimais\n\n\n");
  while (1 == 1) {
    float F;
    printf("Digite a temperatura em ºF\n(Digite -460 para sair) ");
    scanf("%f", &F);
    if (F == -460) break;
    if (F <= -459.67) printf("Zero abosulo é ºF -459.67\n");
    float C = (F - 32) / 1.8;
    printf("ºF %.2f\tºC %.2f\n", F, C);
  }
  return 0;
}
