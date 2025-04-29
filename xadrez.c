#include <stdio.h>

// Constantes que definem a quantidade de casas que cada peça se move
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // ========================================
    // Movimentação do Bispo (Diagonal superior direita = Cima + Direita)
    // ========================================
    printf("Movimentação do Bispo:\n");

    // Usando um laço for
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // ========================================
    // Movimentação da Torre (Direita)
    // ========================================
    printf("Movimentação da Torre:\n");

    // Usando um laço while
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // ========================================
    // Movimentação da Rainha (Esquerda)
    // ========================================
    printf("Movimentação da Rainha:\n");

    // Usando um laço do...while
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    printf("\n");

    return 0;
}
