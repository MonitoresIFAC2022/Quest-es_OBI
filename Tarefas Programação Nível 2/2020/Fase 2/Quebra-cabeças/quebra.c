/*
 * Alonso Martins
 * Quebra-cabeças
 * OBI2020 - Fase 2
 * (Obs: Incompleto)
 */
#include <stdio.h>

int main()
{
    int N, m;
    scanf("%d", &N);
    int tab[2][N];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &tab[i][j]);
        }
    }
    return 0;
}
