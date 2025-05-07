#include <stdio.h>
#include <math.h>

int arredonda (float a)
{
    return round(a);
}

int main()
{

    float n;

    printf("Digite um numero para arredondar: ");
    scanf("%f", &n);

    printf("\nO numero eh %.2f e ele arredondado eh %d", n, arredonda(n));

    return 0;
}

