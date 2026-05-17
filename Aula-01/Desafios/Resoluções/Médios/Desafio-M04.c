#include <stdio.h>

int main() {
    
    /* Desafio-M04 — Pintura de parede */
    
    float largura, altura, area, custo_total;
    int latas;
    
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Altura: ");
    scanf("%f", &altura);
    
    // Cálculo da área
    area = largura * altura;
    
    // Calcula as latas e usa (int) para converter para inteiro arredondando para cima
    latas = (int)(area / 6.0 + 0.99);
    
    // Cálculo do custo total
    custo_total = latas * 45.00;
    
    printf("Area: %.2f m2\n", area);
    printf("Latas necessarias: %d\n", latas);
    printf("Custo total: R$ %.2f\n", custo_total);
    
    return 0;
}

