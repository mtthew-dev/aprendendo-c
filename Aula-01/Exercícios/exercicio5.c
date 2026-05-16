#include <stdio.h>

int main() {

		/*Exercicio de Calculadora.*/

	float n1, n2;

	printf("Digite 2 numeros (Com espaco): ");
		scanf("%f %f", &n1, &n2);
		
	printf("SOMA = %.2f\n", n1 + n2);
	printf("SUBTRACAO = %.2f\n", n1 - n2);
	printf("MULTIPLICACAO = %.2f\n", n1 * n2);
	printf("DIVISAO = %.2f\n", n1 / n2);
	return 0;
}
