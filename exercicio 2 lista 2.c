#include <stdio.h>

int main()
{

    int n;
    float contagem, soma=0;

    printf("Digite um valor inteiro diferente de -1000 (caso contrario vai quebrar): ");
    scanf("%d", &n);

    while (n!=1000)
    {

        if (n>0)
        {
            soma = soma +n;//soma de todos os numeros positivos, já sendo a soma da média
            contagem++;//contagem de quantas vezes o if ocorreu 
        }

        printf("\nDigite outro valor inteiro (digite -1000 para fechar): ");
        scanf("%d", &n);

    }
    printf("\nA quantidade de valores positivos digitados foi: %.1f", contagem);
    printf("\nA média dos números positivos eh: %.2f", soma/contagem);

    printf("\nAdeus");
    return 0;
}
