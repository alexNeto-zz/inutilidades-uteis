#include <stdio.h>
#include <stdlib.h>

int main() {

    float inicial, final;

    printf("Digite o valor");
    scanf("%f", &inicial);

    final = inicial + (inicial * .10);

    printf("%f", final);
  
    system("pause");
    return 0;
}
