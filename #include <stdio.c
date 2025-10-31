#include <stdio.h>

int main() {


    int casasTorre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }



    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\n=== Movimento do BISPO ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
