/*
 * Alonso Martins
 * Ralouim
 * OBI2020 - fase 1
 */
#include <stdio.h>
#include <math.h>

int tendasVisitadas(int n, int atual, int tendas[n][2], int tendaAnt)
{
    int totalVisitadas = 1;
    int x0, y0, x1, y1;
    int dAnt;
    x0 = tendas[atual][0];
    y0 = tendas[atual][1];
    if (tendaAnt > -1)
    {
        x1 = tendas[tendaAnt][0];
        y1 = tendas[tendaAnt][1];
        dAnt = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
    }
    else
    {
        dAnt = x0 * x0 + y0 * y0;
    }
    int cont = 0;
    int proxTendas[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (i == tendaAnt || i == atual)
            continue;
        x1 = tendas[i][0];
        y1 = tendas[i][1];
        int d = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
        if (d < dAnt)
        {
            proxTendas[cont++] = i;
        }
    }
    int maiorSoma = 0;
    for (int i = 0; i < cont; i++)
    {
        int soma = tendasVisitadas(n, proxTendas[i], tendas, atual);
        if (soma > maiorSoma)
            maiorSoma = soma;
    }
    return totalVisitadas + maiorSoma;
}

int main()
{
    int n, doces = 0;
    scanf("%d", &n);
    int tendas[n][2];
    int tendaAtual = 0;
    int maiorD = 0;
    int dAnterior = 0.0;
    int tendaMaisLonge = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &tendas[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int soma = tendasVisitadas(n, i, tendas, -1);
        if (soma > doces)
            doces = soma;
    }
    printf("%d\n", doces);
    return 0;
}