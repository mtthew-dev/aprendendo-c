#include <stdio.h>

int main() {
	
	/*Desafio do IMC.*/
	
	float alt, pes, imc;
	
	printf("Diga sua Altura: ");
		scanf("%f", &alt);
	printf("Diga seu peso: ");
		scanf("%f", &pes);
		
	imc = pes / (alt * alt);
	
	printf("Seu IMC e: %.2f", imc);
	
	return 0;
}
