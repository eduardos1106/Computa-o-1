#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 50
#define M 3

void mudaMatriz(char matriz[M][M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int len = strlen(matriz[i][j]);
            char first = tolower(matriz[i][j][0]);
            char last = matriz[i][j][len - 1];
            if (
                (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') &&
                (last != 'a' && last != 'e' && last != 'i' && last != 'o' && last != 'u')
            )
            {
                for (int k = 0; k < len / 2; k++)
                {
                    char temp = matriz[i][j][k];
                    matriz[i][j][k] = matriz[i][j][len - 1 - k];
                    matriz[i][j][len - 1 - k] = temp;
                }
            }
        }
    }
}

int main()
{
    char matriz[M][M][N];//matriz 3x3 com 50 espaços

    for (int i=0; i<M; i++)
    {
        for (int j=0; j<M; j++) //preenche essa desgraça
        {
            printf("Preencha a string da posicao [%d][%d]: ", i, j);
            scanf("%49s", matriz[i][j]);
        }
    }

    printf("\nMatriz original: ");

    printf("\n");

    for (int i=0; i<M; i++)
    {
        printf("\n");
        for (int j=0; j<M; j++)
        {
            printf("%s ", matriz[i][j]);
        }
    }

    printf("\nMatriz alterada: ");

    printf("\n");

    mudaMatriz(matriz);

     for (int i=0; i<M; i++)
    {
        printf("\n");
        for (int j=0; j<M; j++)
        {
            printf("%s ", matriz[i][j]);
        }
    }

    printf("\nFIM DO PROGRAMA");
    return 0;
}
