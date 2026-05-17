#include <stdio.h>

int main() {

    /* Exercicio 02 - Apresentacao com Variaveis */

    // Declaracao e inicializacao das variaveis
    char nome[10] = "Matheus";
    int idade = 18;
    float altura = 1.80;

    // Exibe as informacoes formatadas
    printf("Meu nome e: %s\n", nome);
    printf("Minha idade e: %d\n", idade);
    printf("Minha altura e: %.2f\n", altura);

    return 0;
}
