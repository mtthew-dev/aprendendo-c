#include <stdio.h>

int main() {
	
	/*Desafio de Conta de Luz.*/ 
	
	float cons, preco, val = 0, imp;
	
	printf("Consumo (kWh): ");
		scanf("%f", &cons);
	printf("Preco por kWh: ");
		scanf("%f", &preco);
	
	val = cons * preco;
	imp = val * 0.12;
	
	printf("Subtotal: %.2f\n", val);
	printf("Imposto (12%): %.2f\n", imp);
	printf("Total: %.2f", val + imp);
	
	return 0;
}
