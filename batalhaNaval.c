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
        printf("Este é o tabuleiro com navios:\n");
        printf("  A B C D E F G H I J\n");
    
        for(int j = 0; j < 10; j++){
            printf("%d ",j);
            for(int i = 0; i < 10; i++){
                printf("%d ",tabuleiro[j][i]);
            }
            printf("\n");
        }

        //Habilidades Especiais:
        //Cone (legenda 1):
        int matrizCone[3][5] ={
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        };

        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordXcone = 3;
        int CoordX0cone = CoordXcone;
        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordYcone = 4;
        int CoordY0cone = CoordYcone;

        if (CoordXcone >= 5 || CoordYcone >= 8){
            printf("Posição do Cone escolhida é inválida!");
        }else {
            for(int j = 0; j < 3; j++){
            for(int i = 0; i < 5; i++){
                if (matrizCone[j][i]!=0){
                    tabuleiro[CoordYcone][CoordXcone] = matrizCone[j][i];
                }
                CoordXcone++;
                if(i == 4)
                    CoordXcone = CoordX0cone;
            }
            CoordYcone++;
            if(j == 2)
                CoordYcone = CoordY0cone;
        }
        }

        //Cruz (legenda 2):
        int matrizCruz[3][5] ={
        {0, 0, 2, 0, 0},
        {2, 2, 2, 2, 2},
        {0, 0, 2, 0, 0},
        };

        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordXcruz = 2;
        int CoordX0cruz = CoordXcruz;
        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordYcruz = 7;
        int CoordY0cruz = CoordYcruz;

        if (CoordXcruz >= 5 || CoordYcruz >= 8){
            printf("Posição da Cruz escolhida é inválida!");
        }else {
            for(int j = 0; j < 3; j++){
            for(int i = 0; i < 5; i++){
                if (matrizCruz[j][i]!=0){
                    tabuleiro[CoordYcruz][CoordXcruz] = matrizCruz[j][i];
                }
                CoordXcruz++;
                if(i == 4)
                    CoordXcruz = CoordX0cruz;
            }
            CoordYcruz++;
            if(j == 2)
                CoordYcruz = CoordY0cruz;
        }
        }
        
        //Octaedro (legenda 4):
        int matrizOc[3][5] ={
        {0, 0, 4, 0, 0},
        {0, 4, 4, 4, 0},
        {0, 0, 4, 0, 0},
        };

        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordXoc = 6;
        int CoordX0oc = CoordXoc;
        //define a coordenada inicial (0 a 9) da posição 0,0 da matriz do cone
        int CoordYoc = 6;
        int CoordY0oc = CoordYoc;

        if (CoordXoc >= 7 || CoordYoc >= 8){
            printf("Posição da Cruz escolhida é inválida!");
        }else {
            for(int j = 0; j < 3; j++){
            for(int i = 0; i < 5; i++){
                if (matrizOc[j][i]!=0){
                    tabuleiro[CoordYoc][CoordXoc] = matrizOc[j][i];
                }
                CoordXoc++;
                if(i == 4)
                    CoordXoc = CoordX0oc;
            }
            CoordYoc++;
            if(j == 2)
                CoordYoc = CoordY0oc;
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

    return 0;
}
