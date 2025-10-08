#include <stdio.h>

int main() {
    int i;

    // Movimento da TORRE - usando FOR
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do BISPO - usando WHILE
    printf("\nMovimento do BISPO:\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Movimento da RAINHA - usando DO-WHILE
    printf("\nMovimento da RAINHA:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}