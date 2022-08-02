/*
 * Alonso Martins
 * Pandemia
 * OBI2020 - Fase 1
 */
#include <stdio.h>

int main()
{
    int N, M; // número de amigos e de reuniões
    int I; // identificador do primeiro amigo infectado 
    int R; // número da primeira reunião em que ele participou infectado
    int totalInfectados = 0;
    scanf("%d %d", &N, &M);
    scanf("%d %d", &I, &R);
    int infectados[N]; // vetor com os identificadores dos amigos infectados
    infectados[totalInfectados++] = I;
    for (int reuniao = 1; reuniao <= M; reuniao++)
    {
        int numParticipantes; // número de participantes da reunião de hoje
        scanf("%d", &numParticipantes);
        int participantes[numParticipantes]; // vetor com os identificadores dos participantes da reunião de hoje
        int ha_infectado = 0; // controla se alguém infectado participou da reunião

        for (int j = 0; j < numParticipantes; j++)
        {
            scanf("%d", &participantes[j]);
            if (reuniao < R) // se verdadeiro, o amigo I ainda não participou dessa reunio infectado
                continue;
            if (ha_infectado) // se algum participante está infectado, para de procurar algum participante infectado
                continue;
            ha_infectado = 0; // inicia considerando que não h ninguém infectado
            for (int k = 0; k < totalInfectados; k++) // procura alguém infectado nessa reunião
            {
                if (participantes[j] == infectados[k]) // se verdadeiro, achou alguém infectado na reunião
                {
                    ha_infectado = 1;
                    break;
                }
            }
        }
        if (ha_infectado)
        {
            // se alguém participou infectado, todos os participantes passam a estar infectados
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
