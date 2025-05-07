#include <stdio.h>

int digitoveref (int n)
{
    int soma, x1, x2, x3;

    x1 = n/100;
    x2 = (n/10)%10;
    x3 = n%10;

    soma = x1+2*x2+3*x3;
    return ((soma)%11)%10;
}

int main()
{
    int a;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &a);

    printf("\nO digito vereficador do numero %d eh: %d", a, digitoveref(a));

    return 0;
}
