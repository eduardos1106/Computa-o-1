#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void verefica(int v[],int tam)
{
    int k, n;
    printf("\nDigite um valor: ");
    scanf("%d", &n);//pede ao usuario um valor para ver se pertence ao vetor

    for (k=0; k<N; k++)//verefica se o valor n pertence ao vetor e indica
    {
        //if (n!=v[k])
        //{
        //  printf("\nNao esta no vetor v[%d]", k); - apenas para questao de testes
        // }

        if (n==v[k])
        {
            printf("\nEsta no vetor v[%d]", k);
            printf("\nAleta de duplicidade! Insira outro valor: ");
            scanf("%d", &n);
            k=-1;
        }
    }

    if (n!=v[tam-1])//define n para ser o ultimo vetor caso nao esteja nele inicialmente
    {
        v[tam-1]=n;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j,n;
    srand(time(NULL));

    int v[N];//define o vetor

    for (i=0; i<N; i++) //escolhe aleatoriamente os valores de v
    {
        v[i]=rand()%100+1;
    }

    i=0;
    for (j=0; j<N; j++)
    {
        printf("\nO elemento v[%d] é: %d", j, v[i]);//mostra os elementos do vetor v
        i++;
    }

    verefica(v, N);

    i=0;
    for (j=0; j<N; j++)
    {
        printf("\nO elemento v[%d] eh: %d", j, v[i]);//mostra denovo os elementos do vetor v
        i++;
    }
    printf("\nFim do programa");
    return 0;
}
