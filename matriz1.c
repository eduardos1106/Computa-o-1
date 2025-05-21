#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define l 5
#define c 5

void imprimeNormal (int m[l][c], int linha, int coluna)
{
    for(int i=0; i<linha; i++)
    {
        printf("\n");
        for(int j=0; j<coluna; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

void imprimeTransp(int m[l][c], int linha, int coluna)
{
    for(int i=0; i<l; i++)
    {
        printf("\n");
        for(int j=0; j<c; j++)
        {
            printf("%d ", m[j][i]);
        }
    }
}

int main()
{
    int m[l][c];//define matriz
    srand(time(NULL));//valores aleatorios

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<c; j++)
        {
            m[i][j]= rand()%10;//preenche a matriz
        }
    }

    printf("\nA matriz normal eh: ");
    imprimeNormal(m, l,c);//imprime matriz normal

    printf("\n");

    printf("\nA matriz transposta eh: ");
    imprimeTransp(m,l,c);//imprime matriz transposta

    return 0;
}
