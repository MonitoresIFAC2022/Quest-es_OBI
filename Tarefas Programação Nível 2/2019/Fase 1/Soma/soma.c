/*
 * Alonso Martins
 * Soma
 * OBI2019 - Fase 1
 */
#include <stdio.h>

int main()
{
    int N, K, soma = 0, total = 0, aux;
    scanf("%d %d", &N, &K);
    int num[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < N; i++)
    {
        aux = i;
        while (aux < N)
        {
            soma += num[aux++];
            if (soma >= K) break;
        }
        if (soma == K)
        {
            total++;
            aux = i + 1;
            while (aux < N)
            {
                if (num[aux++] == 0)
                    total++;
            }
        }
        soma = 0;
    }
    printf("%d\n", total);
    return 0;
}
