/*
 * Alonso Martins
 * Fissura Perigosa
 * OBI2020 - Fase 1
 */
#include <stdio.h>

void escorrerLava(int N, int l, int c, char matriz[N][N + 1], int F)
{
    if (matriz[l][c] - '0' <= F)
        matriz[l][c] = '*';
    else
        return;
    if (l - 1 >= 0 && matriz[l - 1][c] != '*')
        escorrerLava(N, l - 1, c, matriz, F);
    if (l + 1 < N && matriz[l + 1][c] != '*')
        escorrerLava(N, l + 1, c, matriz, F);
    if (c - 1 >= 0 && matriz[l][c - 1] != '*')
        escorrerLava(N, l, c - 1, matriz, F);
    if (c + 1 < N && matriz[l][c + 1] != '*')
        escorrerLava(N, l, c + 1, matriz, F);
}

int main()
{
    int N; // número de linhas e colunas
    int F; // força da erupção
    scanf("%d %d", &N, &F);
    char terreno[N][N + 1]; // matriz representando o terreno
    for (int i = 0; i < N; i++)
    {
        scanf(" %s", terreno[i]);
    }
    escorrerLava(N, 0, 0, terreno, F);
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", terreno[i]);
    }
    return 0;
}
