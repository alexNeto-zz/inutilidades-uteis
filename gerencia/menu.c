#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int ops;

  printf(
      "Escolha uma das seguintes "
      "opções\n\t1\tSoma\n\t2\tMédia\n\t3\tMenor\n\t4\tMaior\n");
  scanf("%d", &ops);

  switch (ops) {
    case 1:
      printf("Soma\n");
      break;
    case 2:
      printf("Média\n");
      break;
    case 3:
      printf("Menor\n");
      break;
    case 4:
      printf("Maior\n");
      break;
    default:
      printf("Digite umoperação válida\n");
  }
  system("pause");
  return 0;
}
