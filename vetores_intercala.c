#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 6

void geraVetor(int vetor[],int tam)
{
    for (int i=0; i<tam; i++)
    {
        vetor[i] = rand()%10;
    }
}

void intercalaVetores(int vetor1[],int vetor2[],int vetor3[],int tam)
{
    for (int i=0; i<tam; i++) //posicoes par
    {
            vetor3[2*i] = vetor1[i];

            vetor3[2*i+1] = vetor2[i];

    }
}



int main()
{
    srand(time(NULL));
    int vetor1[N];
    int vetor2[N];
    int vetor3[N+N];

    geraVetor(vetor1,N);
    geraVetor(vetor2,N);
    printf("\nVetor1: ");
    for (int i=0; i<N; i++)
    {
        printf("\nPosicao [%d]: %d",i+1,vetor1[i]);
    }
    printf("\n");
    printf("\nVetor2: ");
    for (int i=0; i<N; i++)
    {
        printf("\nPosicao [%d]: %d",i+1,vetor2[i]);
    }

    intercalaVetores(vetor1,vetor2,vetor3,M);
    printf("\n");
    printf("\nVetor3: ");
    for (int i=0; i<(N+N); i++)
    {
        printf("\nPosicao [%d]: %d",i+1,vetor3[i]);
    }


    printf("\nFim do programa");
    return 0;
}
