#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i, codRepre = 0, totalItens;
	float valorPedido = 0, comissaoParcial = 0, total = 0;

	for(i = 0; i < 10; i++) {
		printf("Digite o código do representante\n");
		scanf("%d", &codRepre);

		printf("Digite o total de itens\n");
		scanf("%d", &totalItens);

		printf("Digite o valor total do pedido\n");
		scanf("%f", &valorPedido);

		if (totalItens < 20){
			comissaoParcial = valorPedido * .1;
			printf(" %dº pedido feito pelo representante código %d:\n\t Quantidade de itens vendidos:\t%d\n\t Valor total do pedido:\t%.2f \n\t comissão da venda 10 %% R$: %.2f\n",
			i+1, codRepre, totalItens, valorPedido, comissaoParcial);
		}
		else if (totalItens >= 20 && totalItens < 49){
			comissaoParcial = valorPedido * .15;
			printf(" %dº pedido feito pelo representante código %d:\n\t Quantidade de itens vendidos:\t%d\n\t Valor total do pedido:\t%.2f \n\t comissão da venda 15%% R$: %.2f\n", 
			i+1, codRepre, totalItens, valorPedido, comissaoParcial);
		}
		else if (totalItens >= 50 && totalItens < 74){
			comissaoParcial = valorPedido * .25;
			printf(" %dº pedido feito pelo representante código %d:\n\t Quantidade de itens vendidos:\t%d\n\t Valor total do pedido:\t%f \n\t comissão da venda 20%% R$: %.2f\n",
			i+1, codRepre, totalItens, valorPedido, comissaoParcial);
		} else {
			comissaoParcial = valorPedido * .25;
			printf(" %dº pedido feito pelo representante código %d:\n\t Quantidade de itens vendidos:\t%d\n\t Valor total do pedido:\t%f \n\t comissão da venda 25%% R$: %.2f\n",
			i+1, codRepre, totalItens, valorPedido, comissaoParcial);
		}

		switch (codRepre){
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				total += comissaoParcial;
				printf("total de comissão paga R$ %0.2f\n\n\n", comissaoParcial);
				break;
			default:
				i--;
				printf("Representante não cadastrado\n\n");
				break;
		}
			printf("\n\n\nPedidos finalizados \n\n\n");
	}

    return 0;
}
