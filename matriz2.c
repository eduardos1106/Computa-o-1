#include <stdio.h>
#define tam 10

int main()
{
    int m[tam][tam] = {0};

    for (int i=0; i<tam; i++)
    {
        m[i][0]= 1;//todos os elementos da coluna 0 eh 1

        for (int j=1; j<=i; j++)
        {
            m[i][j]= m[i-1][j-1] + m[i-1][j];//define os outros elementos como a soma dos dois juntos da linha de cima
        }
    }

    for (int i=0; i<tam; i++)
    {
        printf("\n");
        for (int j=0; j<tam; j++)
        {
            printf("%d ", m[i][j]);//mostra a matriz
        }
    }

    return 0;
}
