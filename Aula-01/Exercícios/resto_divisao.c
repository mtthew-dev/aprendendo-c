#include <stdio.h>

int main() {

		/*Exercicio de Resto da Divisao.*/

	int n1, n2;

	printf("Digite 2 numeros (Com espaco): ");
		scanf("%d %d", &n1, &n2);
		
	printf("Quociente = %d\n", n1 / n2);
	printf("Resto = %d", n1 % n2);
	return 0;
}
