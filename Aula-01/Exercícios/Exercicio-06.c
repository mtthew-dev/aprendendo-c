#include <stdio.h>

int main() {

    /* Exercicio 06 - Resto da Divisao */

    // Variaveis inteiras pois quociente e resto nao tem casas decimais
    int n1, n2;

    // Leitura dos dois numeros
    printf("Digite 2 numeros (Com espaco): ");
    scanf("%d %d", &n1, &n2);

    // Operador / retorna o quociente inteiro
    printf("Quociente = %d\n", n1 / n2);

    // Operador % retorna o resto da divisao
    printf("Resto = %d", n1 % n2);

    return 0;
}
