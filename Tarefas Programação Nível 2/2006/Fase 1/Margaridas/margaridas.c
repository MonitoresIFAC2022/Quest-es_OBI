/*
 * Alonso Martins
 * Margaridas
 * OBI2006 - Fase 1
 */
#include <stdio.h>

int main()
{
    int L, C;           // número de linhas e de colunas de vasos existentes na plantação
    int M, N;           // número de linhas e de colunas dos lotes
    int margaridas = 0; // número máximo de margaridas que podem ser colhidas

    scanf(" %d %d", &L, &C);
    scanf(" %d %d", &M, &N);

    int grade[L][C]; // margaridas prontas para colheita

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf(" %d", &grade[i][j]);
        }
    }

    for (int i = 0; i < L; i += M)
    {
        for (int j = 0; j < C; j += N)
        {
            int soma = 0;
            for (int a = i; a < i + M; a++)
            {
                for (int b = j; b < j + N; b++)
                {
                    soma += grade[a][b];
                }
            }

            if (soma > margaridas)
                margaridas = soma;
        }
    }

    printf("%d\n", margaridas);

    return 0;
}
