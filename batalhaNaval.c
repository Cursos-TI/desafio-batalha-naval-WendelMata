#include <stdio.h>

// Função para exibir o tabuleiro (10x10)
void exibirTabuleiro(int tabuleiro[10][10]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    // ===========================================
    // Nível Novato
    // ===========================================
    // Tabuleiro 5x5 para o nível Novato
    // Vamos posicionar dois navios: um na horizontal e outro na vertical.

    int tabuleiroNovato[5][5] = {0}; // Inicializando o tabuleiro com 0
    int navio1X[3] = {1, 1, 1}; // Coordenadas X para o navio horizontal
    int navio1Y[3] = {1, 2, 3}; // Coordenadas Y para o navio horizontal
    
    int navio2X[3] = {2, 3, 4}; // Coordenadas X para o navio vertical
    int navio2Y[3] = {2, 2, 2}; // Coordenadas Y para o navio vertical
    
    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiroNovato[navio1X[i]][navio1Y[i]] = 1; // Coloca 1 nas posições ocupadas
    }
    
    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiroNovato[navio2X[i]][navio2Y[i]] = 1; // Coloca 1 nas posições ocupadas
    }
    
    // Exibindo as coordenadas dos navios
    printf("Nível Novato:\n");
    printf("Navio 1 (Horizontal):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio1X[i], navio1Y[i]);
    }
    printf("\n");
    
    printf("Navio 2 (Vertical):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio2X[i], navio2Y[i]);
    }
    printf("\n");

    // Exibindo o tabuleiro do Nível Novato
    exibirTabuleiro(tabuleiroNovato);

    
    // ===========================================
    // Nível Aventureiro
    // ===========================================
    // Expansão do tabuleiro para 10x10
    // Agora o tabuleiro será maior e teremos quatro navios (dois na diagonal).

    int tabuleiroAventureiro[10][10] = {0}; // Inicializando o tabuleiro 10x10 com 0
    int navio1AventureiroX[3] = {1, 1, 1}; // Coordenadas X para o navio horizontal
    int navio1AventureiroY[3] = {1, 2, 3}; // Coordenadas Y para o navio horizontal

    int navio2AventureiroX[3] = {2, 3, 4}; // Coordenadas X para o navio vertical
    int navio2AventureiroY[3] = {2, 2, 2}; // Coordenadas Y para o navio vertical

    int navio3AventureiroX[3] = {4, 5, 6}; // Coordenadas X para o navio diagonal
    int navio3AventureiroY[3] = {4, 5, 6}; // Coordenadas Y para o navio diagonal

    int navio4AventureiroX[3] = {7, 8, 9}; // Coordenadas X para o navio diagonal
    int navio4AventureiroY[3] = {9, 8, 7}; // Coordenadas Y para o navio diagonal
    
    // Posicionando os navios no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiroAventureiro[navio1AventureiroX[i]][navio1AventureiroY[i]] = 1;
        tabuleiroAventureiro[navio2AventureiroX[i]][navio2AventureiroY[i]] = 1;
        tabuleiroAventureiro[navio3AventureiroX[i]][navio3AventureiroY[i]] = 1;
        tabuleiroAventureiro[navio4AventureiroX[i]][navio4AventureiroY[i]] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("\nNível Aventureiro:\n");
    printf("Navio 1 (Horizontal):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio1AventureiroX[i], navio1AventureiroY[i]);
    }
    printf("\n");
    
    printf("Navio 2 (Vertical):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio2AventureiroX[i], navio2AventureiroY[i]);
    }
    printf("\n");
    
    printf("Navio 3 (Diagonal):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio3AventureiroX[i], navio3AventureiroY[i]);
    }
    printf("\n");

    printf("Navio 4 (Diagonal):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", navio4AventureiroX[i], navio4AventureiroY[i]);
    }
    printf("\n");

    // Exibindo o tabuleiro do Nível Aventureiro
    exibirTabuleiro(tabuleiroAventureiro);
    

    // ===========================================
    // Nível Mestre
    // ===========================================
    // Agora vamos implementar habilidades especiais no tabuleiro

    int tabuleiroMestre[10][10] = {0}; // Inicializando o tabuleiro 10x10 com 0
    
    // Definindo a área de habilidade em forma de cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Definindo a área de habilidade em forma de cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    // Definindo a área de habilidade em forma de octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicando a habilidade de cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                tabuleiroMestre[i][j] = 1; // Marca a área afetada pela habilidade
            }
        }
    }

    // Exibindo o tabuleiro com a habilidade de cone
    printf("\nHabilidade Cone no Tabuleiro:\n");
    exibirTabuleiro(tabuleiroMestre);

    return 0;
}

