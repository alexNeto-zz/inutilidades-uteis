#include <stdio.h>
#include <stdlib.h>

int main() {
  int Idade;

  printf("Digite a idade do nadador\n");
  scanf("%d", &Idade);

  if (Idade < 5)
    printf("Idade minima nao atingida\n");
  else if (Idade >= 5 && Idade <= 7)
    printf("Categoria: Infantil A\n");
  else if (Idade >= 8 && Idade <= 11)
    printf("Categoria: Infantil B\n");
  else if (Idade >= 12 && Idade <= 13)
    printf("Categoria: Juvenil A\n");
  else if (Idade >= 14 && Idade <= 17)
    printf("Categoria: Juvenil A\n");
  else if (Idade >= 18)
    printf("Categoria: Adulto\n");
  else
    printf("Digite apenas números inteiros\n");

  system("pause");
  return 0;
}
