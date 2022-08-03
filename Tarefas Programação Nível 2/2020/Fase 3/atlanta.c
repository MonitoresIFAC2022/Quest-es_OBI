/*
 * Alonso Martins
 * Atlanta
 * OBI2020 - Fase 3
 */
#include <stdio.h>
#include <math.h>

int menor(int a, int b)
{
    return a < b ? a : b;
}

int maior(int a, int b) 
{
    return a > b ? a : b;
}

int main()
{
    int A, B; // número de azulejos azuis e brancos
    int eh_possivel = 0;
    int base = 0, altura = 0; // dimensoes da Sala
    scanf("%d %d", &A, &B);
    for (int i = 1; i <= B; i++)
    {
        if (i * i > B) // loop até i < raiz(B)
            break;
        if (B % i != 0) // checa é possível formar um retângulo de dimensões i x (B/i)
            continue;
        base = B / i;
        altura = i;
        if (A == 2 * (2 + base + altura)) // checa se com o número de azulejos azuis podemos cercar os azulejos brancos
        {
            eh_possivel = 1;
            base += 2;
            altura += 2;
            break;
        }
    }
    printf("%d %d\n", eh_possivel ? menor(base, altura) : -1, eh_possivel ? maior(base, altura) : -1);
    return 0;
}
