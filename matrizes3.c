#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3

void preenche(int m[tam][tam],int tamanho)
{
    for(int i=0; i<tamanho; i++)
    {
        for (int j=0; j<tamanho; j++)
        {
            m[i][j] = rand()%10;
        }
    }
}

void mostra (int m[tam][tam], int tamanho)
{
    for (int i=0; i<tamanho; i++)
    {
        printf("\n");
        for (int j=0; j<tamanho; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

void verefica (int m[tam][tam], int tamanho,int *min, int *max, int *linha, int *coluna)
{
    *max=0;

    for (int i=0; i<tamanho; i++)
    {
        for (int j=0; j<tamanho; j++)
        {
            if (m[i][j]>*max)
            {
                *max=m[i][j];
                j=0;
                *min=*max;
            }
            if (m[i][j]<*min)
            {
                *min= m[i][j];
                *linha=i;
                *coluna=j;
            }
        }
    }
}

int main()
{

    int m[tam][tam];
    int min, max, linha, coluna;
    srand(time(NULL));

    preenche(m,tam);

    mostra(m,tam);

    verefica(m,tam,&min,&max,&linha,&coluna);

    printf("\nO maior elemento elemento da matriz eh %d, e o menor elemento da linha eh %d", max, min);
    printf("\nO minimo se encontra na linha %d e coluna %d", linha, coluna);

    return 0;
}
