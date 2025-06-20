#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 1

void criaMatriz(int matriz[][N], int tam)
{
    for (int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            matriz[i][j] = rand()%100;
        }
    }
}

void imprimeMatriz(int matriz[][N], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for(int j=0; j<tam; j++)
        {
            printf("%02d ", matriz[i][j]);
        }
    }
}

void somaMatriz (int matriz1[][N],int matriz2[][N], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for(int j=0; j<tam; j++)
        {
            printf("%02d ", matriz1[i][j]+matriz2[i][j]);
        }
    }
}

void subtraiMatriz(int matriz1[][N], int matriz2[][N],int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for(int j=0; j<tam; j++)
        {
            printf("%02d ", matriz1[i][j]-matriz2[i][j]);
        }
    }
}

void multiplicaMatriz(int matriz[][N], int tam, int constante)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for(int j=0; j<tam; j++)
        {
            printf("%02d ", matriz[i][j]*constante);
        }
    }
}


int main()
{
    srand(time(NULL));
    int matriz1[N][N];
    int matriz2[N][N];
    int decisao;
    int constante;

    printf("\nEscolha as opçoes para prosseguir: ");
    printf("\n0 para criar as matrizes | 1 para imprimir as matrizes | 2 para somar | 3 para subtrair | 4 para multiplicar por uma constante| e -1 para sair: ");
    scanf("%d", &decisao);

    if (decisao!=0)
    {
        printf("\nMatrizes ainda nao criadas, por favor crie elas: ");
        scanf("%d", &decisao);
    }

    if (decisao==0)
    {
        printf("\n---------------------");
        printf("\nMatrizes criadas!");
        criaMatriz(matriz1,N);
        criaMatriz(matriz2,N);
        printf("\n");
    }


    while (decisao!=-1)
    {
        printf("\n1 para imprimir as matrizes | 2 para somar | 3 para subtrair | 4 para multiplicar por uma constante| e -1 para sair: ");
        scanf("%d", &decisao);


        if(decisao==1)
        {
            printf("\n---------------------");
            printf("\nMatriz 1: ");
            imprimeMatriz(matriz1,N);
            printf("\nMatriz 2: ");
            imprimeMatriz(matriz2,N);
            printf("\n");
        }

        if(decisao==2)
        {
            printf("\n---------------------");
            printf("\nSoma das matriz: ");
            somaMatriz(matriz1,matriz2,N);
            printf("\n");
        }

        if(decisao==3)
        {
            printf("\n---------------------");
            printf("Subtracao das matrizes: ");
            subtraiMatriz(matriz1,matriz2,N);
            printf("\n");
        }

        if (decisao==4)
        {
            printf("\n---------------------");
            printf("\nSelecione uma constante: ");
            scanf("%d", &constante);
            printf("\nMultiplicacao da matriz 1 por %d", constante);
            multiplicaMatriz(matriz1,N,constante);
            printf("\n");
        }
    }

    printf("\n---------------------");
    printf("\nFim do programa!");
    return 0;
}
