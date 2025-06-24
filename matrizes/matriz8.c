#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void geraMatriz(int matriz[][N],int tam)
{
    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            matriz[i][j] = rand()%10+1;
        }
    }
}

void mostraMatriz(int matriz[][N],int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%02d ", matriz[i][j]);
        }
    }
}

void multiplicaMatriz(int matriz1[][N],int matriz2[][N],int matriz3[][N],int tam)
{
    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            matriz3[i][j] = 0;
            for (int k=0; k<tam; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%02d ", matriz3[i][j]);
        }
    }
}

void matrizQuadrado(int matriz1[][N],int matriz3[][N],int tam)
{
    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            matriz3[i][j] = 0;
            for (int k=0; k<tam; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz1[k][j];
            }
        }
    }

    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%02d ", matriz3[i][j]);
        }
    }
}

int main()
{
    int matriz1[N][N];
    int matriz2[N][N];
    int matriz3[N][N];
    int expoente;
    srand(time(NULL));

    geraMatriz(matriz1,N);
    geraMatriz(matriz2,N);

    printf("\nImprimindo matriz1: ");
    mostraMatriz(matriz1,N);

    printf("\n");

    printf("\nImprimindo matriz2: ");
    mostraMatriz(matriz2,N);
    printf("\n");

    printf("\nImprimindo a multiplicacao da matriz 1 com 2: ");
    multiplicaMatriz(matriz1,matriz2,matriz3,N);
    printf("\n");

    printf("\nImprimindo a matriz 1 ao quadrado: ");
    matrizQuadrado(matriz1,matriz3,N);
    printf("\n");

    printf("\nFIm do programa");
    return 0;
}
