#include <stdio.h>

int main()
{

    int n, teste=0;
    printf("Digite um número inteiro positivo (caso for negativo, irá encerrar o programa): ");
    scanf("%d", &n);

    while (n>0)
    {
        if (n>teste)
        {

            teste=n;
        }

        printf("\nDigite outro valor seguindo as mesmas regras: ");
        scanf("%d", &n);
    }
    printf("\nO maior valor digitado foi: %d", teste);

    printf("\nAdeus");
    return 0;
}
