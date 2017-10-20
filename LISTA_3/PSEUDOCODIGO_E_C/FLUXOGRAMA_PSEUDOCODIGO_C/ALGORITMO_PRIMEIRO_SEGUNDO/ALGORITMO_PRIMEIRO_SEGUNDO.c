#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	printf("Digite o dividendo\n");
	scanf("%d", &N1);
	
	printf("Digite o divisor\n");
	scanf("%d", &N2);
	
	if(N1 % N2 == 0)
		printf("%d é divisovel por %d\n", N1, N2);
	else
		printf("%d não é divisivel por %d\n", N1, N2);
	
	system("pause");
	return 0;
}
