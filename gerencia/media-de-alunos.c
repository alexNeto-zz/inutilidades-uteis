#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int quantAlunos;
  int i = 0;
  float media = 0;

  printf("Digite a quantidade de alunos na sala\n");
  scanf("%d", &quantAlunos);

  while (i < quantAlunos) {
    float nota;
    printf("\nDigite a nota do %dº aluno\t", i + 1);
    scanf("%f", &nota);

    media += nota;
    i++;
  }
  media /= quantAlunos;

  printf("A média dos alunos %.1f\n", media);

  return 0;
}
