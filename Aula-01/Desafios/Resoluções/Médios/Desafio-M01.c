#include <stdio.h>

int main() {
	
		/*Desafio para Conversoes de Medidas.*/
	
	float km;
	
	printf("Digite a Distancia em Km: ");
		scanf("%f", &km);
	printf("Metros: %.2f\n", km * 1000);
	printf("Centimetros: %.2f\n", km * 100000);
	printf("Milimetros: %.2f\n", km * 1000000);
	
	return 0;
}
