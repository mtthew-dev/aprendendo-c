#include <stdio.h>

int main() {
	
		/*Desafio de Media*/
	
	float n1, n2, n3, n4, m;
	
	printf("Digite a primeira nota: ");
		scanf("%f", &n1);
	printf("Digite a segunda nota: ");
		scanf("%f", &n2);
	printf("Digite a terceira nota: ");
		scanf("%f", &n3);
	printf("Digite a quarta nota: ");
		scanf("%f", &n4);
		
		m = (n1 + n2 + n3 + n4) / 4;
		
		printf("Sua media foi: %.1f", m);
		
	return 0;
}
