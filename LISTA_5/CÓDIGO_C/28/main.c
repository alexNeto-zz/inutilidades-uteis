#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");

    int j = 3;
    int entradaLetra[j];

    

        
        char letras;
        
        printf("Digite uma tecla\n");
        scanf("%c", &letras);
//        condicional para restringir o usuário
//        apenas as letras maiusculas da tabela ASCII
        if(((int)letras < 65 || (int)letras > 90)){
            int i;
            for(i = 0; (int)letras < 65 || (int)letras > 90; i++){
                if(i % 2 == 0){
                    printf("\nDigite uma tecla\n");
                    scanf("%c", &letras);                
                }
            }
        }
        
        
    return 0;
}
