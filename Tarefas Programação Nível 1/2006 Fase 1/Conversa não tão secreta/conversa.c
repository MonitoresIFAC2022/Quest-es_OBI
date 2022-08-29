/*
 * Conversa não tão secreta
 * OBI2006 - Fase 1
 * Alonso Martins
*/
#include <stdio.h>

void limpar(int l, int c, int m[l][c]); // método para limpar as posições de uma matriz

int main()
{

    int N, M;                   // dimensões do parque
    int X, Y;                   // coordenadas do microfone
    int K;                      // número de quadrados pelos quais os dois homens passearam
    int rota;                   // direção da rota - (1) Norte; (2) Sul; (3) Leste; (4) Oeste;
    int minutos;                // total de minutos ouvidos pelo microfone
    int xAtual = 0, yAtual = 0; // coordenadas da localização atual dos dois homens

    scanf(" %d %d", &N, &M);
    scanf(" %d %d", &X, &Y);
    scanf(" %d", &K);

    minutos = (X <= 1 && Y <= 1) ? 1 : 0;

    for (int i = 0; i < K; i++)
    {
        scanf(" %d", &rota);

        yAtual += (rota == 1 ? 1 : (rota == 2 ? -1 : 0));
        xAtual += (rota == 3 ? 1 : (rota == 4 ? -1 : 0));

        minutos +=
            (xAtual >= X - 1 && xAtual <= X + 1 && yAtual >= Y - 1 && yAtual <= Y + 1) ? 1 : 0;
    }

    printf("%d\n", minutos);

    return 0;
}
