#include <stdio.h>

int main() {
    char direcaoTorre[10], direcaoBispo1[10], direcaoBispo2[10], direcaoRainha[10], direcaoCavalo1[10], direcaoCavalo2[10];

    // Entrada do jogador
    printf("Escolha a direção da Torre (Direita/Esquerda/Cima/Baixo): ");
    scanf("%s", direcaoTorre);

    printf("Escolha a direção do Bispo - primeiro movimento (Cima/Baixo): ");
    scanf("%s", direcaoBispo1);
    printf("Escolha a direção do Bispo - segundo movimento (Direita/Esquerda): ");
    scanf("%s", direcaoBispo2);

    printf("Escolha a direção da Rainha (Direita/Esquerda/Cima/Baixo): ");
    scanf("%s", direcaoRainha);

    printf("Escolha o primeiro movimento do Cavalo (Cima/Baixo): ");
    scanf("%s", direcaoCavalo1);
    printf("Escolha o segundo movimento do Cavalo (Direita/Esquerda): ");
    scanf("%s", direcaoCavalo2);

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

    // Movimento do Cavalo - Utilizando FOR + WHILE
    printf("\nMovimento do Cavalo:\n");
    for (int x = 0; x < 1; x++) {
        printf("%s\n", direcaoCavalo1);
    }

    int y = 0;
    while (y < 1) {
        printf("%s\n", direcaoCavalo2);
        y++;
    }

    return 0;
}