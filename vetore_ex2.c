#include <stdio.h>
#include <time.h>
#define n 5

void re(int v[], int tam)
{
    int valor;
    printf("\nDigite o numero da posicao o qual deseja retirar um elemento do vetor: ");
    scanf("%d", &valor);

    for (int i=0; i<tam; i++) //testa todas as posicoes e ve qual que é pra ser retirada
    {
        if (i==valor)
        {
            for (int j=valor; j<tam-1; j++) //essa desgraca puxa o vetor pra tras
            {
                v[j]=v[j+1];
            }
        }
    }

    for (int i=0; i<tam-1; i++)
    {
        printf("\nO novo vetor eh v[%d]: %d", i, v[i]);//mostra o novo vetor
    }
}

int main()
{
    int v[n];

    srand(time(NULL));
    for (int i=0; i<n; i++) //define os valores aleatorios de v
    {
        v[i]=rand()%10;
    }

    for (int i=0; i<n; i++)
    {
        printf("\nv[%d]: %d", i, v[i]);//mostra os valores antigos de v
    }

    re(v,n);
    return 0;
}
