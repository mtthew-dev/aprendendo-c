#include <stdio.h>

int main() {

    /* Exercicio 03 - Entrada do Usuario */

    // Variaveis para armazenar os dados do usuario
    char nome[50];
    int idade;

    // Leitura dos dados
    printf("Qual o seu nome: ");
    scanf("%s", nome);
    printf("Qual sua idade: ");
    scanf("%d", &idade);

    // Exibe a saudacao personalizada
    printf("Ola %s! e um prazer te conhecer.\n"
           "E saber que voce tem %d anos.", nome, idade);

    return 0;
}
