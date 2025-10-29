#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};  // tabuleiro 5x5 inicializado com zeros
    int i;

    // Posicionar um navio verticalmente (2 células de altura)
    int colunaVertical = 1; // coluna fixa
    for (i = 1; i <= 2; i++) {
        tabuleiro[i][colunaVertical] = 1;
        printf("Navio vertical - parte %d em (%d, %d)\n", i, i, colunaVertical);
    }

    // Posicionar um navio horizontalmente (3 células de comprimento)
    int linhaHorizontal = 3; // linha fixa
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][i] = 2;
        printf("Navio horizontal - parte %d em (%d, %d)\n", i + 1, linhaHorizontal, i);
    }

    return 0;
}
