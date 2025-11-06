#include <stdio.h>

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("---- Torre: movendo %d casas para a Direita ----\n", casasTorre);

    for (int i = 1; i <= casasTorre; i++) {
        printf("Torre - passo %d: Direita\n", i);
        printf("Direita\n");
    }

    printf("\n");

    printf("---- Bispo: movendo %d casas na diagonal Cima Direita ----\n", casasBispo);

    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Bispo - passo %d: Cima Direita\n", contadorBispo);
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    printf("---- Rainha: movendo %d casas para a Esquerda ----\n", casasRainha);

    int contadorRainha = 1;
    do {
        printf("Rainha - passo %d: Esquerda\n", contadorRainha);
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
