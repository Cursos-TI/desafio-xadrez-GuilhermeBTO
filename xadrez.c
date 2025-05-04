#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas > 0) {
    printf("Direita\n");
    moverTorre(casas - 1);
    }
}

// Função recursiva para o Bispo
void moverBispo(int diagonais) {
    if (diagonais > 0) {
    printf("Direita, Cima\n");
    moverBispo(diagonais - 1);
    }
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
    printf("Esquerda\n");
    moverRainha(casas - 1);
    }
}

int main() {

//Torre
printf("Movimentacao da Torre 5 casas a Direita\n");
printf("\n");
moverTorre(5);

//Bispo
printf("============================================\n");
printf("\n");
printf("Movimentacao do Bispo 5 diagonais para Cima e 5 a Direita\n");
printf("\n");
moverBispo(5);

//Rainha
printf("============================================\n");
printf("\n");
printf("Movimentacao da Rainha 8 casas a esquerda\n");
printf("\n");
moverRainha(8);

//Cavalo
printf("============================================\n");
printf("\n");
printf("Movimentacao do Cavalo 2 casas para cima e 1 casa para a direita\n");
printf("\n");
printf("============================================\n");

for (int movimento_cavalo = 0; movimento_cavalo < 1; movimento_cavalo++) {
    int casas_movidas = 0;
    // Duas casas para cima
    while (casas_movidas < 2) {
        if (casas_movidas == 1) {
            // Exemplo de uso do continue: pula para próxima interação após imprimir a primeira casa
            casas_movidas++;
            printf("Cima\n");
            continue;
        }
        printf("Cima\n");
        casas_movidas++;
    }
    // Uma casa para a direita, com exemplo de break
    for (int direita = 0; direita < 2; direita++) {
        if (direita == 1) {
            break; // Garante que só imprime uma vez
        }
        printf("Direita\n");
    }
}

return 0;
}
