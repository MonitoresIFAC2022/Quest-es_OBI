/*
 * Alonso Martins
 * Atlanta
 * OBI2020 - Fase 3
 */
#include <stdio.h>
#include <math.h>

int main() {
    int A, B, eh_valido = 0;
    int base=0, altura=0; //dimensoes da Sala
    scanf("%d %d", &A, &B); 
    for(int i = 1; i <= B; i ++) {
        if (i*i > B) break; //loop até i < raiz(B)
        if (B % i != 0) continue; //se verdadeiro, i não pode ser um lado de B
        base = B / i;
        altura = i;
        if (A == 2*(2+base+altura)) {
            eh_valido = 1;
            base += 2;
            altura += 2;
            break;
        }
    }
    printf("%d %d\n", eh_valido ? base < altura ? base : altura : -1, eh_valido ? base > altura ? altura : base : -1);
    return 0;
}