/*
 * Alonso Martins
 * Camisetas de Olimpíada
 * OBI2020 - Fase 1
 */
#include <stdio.h>

int main()
{
    int N; // número de premiados
    int qP; // quantidade de camisetas de tamanho pequeno solicitadas
    int qM; // quantidade de camisetas de tamanho médio solicitadas
    int Ti; // tamanhos solicitados pelos premiados
    int P, M; // quantidade de camisetas de tamanhos pequeno e médio produzidas
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Ti);
        if (Ti == 1) qP++;
        else qM++;
    }
    scanf("%d %d", &P, &M);
    printf(qP <= Ti && qM <= M ? "S\n" : "N\n");
    return 0;
}
