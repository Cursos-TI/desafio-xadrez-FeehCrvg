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
 int casasRainha = 8;
    int contadorRainha = 1;
    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    printf("=== Movimento do CAVALO ===\n");

    int baixo = 2;
    int esquerda = 1;
    
    for (int x = 1; x <= baixo; x++){
        printf("Baixo\n");

        if (x== baixo){
            int y= 1;
            while (y <= esquerda){
                printf("Esquerda\n");
                y++;
            }
        }
    }

    return 0;
}


