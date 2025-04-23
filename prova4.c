#include <stdio.h>

int main()
{
    int n;
    int produto;

    printf("Digite o valor o qual quer calcular a tabuada: ");
    scanf("%d", &n);

    for (int i=0; i<=10; i++)
    {
        produto = n * i;
        printf("\n%d * %d = %d", n, i, produto);
    }
    printf("\nFim do programa");
    return 0;
}
