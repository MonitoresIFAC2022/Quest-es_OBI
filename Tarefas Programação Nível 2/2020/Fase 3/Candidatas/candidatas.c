/*
 * Alonso Martins
 * Candidatas
 * OBI2020 - Fase 3
 * (Obs: Incompleto)
 */
#include <stdio.h>
#include <math.h>
int divisores[1000000000][200] = {};

int eh_candidata(int v[], int n) // verifica se a subsequência é candidata
{
    if (n == 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        int aux = sqrt(v[i]);
        aux += aux * aux == v[i] ? 1 : 0;
        for (int j = 1; j < aux; j++)
        {
            if (!(v[i] % j)) {
                
            }
        }
    }
    return 0;
}

int candidatas(int N, int S[N], int E, int D) // retorna o número de subsequências candidatas
{
    int total = 0;
    for (int i = E - 1; i < D; i++)
    {
        int subseq[D - E + 1], cont = 0;
        for (int j = i + 1; j < D; i++)
        {
            subseq[cont++] = S[j];
            total += eh_candidata(subseq, cont);
        }
    }
    return 0;
}

int main()
{
    int N;    // número de elementos na sequência S
    int M;    // número de operações a serem realizadas
    int T;    // tipo de operação a ser realizada
    int I, V; // variáveis da operação de tipo 1
    int E, D; // variáveis da operação de tipo 2
    scanf("%d", &N);
    int S[N]; // sequência das proteínas
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &S[i]);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &T);
        switch (T)
        {
        case 1:
            scanf("%d %d", &I, &V);
            S[I - 1] = V;
            break;

        case 2:
            scanf("%d %d", &E, &D);
            printf("%d\n", candidatas(N, S, E, D));
            break;

        default:
            break;
        }
    }

    return 0;
}
