#include <stdio.h>

int main()
{

    int n;
    float soma, contagem;

    printf("Digite um valor inteiro maior que -1000 (caso contrario vai quebrar): ");
    scanf("%d", &n);

    while (n>-1000)
    {

        if (n>0)
        {
            soma = soma +n;
            contagem++;
        }

        printf("\nDigite outro valor inteiro maior que -1000: ");
        scanf("%d", &n);

    }
    printf("\nA quantidade de valores positivos digitados foi: %.1f", contagem);
    printf("\nA média dos números positivos eh: %.2f", soma/contagem);

    printf("\nAdeus");
    return 0;
}
