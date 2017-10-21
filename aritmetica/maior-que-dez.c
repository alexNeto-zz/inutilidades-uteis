#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float S, N1, N2;

	printf("Digite o primeiro numero\n");
	scanf("%f", &N1);
	printf("Digite o segundo numero\n");
	scanf("%f", &N2);
	S = N1 + N2;
	if(S > 10)
		printf("%f", S);	
	
	system("PAUSE");
	return 0;
}
