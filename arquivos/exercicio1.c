#include <stdio.h>
#define N 500

int main()
{
    char string_arquivo[N];
    FILE* arquivo;

    arquivo = fopen("teste1.txt", "r");

    if (arquivo==NULL)
    {
        printf("\nNao consegui achar o arquivo!");
        return 1;
    }

    while (fgets(string_arquivo,N,arquivo))
    {
        printf("\n%s", string_arquivo);
    }

    int resultado = fclose(arquivo);

    if (resultado==EOF)
    {
        printf("\nAconteceu um erro no fechamento do arquivo!");
        return 1;
    }

    printf("\nFim do programa");
    return 0;
}
