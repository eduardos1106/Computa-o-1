#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
#define c 2

//a ideia é deixar o usuario colocar a matriz, mas nao vou escrever 200 numeros so pra testar um programa, por isso esta aleatorio

void preenche1 (int a[n][n], int tam)
{
    srand(time(NULL));

    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            a[i][j]= rand()%10 +(rand()%10);
        }
    }
}

void preenche2 (int b[n][n], int tam)
{
    srand(time(NULL));

    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            b[i][j]= rand()%10 + rand()%3;
        }
    }
}

void imprime (int a[n][n], int b[n][n], int tam)
{
    printf("\nMatriz 1: ");
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    printf("\nMatriz 2: ");
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
}

void soma(int a[n][n], int b[n][n], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
    }
}


void subtrai (int a[n][n], int b[n][n], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", a[i][j]-b[i][j]);
        }
    }
}

void multiplica (int a[n][n], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", c*a[i][j]);
        }
    }
}

int main()
{
    int m[n][n];
    int p[n][n];
    int valor;

    preenche1(m,n);
    preenche2(p,n);
    while (valor!=-1)
    {
        printf("\nDigite 1 para imprimir as matrizes, 2 para somar, 3 para subtrair e 4 para multiplicar por 2, e -1 para fechar: ");
        scanf("%d", &valor);

        if (valor==1)
        {
            imprime(m,p,n);
        }
        else if (valor==2)
        {
            soma(m,p,n);
        }
        else if (valor==3)
        {
            subtrai(m,p,n);
        }
        else if (valor==4)
        {
            multiplica(m,n);
        }
    }
    printf("\nFIM DO PROGRAMA!");
    return 0;
}
