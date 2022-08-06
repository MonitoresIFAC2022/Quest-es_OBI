/*
 * Alonso Martins
 * A idade de Dona Mônica
 * OBI2019 - Fase 1
*/
#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int M, A, B, C;
    scanf("%d", &M); // idade da Dona Mônica
    scanf("%d%d", &A, &B); // idades de dois filhos
    C = M - (A + B); // idade do outro filho
    C = max(max(A, B), C); // filho mais velho
    printf("%d\n", C);
    return 0;
}
