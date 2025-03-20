#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    // Torre
    printf("Movimento Da Torre: \n");
    for(int i = 1; i <= 5; i++){
        printf("%d A direita\n", i);
    }

    // Bispo
    printf("Movimento Do Bispo: \n");
    int j = 1;
    while (j <= 5){
        printf("%d para cima a direta\n", j);
        j++;
    }

    // Rainha
    printf("Movimento Da Rainha: \n");
    int k = 1;
    do{
        printf("%d para esquerda\n", k);
        k++;
    } while (k <= 8);
    
    // Cavalo
      for(int b = 0; b < 1; b++ ){
        int e = 0;
        while (e < 2){
            printf("Baixo\n");
            e++;
        }
        printf("Esquerda\n");
    }


    return 0;
}