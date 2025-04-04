#include <stdio.h>

int main () {
//Declarando variável Array
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};// variavel I
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};// variavel J
    int tabuleiro[10][10] = {0};

//Navio 1 ( Horizontal )  I
    for(int i = 6; i < 9; i++){
    tabuleiro[i][3] = 3;
}
//Navio 2 ( Vertical )    J
    for(int i = 5; i < 8; i++){
    tabuleiro [5][i] = 3;
}
//posição  do navio 3 ( diagonal )
    for (int i = 0; i < 3; i++) {
        for (int j = 5; j < 8; j++) { //navio 4 ( diagonal )
        tabuleiro[j][-j] = 3;
    }
    tabuleiro[i][i] = 3;
}
    printf("### BATALHA NAVAL ###\n\n");
// coluna da variavel I
printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c  ", coluna[i]);
    }
    printf("\n");

// linha da variavel J
    for (int j = 0; j < 10; j++)
    {
        printf("%2d", linha[j]);
        for (int i = 0; i < 10; i++)
        {
            printf(" %d ", tabuleiro[j][i]);
        }
        printf("\n");
    }
   return 0;
}