#include <stdio.h>

int main () {
//Declarando variável Array
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {0};
  
//Navio 1 ( Horizontal )  I
    tabuleiro [2][4] = 3;
    tabuleiro [3][4] = 3;
    tabuleiro [4][4] = 3;

//Navio 2 ( Vertical )    J
    tabuleiro [6][5] = 3;
    tabuleiro [6][6] = 3;
    tabuleiro [6][7] = 3;
    
    printf("### BATALHA NAVAL ###\n\n");

// loop coluna
    printf("    ");
    for(int i = 0;i < 10; i++)
    {
        printf(" %c ", coluna[i]);
    }
    printf("\n");
    
// loop aninhado linha e tabuleiro
    for(int j = 0;j < 10; j++)
    {
        printf(" %2d ", linha[j]);
        for(int i = 0;i < 10; i++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
   return 0;
}