#include <stdio.h>

int main() {

    /* Exercicio 08 - Area do Retangulo */

    // Variaveis para as dimensoes da figura
    float largura, altura;

    // Leitura das dimensoes
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Altura: ");
    scanf("%f", &altura);

    // Formula: Area = largura * altura
    printf("Area: %.2f", largura * altura);

    return 0;
}
