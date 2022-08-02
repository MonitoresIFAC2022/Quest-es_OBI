/*
 * Alonso Martins
 * Fotografia
 * OBI2020 - Fase 2
 */
#include <stdio.h>

int main()
{
    int A, L; //dimensoes da fotografia
    int N;
    int melhor = -1;//identificador da melhor moldura
    int areaMel = -1; //a área não ocupada pela fotografia
    scanf("%d %d %d", &A, &L, &N);
    for (int i = 0; i < N; i++) {
        int molL, molA; //leitura das dimensoes da i-ésima moldura
        scanf("%d %d", &molL, &molA);
        if (A <= molA && L <= molL || A <= molL && L <= molA){
            int areaMol = molL * molA - L * A; //area da i-ésima moldura não ocupada pela fotografia
            if (areaMel >= 0){
                if (areaMol < areaMel){
                    areaMel = areaMol;
                    melhor = i + 1;
                }
            }else{
                melhor = i + 1;
                areaMel = areaMol;
            }
        }
    }
    printf("%d\n", melhor);
    return 0;
}