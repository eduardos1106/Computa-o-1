#include <stdio.h>
#define n 4
#define o 8

int intercalaVetores (int v1[], int v2[], int v3[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        v3[2*i]=v1[i];
        v3[2*i+1]=v2[i];
    }
}

int main()
{
    int v1[]= {1,2,5,4};
    int v2[]= {2,3,7,3};
    int v3[8];

    for (int i=0; i<n; i++)
    {
        printf("\nOs valores de v1[%d] eh %d", i, v1[i]);
    }
    print("\n");

    for (int i=0; i<n; i++)
    {
        printf("\nOs valores de v2[%d] eh %d", i, v2[i]);
    }
    print("\n");

    intercalaVetores(v1,v2,v3,o);
    for (int i=0; i<o; i++)
    {
        printf("\nOs valores do vetor v3[%d] eh: %d", i, v3[i]);
    }

    return 0;
}
