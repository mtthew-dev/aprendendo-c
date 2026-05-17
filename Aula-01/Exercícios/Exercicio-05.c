#include <stdio.h>

int main() {

    /* Exercicio 05 - Calculadora Basica */

    // Usando float para suportar numeros decimais e divisao correta
    float n1, n2;

    // Leitura dos dois numeros de uma vez
    printf("Digite 2 numeros (Com espaco): ");
    scanf("%f %f", &n1, &n2);

    // Exibe os resultados das 4 operacoes
    printf("SOMA = %.2f\n", n1 + n2);
    printf("SUBTRACAO = %.2f\n", n1 - n2);
    printf("MULTIPLICACAO = %.2f\n", n1 * n2);
    printf("DIVISAO = %.2f\n", n1 / n2);

    return 0;
}
