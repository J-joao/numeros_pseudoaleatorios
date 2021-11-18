#include <stdio.h>

static uint *gerar_numeros (uint X, uint P1, uint P2, uint M)
{
    static uint array[10];

    for(int i = 0u; i <= 10; i++)
    {
        array[i] = (P1 * X + P2) % M; // Xn = P1 . Xn + P2 (mod M)
        X = array[i];                 // mudar o valor de Xn para o resultado da equação
    }
    return array;
}

int main(void)
{
    uint *ptr = gerar_numeros(79, 263, 71, 100);

    for(int i = 0u; i <= 10; i++)
    {
        if(i != 10) printf("X%d  -> %d\n", i, *ptr++);
        else printf("X%d -> %d\n", i, *ptr++);
    }
    return 0;
}
