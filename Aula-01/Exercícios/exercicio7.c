#include <stdio.h>

int main() {

	/*Exercicio de Conversao de Temperatura.*/
	
	
	float fahr, celsius;
	
	printf("Temperatura em Celsius: ");
		scanf("%f", &celsius);
		
		fahr = (celsius * 9.0 / 5.0) + 32;
		
	printf("Equivalente em Fahrenheit: %.2f", fahr);

	return 0;
}
