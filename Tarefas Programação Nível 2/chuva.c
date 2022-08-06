/*
 * Alonso Martins
 * Chuva
 * OBI2019 - Fase 1
*/
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    char matriz[N][M];
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < M; j ++) {
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < M; j ++) { // molha a parede da esquerda p/ direita
            if (matriz[i][j] == '#') continue;
            if (i > 0 && matriz[i-1][j] == 'o')
                matriz[i][j] = 'o';
            if (j > 0 && matriz[i][j-1] == 'o' && matriz[i+1][j-1] == '#')
                matriz[i][j] = 'o';
            if (j < M - 1 && i < N - 1 && matriz[i][j+1] == 'o' && matriz[i+1][j+1] == '#')
                matriz[i][j] = 'o';
        }
        for (int j = M -1; j >= 0; j --) { // molha a parede da direita p/ esquerda 
            if (matriz[i][j] == '#') continue;
            if (i > 0 && matriz[i-1][j] == 'o')
                matriz[i][j] = 'o';
            if (j > 0 && matriz[i][j-1] == 'o' && matriz[i+1][j-1] == '#')
                matriz[i][j] = 'o';
            if (j < M - 1 && i < N - 1 && matriz[i][j+1] == 'o' && matriz[i+1][j+1] == '#')
                matriz[i][j] = 'o';
        }
    }
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < M; j ++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}