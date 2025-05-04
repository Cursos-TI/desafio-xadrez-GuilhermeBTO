
#include <stdio.h>
int main() {

//Torre
printf("Movimentacao da Torre 5 casas a Direita\n");
printf("\n");
    for (int Torre = 0; Torre < 5; Torre++) {
    printf("Direita\n");
    }
// Bispo
printf("============================================\n");
printf("\n");
printf("Movimentacao do Bispo 5 diagonais para Cima e a Direita\n");
printf("\n");
    for (int Bispo = 0; Bispo < 5; Bispo++) {
    printf("Direita, Cima\n");
    }
//Rainha
printf("============================================\n");
printf("\n");
printf("Movimentacao da Rainha 8 casas a esquerda\n");
printf("\n");
    for (int Rainha = 0; Rainha < 8; Rainha++) {
    printf("Esquerda\n");
    }
printf("============================================\n");
return 0;
}
