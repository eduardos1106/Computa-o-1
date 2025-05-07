#include <stdio.h>

int ehbissexto(int ano)
{
    if ((ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int ano;

    printf("Digite um ano para ver se eh bissexto: ");
    scanf("%d", &ano);

    if (ehbissexto(ano)==1)
    {
        printf("\nO ano %d eh bissexto!", ano);
    }

    else
    {
        printf("\nO ano %d nao eh bissexto", ano);
    }

    printf("\nFim do programa");
    return 0;
}
