#include <stdio.h>
#define N 150
#define M 3

int main()
{
    FILE* arquivo;
    FILE* arquivo_modificado;
    char strings[N];
    int contador=1;

    arquivo = fopen("teste3.txt", "w+");

    if (arquivo==NULL)
    {
        printf("\nNao foi possivel abrir o arquivo");
        return 1;
    }

    arquivo_modificado = fopen("teste3_1.txt", "w+");

    if (arquivo_modificado==NULL)
    {
        printf("\nNao foi possivel abrir o arquivo modificado");
        return 1;
    }

    for (int i=0; i<M; i++)
    {
        printf("\nDigite a string %d: ", i+1);
        fgets(strings,N,stdin);
        fprintf(arquivo,"%s",strings);
    }

    rewind(arquivo);

    printf("\nImprimindo strings de arquivo: ");

    while(fgets(strings,N,arquivo))
    {
        printf("\n%s ", strings);
    }

    rewind(arquivo);

    while(fgets(strings,N,arquivo))
    {
        fprintf(arquivo_modificado,"%d - %s",contador,strings);
        contador++;
    }

    rewind(arquivo_modificado);

    printf("\nImprimindo strings de arquivo modificado: ");

    while(fgets(strings,N,arquivo_modificado))
    {
        printf("\n%s ", strings);
    }

    int resultado1 = fclose(arquivo);

    if (resultado1==EOF)
    {
        printf("\nErro no fechamento do arquivo");
        return 1;
    }

    int resultado2 = fclose(arquivo_modificado);

    if (resultado2==EOF)
    {
        printf("\nErro no fechamento do arquivo modificado");
        return 1;
    }

    printf("\nFim do programa");
    return 0;
}
