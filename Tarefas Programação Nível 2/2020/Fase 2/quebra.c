/*
 * Alonso Martins
 * Quebra-cabeças
 * OBI2020 - Fase 2
 */
#include <stdio.h>
 
int main() {

    int n, m;
    scanf("%d", &n);
    int tab[2][n];
    for(int i = 0; i < 2; i ++) {
        scanf("%d", &m);
        for (int j = 0; j < m; j ++) {
            scanf("%d", &tab[i][j]);
        }
    }

    return 0;
}