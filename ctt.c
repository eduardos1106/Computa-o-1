#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, g, Ra, Rg;
    float conta1, conta2;

    printf("Digite os preços atuais do álcool e gasolina separado por espaços (em reias por litro): ");
    scanf("%f %f", &a, &g);

    printf("\nDigite o rendimento do alcool e da gasolina de acordo com o carro que você usa, respectivamente (em quilômetros por litro): ");
    scanf("%f %f",&Ra, &Rg);

    conta1=Ra/a;
    conta2=Rg/g;

    if (conta1>conta2)
    {
        printf("O álcool é a opção mais econômica");
    }

    else if(conta2>conta1)
    {
        printf("A gasolina é a opção mais econômica");
    }

    else
    {
        printf("Não ha diferença de economia");
    }

    printf("\nAdeus!");
    return 0;
}
