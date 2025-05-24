#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void cria (int m[N][N], int tam)
{
    srand(time(NULL));

    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            m[i][j]= (rand()%100)+1;
        }
    }
}

void mostra (int m[N][N], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

int main()
{
    int m[N][N];

    cria(m, N);

    printf("Sua cartela de bingo eh: ");
    mostra(m, N);

    printf("\n");
    printf("\nFim do programa");
    return 0;
}
