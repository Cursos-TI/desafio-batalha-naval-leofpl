#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Representação no tabuleiro 0 = água, 3 = navio
    //Tabuleiro inicial:
    int tabuleiro[10][10] ={
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    printf("Este é o tabuleiro inicial:\n");
    printf("  A B C D E F G H I J\n");
    
    for(int j = 0; j < 10; j++){
        printf("%d ",j);
        for(int i = 0; i < 10; i++){
            printf("%d ",tabuleiro[j][i]);
        }
        printf("\n");
    }

    //Navios, tamanhos e coordenadas iniciais (as coordenadas devem ser feitas de 0 a 9 sempre):
    int Navio1Coord1[2]={4, 3};
    int Navio1Coord2[2]={4, 4};
    int Navio1Coord3[2]={4, 5};
    int Navio2Coord1[2]={2, 8};
    int Navio2Coord2[2]={3, 8};
    int Navio2Coord3[2]={4, 8};
    int Navio3Coord1[2]={5, 5};
    int Navio3Coord2[2]={6, 6};
    int Navio3Coord3[2]={7, 7};
    int Navio4Coord1[2]={7, 4};
    int Navio4Coord2[2]={8, 3};
    int Navio4Coord3[2]={9, 2};

    //Alocando valores na matriz inicial
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 10; i++){

            if (j == Navio1Coord1[0] && i == Navio1Coord1[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio1Coord2[0] && i == Navio1Coord2[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio1Coord3[0] && i == Navio1Coord3[1]){
               tabuleiro[j][i] = 3;
            }

            if (j == Navio2Coord1[0] && i == Navio2Coord1[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio2Coord2[0] && i == Navio2Coord2[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio2Coord3[0] && i == Navio2Coord3[1]){
               tabuleiro[j][i] = 3;
            }

            if (j == Navio3Coord1[0] && i == Navio3Coord1[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio3Coord2[0] && i == Navio3Coord2[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio3Coord3[0] && i == Navio3Coord3[1]){
               tabuleiro[j][i] = 3;
            }

            if (j == Navio4Coord1[0] && i == Navio4Coord1[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio4Coord2[0] && i == Navio4Coord2[1]){
                tabuleiro[j][i] = 3;
            }
            if (j == Navio4Coord3[0] && i == Navio4Coord3[1]){
               tabuleiro[j][i] = 3;
            }



            }
        }

        printf("\n");
        printf("Este é o tabuleiro atual:\n");
        printf("  A B C D E F G H I J\n");
    
        for(int j = 0; j < 10; j++){
            printf("%d ",j);
            for(int i = 0; i < 10; i++){
                printf("%d ",tabuleiro[j][i]);
            }
            printf("\n");
        }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
