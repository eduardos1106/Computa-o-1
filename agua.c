#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); //a conta eh definida por f(x)=7+ x.valor que depende do quanto usou

    int taxa = 7;
    int metros, conta1, conta2, conta3;
    printf("Digite qual foi a quantidade de água (em metros cúbicos) que foi utilizado no mês: ");
    scanf("%d", &metros);

    conta1 = metros*1;
    conta2 = metros*2;
    conta3 = metros*5;

    if ((metros>0&&metros<=10)||(metros==0))
    {
        printf("O valor a ser pago é: %d$", taxa);
    }
    else if (metros>10&&metros<=30)
    {
        printf("O valor a ser pago é: %d$", conta1+taxa);
    }

    else if (metros>30&&metros<=100)
    {
        printf("O valor a ser pago é: %d$", conta2+taxa);
    }

    else
    {
        printf("O valor a ser pago é: %d$", conta3+taxa);
    }

    printf("\nAdeus!");
    return 0;
}
