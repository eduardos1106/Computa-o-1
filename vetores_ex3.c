#include <stdio.h>
#define n 5

void soma (int v1[], int v2[], int v3[], int tam)
{
    int j = tam-1;//variavel inutil que eu gosto de usar
    for (int i=0; i<tam; i++)
    {
        v3[i]= v1[i]+ v2[j];//define o vetor v3 de acordo com o enunciado
        j--;
    }
    for (int i=0; i<tam; i++)
    {
        printf("\nO vetor soma de v1 com v2 eh v3[%d]: %d", i, v3[i]);//mostra o vetor soma
    }
}

int main()
{
    int v1[n];
    int v2[n];
    int v3[n];//soma de v1 com v2

    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        v1[i]=rand()%10;//define valores de v1
    }

    for(int i=0; i<n; i++)
    {
        v2[i]=rand()%10;//define valores de v2
    }

    for(int i=0; i<n; i++)
    {
        printf("\nOs valores de v1[%d] eh: %d", i, v1[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("\nOs valores de v2[%d] eh: %d", i, v2[i]);
    }

    printf("\n");
    soma(v1,v2,v3,n);
    printf("\n");
    printf("\nFim do programa!");
    return 0;
}
