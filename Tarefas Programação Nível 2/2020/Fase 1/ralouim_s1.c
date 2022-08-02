/*
 * Alonso Martins
 * Ralouim
 * OBI2020 - fase 1
 * (Obs: Não funciona sempre)
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int n, doces = 0;
    scanf("%d", &n);
    double tendas[n][2];
    int tendaAtual = 0;
    double maiorD = 0;
    double dAnterior = 0.0;
    int tendaMaisLonge = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &tendas[i][j]);
        }
        double x = tendas[i][0];
        double y = tendas[i][1];
        double d = sqrt(x * x + y * y);
        if (d > maiorD)
        {
            maiorD = d;
            tendaMaisLonge = i;
        }
    }
    tendaAtual = tendaMaisLonge;
    dAnterior = maiorD;
    doces++;
    while (1)
    {
        maiorD = 0.0;
        for (int i = 0; i < n; i++)
        {
            double x0 = tendas[tendaAtual][0];
            double y0 = tendas[tendaAtual][1];
            double x1 = tendas[i][0];
            double y1 = tendas[i][1];
            double d = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
            if (d > maiorD && d < dAnterior)
            {
                maiorD = d;
                tendaMaisLonge = i;
            }
        }
        // 0  1  2  -  -  5  6
        // maiorD = 6 5 4 3 1
        // tendaA = 6 1 5 2 1
        // doces  = 1 2 3 4 5
        if (maiorD == 0)
            break;
        dAnterior = maiorD;
        tendaAtual = tendaMaisLonge;
        doces++;
    }
    printf("%d\n", doces);
    return 0;
}