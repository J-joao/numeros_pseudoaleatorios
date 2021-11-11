#include <stdio.h>

typedef unsigned int u_int;

//
// Xn = P1 . Xn + P2 (mod M) 
//
void gerar_numeros (u_int X, u_int P1, u_int P2, u_int M)
{
    static int array[10];

    for(int i = 0; i <= 10; i++)
    {
        array[i] = (P1 * X + P2) % M;          // Xn = P1 . Xn + P2 (mod M) 
        printf("X%d = %d\n", i, array[i]);     // mostrar elementos no terminal
        X = array[i];                          // mudar o valor de Xn para o resultado da equação
    }
}

int main(void)
{
    gerar_numeros(79, 263, 71, 100);
}
