#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

int codPedido, quantPedido;

int camisetaBQuant, camisetaCQuant, moletonQuant;
int calcaQuant, agasalhoQuant, boneQuant;
int camisetaBQuantTotal = 0, camisetaCQuantTotal = 0, moletonQuantTotal = 0;
int calcaQuantTotal = 0, agasalhoQuantTotal = 0, boneQuantTotal = 0;
int totalQuantPedido;

int i, k, j = 3;

float totalEmReais;
float mediaEmReais;
float totalPedido;
float camisetaBranca;
float camisetaColorida;
float moleton, calca;
float agasalho, bone;

    for(i = 0; i < j; i++){
    //ints //
    camisetaBQuant = 0;
    camisetaCQuant = 0;
    moletonQuant = 0;
    calcaQuant = 0;
    agasalhoQuant = 0;
    boneQuant = 0;
    // floats //
    camisetaBranca = 0;
    camisetaColorida = 0;
    moleton = 0;
    calca = 0;
    agasalho = 0;
    bone = 0;

        for(k = 0;;){

            printf("Digite o código do produto\n(digite 0 para sair)\n");
            scanf("%d", &codPedido);

            if(codPedido == 0){
                if(camisetaBranca != 0)
                    printf("cod 001 camiseta branca\t\t%.0fUN R$ %.2f\n", camisetaBranca/7, camisetaBranca);
                if(camisetaColorida != 0)
                    printf("cod 002 camiseta colorida\t%.0fUN R$ %.2f\n", camisetaColorida/9, camisetaColorida);
                if(moleton != 0)
                    printf("cod 003 moleton\t\t\t%.0fUN R$ %.2f\n", moleton/17, moleton);
                if(calca != 0)
                    printf("cod 004 calça\t\t\t%.0fUN R$ %.2f\n", calca/12, calca);
                if(agasalho != 0)
                    printf("cod 005 agasalho\t\t%.0fUN R$ %.2f\n", agasalho/25, agasalho);
                if(bone != 0)
                    printf("cod 006 boné\t\t\t%.0fUN R$ %.2f\n", bone/5, bone);
                totalPedido = camisetaBranca + camisetaColorida + moleton + calca + agasalho + bone;
                totalEmReais += totalPedido;
                printf("Total do pedido: R$ %.2f\n", totalPedido);

                break;
            }


            printf("Digite a quantidade\n");
            scanf("%d", &quantPedido);

            switch (codPedido){

                case 1:
                    camisetaBQuantTotal += quantPedido;
                    camisetaBQuant += quantPedido;
                    camisetaBranca += quantPedido * 7;
                break;

                case 2:
                    camisetaCQuantTotal += quantPedido;
                    camisetaCQuant += quantPedido;
                    camisetaColorida += quantPedido * 9;
                break;

                case 3:
                    moletonQuantTotal += quantPedido;
                    moletonQuant += quantPedido;
                    moleton += quantPedido * 17;
                break;

                case 4:
                    calcaQuantTotal += quantPedido;
                    calcaQuant += quantPedido;
                    calca += quantPedido * 12;
                break;

                case 5:
                    agasalhoQuantTotal += quantPedido;
                    agasalhoQuant += quantPedido;
                    agasalho += quantPedido * 25;
                break;

                case 6:
                    boneQuantTotal += quantPedido;
                    boneQuant += quantPedido;
                    bone += quantPedido * 5;
                break;

                default:
                break;

            }

        }





    }

    printf("\n\n\n\n\n\nRelatorio: %d pedidos realizados com sucesso\n", j);
    printf("Quantidade de intens vendidos\n\
\tCamiseta branca\t\t%dUNs\n\
\tCamiseta colorida\t%dUNs\n\
\tMoleton\t\t\t%dUNs\n\
\tCalça\t\t\t%dUNs\n\
\tAgasalho\t\t%dUNs\n\
\tBoné\t\t\t%dUNs\n", camisetaBQuantTotal, camisetaCQuantTotal, moletonQuantTotal, calcaQuantTotal, agasalhoQuantTotal, boneQuantTotal);

    totalQuantPedido = camisetaBQuantTotal + camisetaCQuantTotal + moletonQuantTotal + calcaQuantTotal + agasalhoQuantTotal + boneQuantTotal;

    printf("Total de itens vendidos: %dUNs\n", totalQuantPedido);

    mediaEmReais = totalEmReais / totalQuantPedido;

    printf("Média por pedido R$ %.2f\n", mediaEmReais);
    printf("Valor total das vendas R$ %.2f\n", totalEmReais);





    return 0;
}
