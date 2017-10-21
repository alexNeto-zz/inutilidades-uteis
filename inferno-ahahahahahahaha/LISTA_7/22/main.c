#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
        int CPF[11];
        int CPFTeste[11];
        int i;
        printf("Digite um CPF \nex: 1 2 3 4 5 6 7 8 9 0 0 (com espaço entre eles)\n");
        for(i = 0; i < 11; i++){
            scanf("%d", &CPF[i]);
            CPFTeste[i] = CPF[i];
        }
        int j = 10;
        int A[10];
        for(i = 0; i < 9; i++){
            A[i] =  CPF[i] * j;
            j--;
        }
        int somaA = 0;
        for(i = 0; i < 9; i++)
            somaA += A[i];
        CPF[9] = 11 - (somaA % 11);
        if(CPF[9] >= 10)
            CPF[9] = 0;
        j = 11;
        for(i = 0; i < 10; i++){
            A[i] =  CPF[i] * j;
            j--;
        }
        somaA = 0;
        for(i = 0; i < 10; i++)
            somaA += A[i];
        CPF[10] = 11 - (somaA % 11);
        if(CPF[10] >= 10)
            CPF[10] = 0;
        j = 0;
        for(i = 0; i < 11; i++){
            if(CPF[i] == CPFTeste[i])
                j++;
        }
        if(j == 11)
            printf("CPF Válido");
        else
            printf("CPF Inválido");
        printf("\n");



    return 0;
}
