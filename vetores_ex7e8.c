#include <stdio.h>
#define n 5

void pares(int v[], int N, float *soma, int *maior, int *menor)
{
    *maior=v[0];
    *menor=v[0];

    for (int j=0; j<N; j++)
    {
        if (v[j]>*maior)
        {
            *maior=v[j];
        }
    }

    for (int k=0; k<N; k++)
    {
        if (v[k]<*menor)
        {
            *menor=v[k];
        }
    }

    for (int i=0; i<N; i++)
    {
        if (v[i]%2==0)
        {
            *soma = *soma + v[i];
        }
    }
}

int main()
{
    float soma=0;
    int maior, menor;
    int v[n];
    srand(time(NULL));

    for (int j=0; j<n; j++)
    {
        v[j]=rand()%(20-0+1);
    }

    printf("Os elementos do vetor v eh:");
    for (int i=0; i<n; i++)
    {
        printf("\nv[%d] = %d", i, v[i]);
    }

    pares(v,n,&soma, &maior, &menor);
    printf("\nA media dos valores pares dos elementos de v eh: %.2f", soma/n);

    printf("\nO maior numero de todos os elementos de v eh: %d", maior);
    printf("\nO menor numero de todos os elementos de v eh: %d", menor);
    return 0;
}
