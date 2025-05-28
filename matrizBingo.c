#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void preencheBingo (int m[N][N])
{
    for (int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            m[i][j]=(rand()%100);
        }
    }
}

int verificaRepetidos (int m[N][N])
{
    for (int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if (m[i][j]==m[i-1][j-1])
            {
                return 1;
            }
        }
    }
    return 0;
}

void imprimeMatriz (int m[N][N])
{
    for (int i=0; i<N; i++)
    {
        printf("\n");
        for (int j=0; j<N; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

int main()
{
    int m[N][N];
    srand(time(NULL));

    preencheBingo(m);
    printf("Imprimindo sua cartela de bingo: ");
    imprimeMatriz(m);
    verificaRepetidos(m);

    while (verificaRepetidos(m)==1)
        {
        printf("\nHa numeros repetidos! Refazendo cartela: ");
            preencheBingo(m);
            verificaRepetidos(m);
            printf("\nImprimindo novo bingo: ");
            imprimeMatriz(m);
        }

    printf("\nFim do programa");
    return 0;
}
