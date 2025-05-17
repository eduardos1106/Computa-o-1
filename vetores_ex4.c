#include <stdio.h>
#define N 5

void defineVetor (int v[], int tam, int lim) //função que preenche aleatoriamente ate o limite definido
{
    srand(time(NULL));
    for (int i=0; i<tam; i++)
    {
        v[i] = rand()%10;
    }
}

int main()
{
    int v[N];//vetor definido com 5 posições
    int lim=9;

//entra a funcao que define os valores aleatorios
    defineVetor(v, N, lim);

    for (int i=0; i<N; i++)
    {
        printf("\nO valor do vetor %d eh: %d", i, v[i]);//mostra o valores do vetor
    }
    printf("\nFim do programa");
    return 0;
}
