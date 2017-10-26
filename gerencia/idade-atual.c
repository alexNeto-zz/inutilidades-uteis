#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int Nasc, Atua;

  printf("Digite o ano de nascimento\n");
  scanf("%d", &Nasc);

  printf("Digite o ano atual\n");
  scanf("%d", &Atua);

  if (Nasc <= Atua) {
    printf("A idade é: %d anos\n ", (Atua - Nasc));
  } else {
    printf("Digite um ano válido");
  }

  system("pause");
  return 0;
}
