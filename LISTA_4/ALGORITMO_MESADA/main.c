#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	

            float mesada;
            float compra;
            int resposta;
        
        
        printf("Qual � o valor da sua mesada?");
        scanf("%f", &mesada);
        printf("O que deseja fazer?\n");
        printf("1 - comprar\n2 - comprar apenas o necess�rio\n");
        scanf("%d", &resposta);
        switch(resposta){
            case 1:
            	while (mesada > 0){
            		printf("Qual o valor da compra?\n");
					if(mesada > 0){
					
            		printf("Voc� ainda tem R$ %.2f\n", mesada);  
            		scanf("%f", &compra);  
            		
            		
            		if(compra > mesada){
                    printf("N�o possui dinheiro suficiente\n");
                    }
                    
                    if(compra <= mesada)
                     mesada -= compra;
					}            	
                }
                
                if(mesada <= 0){
                    printf("Voc� n�o tem mais dinheiro!\n");
                }
            break;     
            case 2:
            	printf("op��o 2 selecionada. apenas o necess�rio. saldo: R$ 0.00");
                break;
            default:
               
                break;
        }
    }

