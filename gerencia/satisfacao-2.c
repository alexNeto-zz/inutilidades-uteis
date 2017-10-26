#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int j = 3;
  int sim = 0;
  int nao = 0;
  int erro = 0;
  int total = 0;

  int i;
  for (i = 0;; ++i) {
    char letras;

    printf(
        "Você gostou do novo produto?\nS\tSim\nN\tNão\naperte ESC para sair\n");
    scanf("%c", &letras);

    if (letras == 27) break;

    switch (letras) {
      case 78:
        nao++;
        printf("não\n");
        break;
      case 83:
        sim++;
        printf("sim\n");
        break;
      default:
        erro++;
        printf("Erro\nApenas \"S\" e \"N\" são suportados\n");
        i--;
    }
    scanf("%c");
  }

  total = sim + nao;
  int escolha = 0;
  while (1 == 1) {
    printf(
        "\n\n\ndeseja ver o resultado:\n1\tsimples\n2\ttécnico\n3\texercício "
        "30\n0\tsair\n");
    scanf("%d", &escolha);

    if (escolha == 0) break;
    switch (escolha) {
      case 0:
        break;
      case 1:
        printf(
            "\n\n\nRESULTADO (simples)\n"
            "S %d%%\n"
            "N %d%%\n",
            (100 * sim) / total, (100 * nao) / total);
        break;
      case 2:
        printf(
            "\n\n\nRESULTADO (técnico)\n"
            "sim %d\nnão %d\nerros %d\ntotal %d\n",
            sim, nao, erro, total);
        break;
      case 3:
        if (sim > nao)
          printf("\n\n\nresultado: produto é bom\n");
        else if (nao > sim)
          printf("\n\n\nresultado: produto é ruim\n");
        else
          printf("\n\n\nresultado: empate");
        break;
      default:
        printf("\n\n\nEscolha apenas entre 1 e 2\n");
    }
  }

  return 0;
}
