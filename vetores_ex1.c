#include <stdio.h>
#define n 5

void pede(int v[], int tam)
{
    int valor;
    printf("Preenche os valores dos elementos de v: ");
    scanf("%d", &valor);
    v[0]=valor;

         for (int i=1; i<tam; i++)
    {
        printf("Preencha outro valor para v: ");
        scanf("%d", &valor);
        if (valor==v[i-1])
        {
            printf("Alerta de duplicidade! digite outro valor: ");
            scanf("%d", &valor);
            v[i]=valor;
        }
        else
        {
            v[i]=valor;
        }
    }
}

int main()
{
    int v[n];
    pede(v,n);

    for(int i=0; i<n; i++)
    {
        printf("\nOs valores do vetor v[%d] eh: %d", i, v[i]);
    }
    return 0;
}
