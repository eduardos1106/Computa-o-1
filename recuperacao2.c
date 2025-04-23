#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, a1, a2, soma=0;
    printf("Digite um número para calcular a soma de seus múltiplos: ");
    scanf("%d", &n);
    printf("Digite o intervalo inicial o qual quer calcular seus múltiplos: ");
    scanf("%d", &a1);
    printf("Digite o intervalo final o qual quer calcular seus múltiplos: ");
    scanf("%d", &a2);

    for(int i=a1; i<=a2; i++)
    {
        if (a1%n==0)
        {
            soma = soma + a1;
        }
        a1++;
    }
    printf("\nA soma de seus múltiplos no intervalo é: %d", soma);
    printf("\nFim do programa");
    return 0;
}
