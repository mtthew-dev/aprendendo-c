#include <stdio.h>

int main() {
	
		/*Desafio de Velocidade Media.*/
	
	int dist;
	float tempo, vm, dt = 0;
	
	printf("Distancia (Km): ");
		scanf("%d", &dist);
	printf("Tempo (H): ");
		scanf("%f", &tempo);
		
		vm = dist / tempo;
		dt = 100 / vm;
		printf("Velocidade Media: %.2f Km/h\n", vm);
		printf("Tempo para 100Km: %.2fh", dt);
		
	
	return 0;
}
