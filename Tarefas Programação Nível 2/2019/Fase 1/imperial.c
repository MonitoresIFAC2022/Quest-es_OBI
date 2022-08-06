/*
 * Alonso Martins
 * Calçada Imperial
 * OBI2019 - Fase 1
 * (Obs: Incompleto)
*/
#include <stdio.h>

int main() {
    int N, total = 0;
    int V1, V2;
    scanf("%d", &N);
    int sequencia[N];
    for (int i = 0; i < N; i ++) {
        scanf("%d", &sequencia[i]);
    }
    int indAux1 = 0, indAux2 = 1;
    while(total < N && indAux1 + total <= N) {
        V1 = sequencia[indAux1];
        for (int i = indAux1 + 1; i < N; i ++) {
            int count = 1, atual = V1;
            V2 = sequencia[i];
            for (int j = i; j < N; j ++) {
                if (sequencia[j] != atual) {

                }
            }
        }
    }
    printf("%d\n", total);
    return 0;
}