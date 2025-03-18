#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



void tower(int t) {
    if (t > 0) {
        printf("    Direita!\n"); // Função da Torre
        printf("\n");
        tower(t - 1);
    }
}
void bishop(int b) {
    if (b > 0) {
        printf("    Cima!\n"); // Função do bispo
        bishop(b - 1);
    }
}
void queen(int r) {
    if (r > 0) {
        printf("    Esquerda!\n"); // função da Rainha
        printf("\n");
        queen(r - 1);
    }
}

    int main() {

    // Torre 

    for (int i = 1; i <= 5; i++) {
        printf("|_____|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro
    }
    printf("|TORRE|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro

    printf("\nTorre faz seu movimento: 5 casas para a direita...\n \n");

    tower(5); // Movimento da peça

    for (int i = 1; i <= 5; i++) {
        printf("|_____|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro
    }
    printf("|_____|_____|_____|_____|_____|TORRE|_____|_____|\n"); // Desenho do tabuleiro

    printf("\n"); // Separação
    for (int i = 1; i <= 100; i++) {
        printf("-"); // Separação
    }
    printf("\n"); // Separação

    // Bispo
    for (int i = 1; i <= 5; i++) {
        printf("|_____|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro
    }
    printf("|BISPO|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro

    
    printf("\nBispo faz seu movimento: 5 casas na diagonal...\n \n");

    for (int i = 1; i <= 5; i++) {
        bishop(1); // Movimento na vertical
            for (int j = 1; j == 1; j = 1) {
                printf("    Direita!\n"); // Movimento na horizontal
                printf("\n");
                break;
            }
    }

    printf("|_____|_____|_____|_____|_____|BISPO|_____|_____|\n"); // Desenho do tabuleiro
    for (int i = 1; i <= 5; i++) {
        printf("|_____|_____|_____|_____|_____|_____|_____|_____|\n"); // Desenho do tabuleiro
    }

    printf("\n"); // Separação
    for (int i = 1; i <= 100; i++) { 
        printf("-"); // Separação
    }
    printf("\n"); // Separação

    // Rainha

    printf("|______|______|______|______|______|______|______|______|RAINHA|\n"); // Desenho do tabuleiro
    for (int i = 1; i <= 5; i++) {
        printf("|______|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    }

    printf("\nRainha faz seu movimento: 8 casas para a esquerda...\n \n");

    queen(8); // Movimento da peça

    printf("|RAINHA|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    for (int i = 1; i <= 5; i++) {
        printf("|______|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    }

    printf("\n"); // Separação
    for (int i = 1; i <= 100; i++) { 
        printf("-"); // Separação
    }
    printf("\n"); // Separação

    // Cavalo

    for (int i = 1; i <= 2; i++) {
    printf("|______|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    }
    printf("|______|______|______|CAVALO|______|______|______|______|______|\n"); // Desenho do tabuleiro
    for (int i = 1; i <= 3; i++) {
        printf("|______|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    }

    printf("\nCavalo faz seu movimento: 2 casas para cima e 1 pra direita...\n \n");

    int p = 1;
    do {
        for (int i = 1; i > 0 && i < 3; i++) {
            printf("    Cima!\n");
            printf("\n");
        }
        printf("    Direita!\n");
        printf("\n");
    } while (0 && p == 2);

    printf("|______|______|______|______|CAVALO|______|______|______|______|\n"); // Desenho do tabuleiro
    for (int i = 1; i <= 5; i++) {
        printf("|______|______|______|______|______|______|______|______|______|\n"); // Desenho do tabuleiro
    }

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
