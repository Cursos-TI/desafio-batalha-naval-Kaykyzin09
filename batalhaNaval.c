#include <stdio.h>
//Definição do tamanho da tabela
#define LINHA 10
#define COLUNA 10

int main () {
//Declarando variável Array
    char coluna[COLUNA];// variavel J
    int linha[LINHA];// variavel I
    int tabuleiro[LINHA][COLUNA] = {0};

//navio 1 ( Horizintal )
    for( int navioH = 5; navioH < 8; navioH++){
        tabuleiro[navioH][1] = 3;
    }

//navio 2 ( Vertical )
    for(int navioV = 7; navioV < 10; navioV++){
        tabuleiro[8][navioV] = 3;
    }

//Navio 3 ( Diagonal 1 )
    for(int navioD1 = 0; navioD1 < 3; navioD1++){
//Navio ( Diagonal 2 )
        for(int navioD2 = 1; navioD2 < 4; navioD2++){
            tabuleiro[navioD2][-navioD2] = 3;
        }
        tabuleiro[navioD1][navioD1] = 3;
    }

//Habilidade Octaedro
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(((i >= 4 && i <= 6) && j == 8) ||
               (i == 5 && j == 7) ||
               (i == 5 && j == 9)) {
                tabuleiro[i][j] = 5;
            }
        }
    }

//Habilidade Cone
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if((i == 9 && (j >= 2 && j <= 6) ||
                i == 8 && (j >= 3 && j <= 5) ||
                i == 7 && j == 4)) {
                tabuleiro[i][j] = 5;
            }
        }
    }

// habilidade Cruz
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(((i >= 1 && i <= 5) && j == 5 ||
                 i == 3 && j == 4 ||
                 i == 3 && j == 6)) {
                 tabuleiro[i][j] = 5;           }
        }
    }
    
//loop da linha de 1 a 10
    for(int i = 0; i < LINHA; i++){
        linha[i] = 1 + i;
    }

//loop da coluna de A a J
    for(int j = 0; j  < COLUNA; j++){
        coluna[j] = 'A' + j;
    }
    printf("\n");

//Exibe o nome do jogo
    printf("###   BATALHA NAVAL   ###\n\n");
    printf("   ");

//exibe o tabuleiro
    for(int j = 0; j < COLUNA;j++){
    printf("%c ", coluna[j]);
    }
    printf("\n");

    for(int i = 0; i < LINHA;i++){
        printf("%2d", linha[i]);
        for(int j = 0; j < COLUNA; j++){
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}