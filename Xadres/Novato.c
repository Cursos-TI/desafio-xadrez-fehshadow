#include <stdio.h>

int main() {
    char direcaoTorre[10], direcaoBispo1[10], direcaoBispo2[10], direcaoRainha[10];

    // Entrada do jogador
    printf("Escolha a direção da Torre (Direita/Esquerda/Cima/Baixo): ");
    scanf("%s", direcaoTorre);

    printf("Escolha a direção do Bispo - primeiro movimento (Cima/Baixo): ");
    scanf("%s", direcaoBispo1);
    printf("Escolha a direção do Bispo - segundo movimento (Direita/Esquerda): ");
    scanf("%s", direcaoBispo2);

    printf("Escolha a direção da Rainha (Direita/Esquerda/Cima/Baixo): ");
    scanf("%s", direcaoRainha);

    // Movimento da Torre - Utilizando FOR
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 1; i++) {
        printf("%s\n", direcaoTorre);
    }

    // Movimento do Bispo - Utilizando WHILE
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 1) {
        printf("%s, %s\n", direcaoBispo1, direcaoBispo2);
        j++;
    }

    // Movimento da Rainha - Utilizando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("%s\n", direcaoRainha);
        k++;
    } while (k < 1);

    return 0;
}