#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); 
}


void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return; 
    printf("Diagonal superior direita\n");
    moverBispo(vertical - 1, horizontal - 1); 
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimentos do Cavalo:\n");

    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Cima %d\n", i);

        for (int j = 1; j <= movimentosHorizontais; j++) {
            if (i == 2 && j == 1) {
                printf("Direita %d\n", j);
                break; 
            }
           
        }
    }
}



int main() {
    int casasTorre = 5;
    int casasBispoV = 3;
    int casasBispoH = 2;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do Bispo ===\n");
   
    for (int i = 0; i < casasBispoV; i++) { 
        for (int j = 0; j < casasBispoH; j++) { 
            printf("Diagonal superior direita\n");
        }
    }


    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    return 0;
}