#include <stdio.h>

int main() {

		/*Exercício de Resto da Divisão.*/

	int n1, n2;

	printf("Digite 2 números (Com espaço): ");
		scanf("%d %d", &n1, &n2);
		
	printf("Quociente = %d\n", n1 / n2);
	printf("Resto = %d", n1 % n2);
	return 0;
}
