#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void mudaVetor(int vetor[],int tam,int posicao)
{
    for (int i=0; i<tam; i++)
    {
        if (i == posicao)
        {
            printf("");
        }
        else
        {
            printf("\n[%d]", vetor[i]);
        }
    }
}

int main()
{
    int vetor[N];
    int posicao;

    srand(time(NULL));

    for (int i=0; i<N; i++)
    {
        vetor[i] = rand()%100;
    }

    printf("\nImprimindo vetor: ");
    for (int i=0; i<N; i++)
    {
        printf("\nPosicao [%d]: %d ",i, vetor[i]);
    }

    printf("\nDigite uma posicao para retirar o vetor: ");
    scanf("%d", &posicao);

    printf("\nImprimindo novo vetor: ");
    mudaVetor(vetor,N,posicao);

    printf("\nFim do programa");
    return 0;
}
