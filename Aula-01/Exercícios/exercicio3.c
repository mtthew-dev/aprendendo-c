#include <stdio.h>

int main() {

		/*Exercicio de Entradas.*/

	char nome[50];
	int idade;

	printf("Qual o seu nome: ");
		scanf("%s", nome);
	printf("Qual sua idade: ");
		scanf("%d", &idade);

	printf("Ola %s! e um prazer te conhecer.\n"
					"E saber que voce tem %d anos.", nome, idade);
	return 0;
}
