/*
 * Alonso M.
 * Camisetas de Olimpíada
 * OBI2020 - fase 1
 */
#include <stdio.h>

int main()
{
    int n, qP, qM, aux, aux2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        aux;
        scanf("%d", &aux);
        if (aux == 1)
            qP++;
        else
            qM++;
    }
    scanf("%d %d", &aux, &aux2);
    printf(qP <= aux && qM <= aux2 ? "S\n" : "N\n");
    return 0;
}