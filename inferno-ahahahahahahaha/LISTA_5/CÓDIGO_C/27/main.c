#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

    int j = 3;
    int entradaLetra[j];

    
    int i;
    for(i = 0; i < j; ++i ){
        entradaLetra[i] = 0;
        char letras;
//        essa mensagem será mostrada apenas no
//        no primeiro ciclo
        if (i == 0)
            printf("Digite uma letra (minuscula)\t");
//        já esta será mostrada no terceiro ciclo
//        devido ao problema de pular o scanf 
//        quando coloca %c
        else if(i == 2)
            printf("Digite outra letra, que esteja localizada após a primeira\t");
//        há apenas um scanf para as duas mensagens
        scanf("%c", &letras); 
//        caso o usuário digite uma letra anterios à letra digitada
//        ele entrara em um loop infinito
//        podendo ser quebrado apenas se ele sair do programa
//        ou digitar uma letra posterios à digitada anteriormente
        if(i == 2){
            int l;
            for(l = 0;(int)letras < entradaLetra[0]; l++){
//                a mensagem apareserá na tela apenas quando "l" for par
//                pelo mesmo problema do %c citado anteriormente
                if(l % 2 == 0){
                    printf("\nA segunda letra deve vir depois da primeira\nexemplo\nV\ta --> b\nV\tc --> h\nF\tx --> r\n");
                    scanf("%c"); // também problema do %c
                    scanf("%c", &letras);
                }
            }
        }
//        condicional para restringir o usuário
//        apenas as letras minusculas da tabela ASCII
        if(i != 1 && ((int)letras < 97 || (int)letras > 122)){
            for(; (int)letras < 97 || (int)letras > 122; ){
                printf("\nDigite apenas letras minusculas\n"\
                "não digite números\n");
                scanf("%c");
                scanf("%c", &letras);                
            }
        }
        
        entradaLetra[i] = (int)letras;
    }
    
    int k;
    
    printf("\n");
//    loop para imprimir todas as letras entre a letra 1 e a letra 2
    for(k = entradaLetra[0]; k <= entradaLetra[2]; k++){
        printf("%c\t", k);
    }
    
    printf("\n");

    	return 0;
}
