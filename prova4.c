#include <stdio.h>

int main()
{
    int n, a=0;
    int produto;

    printf("Digite o valor o qual quer calcular a tabuada: ");
    scanf("%d", &n);

    for (int i=0; i<=10; i++)
    {

        produto = n * a;
        printf("\n%d * %d = %d", n, a, produto);
        a++;
    }
    printf("\nFim do programa");
    return 0;
}
