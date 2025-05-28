#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define X 2

void criaMatriz(int m[N][N])
{
    for (int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            m[i][j]=rand()%100;
        }
    }
}

void imprimeMatriz(int m[N][N])
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

void somaMatriz(int m1[N][N], int m2[N][N])
{

    for (int i=0; i<N; i++)
    {
        printf("\n");
        for (int j=0; j<N; j++)
        {
            printf("%d ", m1[i][j]+m2[i][j]);
        }
    }
}

void subtraiMatriz(int m1[N][N], int m2[N][N])
{
    for (int i=0; i<N; i++)
    {
        printf("\n");
        for (int j=0; j<N; j++)
        {
            printf("%d ", m1[i][j]-m2[i][j]);
        }
    }

}

void multiplicaMatriz(int m1[N][N], int fator)
{
    for (int i=0; i<N; i++)
    {
        printf("\n");
        for (int j=0; j<N; j++)
        {
            printf("%d ", m1[i][j]*fator);
        }
    }
}

int main()
{
    srand(time(NULL));
    int m1[N][N];
    int m2[N][N];
    int valor=10;
    criaMatriz(m1);
    criaMatriz(m2);

    while (valor!=0)
    {
        printf("\n");
        printf("\nDigite 1 para imprimir as matrizes");
        printf("\nDigite 2 para somar as matrizes");
        printf("\nDigite 3 para subtrair as matrizes");
        printf("\nDigite 4 para multiplicar a m1 por %d", X);
        printf("\nDigite 0 para finalizar o programa: ");
        scanf("%d", &valor);

        if (valor==1)
        {
            imprimeMatriz(m1);
            printf("\n");
            imprimeMatriz(m2);
        }

        else if (valor==2)
        {
            somaMatriz(m1,m2);
        }

        else if(valor==3)
        {
            subtraiMatriz(m1,m2);
        }

        else if(valor==4)
        {
            multiplicaMatriz(m1,X);
        }

        else if(valor==0)
        {
            break;
        }

    }
    printf("\nFim do programa");
    return 0;
}
