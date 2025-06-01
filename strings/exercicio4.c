#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void abrevicao(char nome[])
{
    char inicial[N] = "";
    char resposta[N] = "";
    char ponto[]= ".";
    char *palavra = strtok(nome, " ");

    int i=0;

    while (palavra!=NULL)
    {
        printf("\nPalavra %d: %s", i+1, palavra);

        if (strcmp(palavra, "de") == 0 || strcmp(palavra, "da") == 0 || strcmp(palavra, "do") == 0)
        {
            strcat(resposta, palavra);
            strcat(resposta, " ");
        }
        else
        {
            char temp[4] = "";
            temp[0] = palavra[0];
            temp[1] = '.';
            temp[2] = '\0';
            strcat(resposta, temp);
        }

        palavra = strtok(NULL, " ");
        i++;
    }
    printf("\nA abreviacao eh: %s", resposta);
}

int main()
{
    char nome[N];

    printf("Digite seu nome: ");
    fgets(nome, "%s", stdin);

    printf("\n%s", nome);

    abrevicao(nome);
    return 0;
}
