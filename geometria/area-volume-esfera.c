#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float Raio, Area, Volume;
	
	printf("Digite o valor do raio (separe a dizima com um ponto \".\")\n");
	scanf("%f", &Raio);
	Area = 4 * 3.14 * pow(Raio, 2);
    Volume = (4/3)*3.14*pow(Raio, 3);
    printf("Raio: %f \nArea: %f\nVolume: %f\n", Raio, Area, Volume);
	
	
	system("PAUSE");
	return 0;
}
