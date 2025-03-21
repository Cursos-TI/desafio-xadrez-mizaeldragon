#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima para Direita\n");
    moverBispo(casas - 1);
}

int main() {
    //Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    //Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);
    
    //Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    //loops complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            while (j < 1) {
                printf("Direita\n");
                j++;
            }
        }
    }
    
    return 0;
}