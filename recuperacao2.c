#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");//dado um numero, calcular a soma de seus multiplos entre 1 e 10

    int n, conta=0;
    int a=1;
    printf("Digite um número para calcular a soma de seus múltiplos: ");
    scanf("%d", &n);

    for(int i=0; i<=10; i++)
    {
        if (n*a>10)
        {
            break;
        }
        conta = conta + n * a;
        a++;
    }
    printf("\nA soma de seus múltiplos no intervalo é: %d", conta);
    printf("\nFim do programa");
    return 0;
}
