#include <stdio.h>

int main() {

	/*Exercicio de Conversao de Temperatura.*/
	
	int celsius;
	float fahr;
	
	printf("Temperatura em Celsius: ");
		scanf("%d", &celsius);
		
		fahr = (celsius * 9 / 5) + 32;
		
	printf("Equivalente em Fahrenheit: %.2f", fahr);

	return 0;
}
