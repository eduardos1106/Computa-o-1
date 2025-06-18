#include <stdio.h>
#define N 500

int main()
{
    char string_arquivo[N];
    int i = 1;
    FILE* arquivo;
    FILE* arquivo_modificado;

    arquivo = fopen("teste3.txt", "r");
    if (arquivo == NULL)
    {
        printf("\nNao consegui achar o arquivo!");
        return 1;
    }

    arquivo_modificado = fopen("teste3_1.txt", "w+");//o arquivo deve ser gerado e lido porteriormente
    if (arquivo_modificado == NULL)
    {
        printf("\nNao consegui criar o arquivo modificado!");
        return 1;
    }

    while (fgets(string_arquivo, N, arquivo))
    {
        fprintf(arquivo_modificado, "%d. %s", i, string_arquivo);
        i++;
    }

    rewind(arquivo_modificado); //volta pro inicio pra conseguir ler

    while (fgets(string_arquivo, N, arquivo_modificado))
    {
        printf("\n%s", string_arquivo);
    }

    if (fclose(arquivo) == EOF)
    {
        printf("\nErro ao fechar o arquivo original!");
        return 1;
    }

    if (fclose(arquivo_modificado) == EOF)
    {
        printf("\nErro ao fechar o arquivo modificado!");
        return 1;
    }

    printf("\nFim do programa");
    return 0;
}
