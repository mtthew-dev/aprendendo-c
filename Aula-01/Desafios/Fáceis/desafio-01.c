#include <stdio.h>

int main() {
	
		/*Desafio de Troco.*/
	
	float val, din, troco;
	
	printf("Digite o valor do produto: ");
		scanf("%f", &val);
	printf("Digite o valor do dinheiro: ");
		scanf("%f", &din);
		
		troco = din - val;
	
		printf("Valor do troco: %.2f", troco);
	return 0;
}
