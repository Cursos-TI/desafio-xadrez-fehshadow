#include <stdio.h>
#include <string.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, char direcao[]) {
    if (casas > 0) {
        printf("%s\n", direcao);
        moverTorre(casas - 1, direcao);
    }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, char direcao[]) {
    if (casas > 0) {
        printf("%s\n", direcao);
        moverRainha(casas - 1, direcao);
    }
}

// Função recursiva + loops para mover o Bispo
void moverBispo(int casas, char direcao1[], char direcao2[]) {
    if (casas > 0) {
        printf("%s, %s\n", direcao1, direcao2);
        moverBispo(casas - 1, direcao1, direcao2);
    }
}

// Função para mover o Cavalo com loops complexos
void moverCavalo(char direcao1[], char direcao2[]) {
    printf("%s\n", direcao1);
    printf("%s\n", direcao2);
}

int main() {
    char direcaoTorre[10], direcaoRainha[10], direcaoBispo1[10], direcaoBispo2[10], direcaoCavalo1[10], direcaoCavalo2[10];

    // Entrada do jogador
    printf("Escolha a direção da Torre (Direita/Esquerda/Cima/Baixo): ");
    scanf(" %[^\n]", direcaoTorre);

    printf("Escolha a direção da Rainha (Direita/Esquerda/Cima/Baixo): ");
    scanf(" %[^\n]", direcaoRainha);

    printf("Escolha a direção do Bispo - primeiro movimento (Cima/Baixo): ");
    scanf(" %[^\n]", direcaoBispo1);
    printf("Escolha a direção do Bispo - segundo movimento (Direita/Esquerda): ");
    scanf(" %[^\n]", direcaoBispo2);

    printf("Escolha o primeiro movimento do Cavalo (Cima/Baixo): ");
    scanf(" %[^\n]", direcaoCavalo1);
    printf("Escolha o segundo movimento do Cavalo (Direita/Esquerda): ");
    scanf(" %[^\n]", direcaoCavalo2);

    // Executando os movimentos conforme escolha do jogador
    printf("\nMovimento da Torre:\n");
    moverTorre(1, direcaoTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(1, direcaoBispo1, direcaoBispo2);

    printf("\nMovimento da Rainha:\n");
    moverRainha(1, direcaoRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(direcaoCavalo1, direcaoCavalo2);

    return 0;
}