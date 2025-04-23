#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Digite um numero para ver os pares menores ou iguais a ele: ");
    scanf("%d", &n);

    while (i<=n)
    {
        if (i%2==0)
        {
            printf("\n%d", i);
        }
        i++;
    }
    printf("\nFim do programa");
    return 0;
}
