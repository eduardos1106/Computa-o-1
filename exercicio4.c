#include <stdio.h>

int maior(float a, float b)
{

    if (a>b)
    {
        return 1;
    }

    else if (b>a)
    {
        return 0;
    }
}

int main()
{
    float n, x;

    printf("Digite dois numeros separados por espaço: ");
    scanf("%f %f", &n, &x);

    if (x==n)
    {
        printf("\nOs numeros sao iguais!");
    }

    else if (maior(n,x)==1)
    {
        printf("O numero maior eh: %.2f", n);
    }

    else if (maior(n,x)==0)
{
    printf("O numero maior eh: %.2f", x);
    }

    printf("\nFim do programa");
    return 0;
}
