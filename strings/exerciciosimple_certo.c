#include <stdio.h>
#include <string.h>
#define N 101

int main()
{
    char nome[3][N];
    char tentativa[N];

    for (int i=0; i<3; i++)
    {
        printf("\nDigite o nome numero %d: ", i+1);
        fgets(nome[i],N,stdin);
    }

    printf("\nDigite um nome para advinhar: ");
    fgets(tentativa, N, stdin);

    while ((strcmp(tentativa,nome[0])!=0)&&(strcmp(tentativa,nome[1])!=0)&&(strcmp(tentativa,nome[2])!=0))
    {
        printf("\nA tentativa nao esta contida entre os nomes! Tente novamente: ");
        fgets(tentativa, N, stdin);
    }

    printf("\nA tentativa esta contida entre os nomes!");
    printf("\nFim do programa");
    return 0;
}
