#include <stdio.h>
#define N 5

void defineVetor (int v[], int tam, int min, int max) //função que preenche aleatoriamente ate o limite definido
{
    srand(time(NULL));
    for (int i=0; i<tam; i++)
    {
        v[i] = (rand()%(max-min+1))+min;
    }
}

void direta(int v[],int tam)
{
    printf("\nImprimindo os valores do vetor de 0 ate %d", N-1);
    for (int i=0; i<tam; i++)
    {
        printf("\nO valor do vetor %d eh: %d", i, v[i]);//mostra o valores do vetor
    }
}

void indireta (int v[], int tam)
{
    printf("\nImprimindo os valores do vetor de %d ate 0", N-1);
    for (int j=tam-1; j>=0; j--)
    {
        printf("\nO valor do vetor %d eh: %d", j, v[j]);//mostra o valores do vetor

    }
}

int main()
{
    int v[N];//vetor definido com 5 posições
    int min, max;
    printf("Digite um valor para ser o minimo: ");
    scanf("%d", &min);
    printf("\nDigite um valor para ser o maximo: ");
    scanf("%d", &max);

//entra a funcao que define os valores aleatorios
    defineVetor(v, N, min, max);
    direta(v, N);
    indireta(v, N);
    printf("\nFim do programa");
    return 0;
}
