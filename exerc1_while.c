#include <stdio.h>

int main()
{

    int n, maior=0;
    printf("Digite um número inteiro positivo (caso for negativo, irá encerrar o programa): ");
    scanf("%d", &n);

    while (n>0)
    {
        if (n>maior)
        {

            maior=n;
        }

        printf("\nDigite outro valor seguindo as mesmas regras: ");
        scanf("%d", &n);
    }
    printf("\nO maior valor digitado foi: %d", maior);

    printf("\nAdeus");
    return 0;
}
