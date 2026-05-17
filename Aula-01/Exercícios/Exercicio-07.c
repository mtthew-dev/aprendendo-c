#include <stdio.h>

int main() {

    /* Exercicio 07 - Conversao de Temperatura */

    // Variaveis para celsius e fahrenheit
    float celsius, fahr;

    // Leitura da temperatura em Celsius
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Formula de conversao: F = (C * 9.0 / 5.0) + 32
    // Usamos 9.0 e 5.0 para garantir divisao com casas decimais
    fahr = (celsius * 9.0 / 5.0) + 32;

    // Exibe o resultado
    printf("Equivalente em Fahrenheit: %.2f", fahr);

    return 0;
}
