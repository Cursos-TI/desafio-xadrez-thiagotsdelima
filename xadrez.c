#include <stdio.h>

int steps, moved, i;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
void moverBispo() {
    printf("Digite o número de casas para mover o Bispo em diagonal: ");
    scanf("%d", &steps);
    for (i = 1; i <= steps; i++) {
        printf("Movendo Bispo %d casa(s) em diagonal.\n", i);
    }
}
// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
void moverTorre() {
    printf("Digite o número de casas para mover a Torre para a direita: ");
    scanf("%d", &steps);
    for (i = 1; i <= steps; i++) {
        printf("Movendo Torre %d casa(s) para a direita.\n", i);
    }
}
// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
void moverRainha() {
    printf("Digite o número de casas para mover a Rainha para a esquerda: ");
    scanf("%d", &steps);
    for (i = 1; i <= steps; i++) {
        printf("Movendo Rainha %d casa(s) para a esquerda.\n", i);
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

int main() {

    printf("*****Jogo de xadrez começou, ótimo jogo!!!*****\n");
    printf("Escolha a peça que deseja mover:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Digite o número da peça: ");
    scanf("%d", &moved);

    switch (moved)
    {
    case 1:
        moverBispo();
        break;
    case 2:
        moverTorre();
        break;
    case 3:
        moverRainha();
        break;
    default:
        printf("Opção inválida. Saindo!\n");
        break;
    }

    return 0;
}