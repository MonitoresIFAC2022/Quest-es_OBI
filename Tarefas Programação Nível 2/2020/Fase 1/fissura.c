/*
 * Alonso Martins
 * Fissura Perigosa
 * OBI2020 - fase 1
 */
#include <stdio.h>

void escorrerLava(int n, int l, int c, char matriz[n][n + 1], int forca)
{
    if (matriz[l][c] - '0' <= forca)
        matriz[l][c] = '*';
    else
        return;
    if (l - 1 >= 0 && matriz[l - 1][c] != '*')
        escorrerLava(n, l - 1, c, matriz, forca);
    if (l + 1 < n && matriz[l + 1][c] != '*')
        escorrerLava(n, l + 1, c, matriz, forca);
    if (c - 1 >= 0 && matriz[l][c - 1] != '*')
        escorrerLava(n, l, c - 1, matriz, forca);
    if (c + 1 < n && matriz[l][c + 1] != '*')
        escorrerLava(n, l, c + 1, matriz, forca);
}

/* void printTerreno(int n, char m[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", m[i]);
    }
} */

int main()
{
    int n, forca;
    scanf("%d %d", &n, &forca);
    char terreno[n][n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", terreno[i]);
    }
    escorrerLava(n, 0, 0, terreno, forca);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", terreno[i]);
    }
    return 0;
}