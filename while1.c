#include <stdio.h>
#include <locale.h>//ler um valor n dado pelo usario, e ver todos os numeros que dividos por n dao resto 2 entre 1 e 100

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int n, i=1,a=1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (i<=100)
    {

        if ((a%n)==2)
        {
            printf("\n%d", a);
        }

        i++;
        a++;
    }

    printf("\nAdeus!");
    return 0;
}
