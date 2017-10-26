#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int Idade;

  printf("Digite a idade\n");
  scanf("%d", &Idade);

  if (Idade < 16)
    printf("N�o eleitor\n");
  else if (Idade >= 16 && Idade < 18 || Idade > 65)
    printf("Eleitor facultativo\n");
  else
    printf("Eleitor obrigatório\n");

  system("pause");
  return 0;
}
