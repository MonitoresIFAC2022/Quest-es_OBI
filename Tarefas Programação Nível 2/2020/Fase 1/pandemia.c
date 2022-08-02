/*
 * Alonso Martins
 * Pandemia
 * OBI2020 - fase 1
 */
#include <stdio.h>

int main()
{
    int n, numReunioes, a, r, totalInfectados = 0;
    scanf("%d %d", &n, &numReunioes);
    scanf("%d %d", &a, &r);
    int infectados[n];
    infectados[totalInfectados++] = a;
    for (int reuniao = 1; reuniao <= numReunioes; reuniao++)
    {
        int numParticipantes;
        scanf("%d", &numParticipantes);
        int participantes[numParticipantes];
        int ha_infectado = 0;

        for (int j = 0; j < numParticipantes; j++)
        {
            scanf("%d", &participantes[j]);
            if (reuniao < r)
                continue;
            if (ha_infectado)
                continue;
            ha_infectado = 0;
            for (int k = 0; k < totalInfectados; k++)
            {
                if (participantes[j] == infectados[k])
                {
                    ha_infectado = 1;
                    break;
                }
            }
        }
        if (ha_infectado)
        {
            for (int i = 0; i < numParticipantes; i++)
            {
                int eh_infectado = 0;
                for (int j = 0; j < totalInfectados; j++)
                {
                    if (participantes[i] == infectados[j])
                    {
                        eh_infectado = 1;
                        break;
                    }
                }
                if (!eh_infectado)
                {
                    infectados[totalInfectados++] = participantes[i];
                }
            }
        }
    }
    printf("%d\n", totalInfectados);
    return 0;
}