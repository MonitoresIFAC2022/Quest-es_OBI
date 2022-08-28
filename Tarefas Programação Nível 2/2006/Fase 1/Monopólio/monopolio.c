/*
 * Alonso Martins
 * Monopólio
 * OBI2006 - Fase 1
 */
#include <stdio.h>

int main()
{

    int dinheiroInicial, n;

    scanf(" %d %d", &dinheiroInicial, &n);
    int jogadores[3] = {
        dinheiroInicial,
        dinheiroInicial,
        dinheiroInicial};

    for (int i = 0; i < n; i++)
    {
        char acao, jogador, inquilino;
        int valor;
        scanf(" %c ", &acao);
        switch (acao)
        {
        case 'C':
            scanf(" %c %d", &jogador, &valor);
            jogadores[jogador - 'D'] -= valor;
            break;

        case 'V':
            scanf(" %c %d", &jogador, &valor);
            jogadores[jogador - 'D'] += valor;
            break;

        case 'A':
            scanf(" %c %c %d", &jogador, &inquilino, &valor);
            jogadores[jogador - 'D'] += valor;
            jogadores[inquilino - 'D'] -= valor;
            break;

        default:
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", jogadores[i]);
    }
    printf("\n");

    return 0;
}
