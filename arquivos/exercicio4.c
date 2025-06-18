#include <stdio.h>
#include <math.h>
#define N 500

int main()
{
    float numero_arquivo;
    FILE* arquivo;
    FILE* arquivo_modificado;

    arquivo = fopen("teste4.txt", "r");
    if (arquivo == NULL)
    {
        printf("\nNao consegui achar o arquivo!");
        return 1;
    }

    arquivo_modificado = fopen("teste4_1.txt", "w+");
    if (arquivo_modificado == NULL)
    {
        printf("\nNao consegui criar o arquivo modificado!");
        return 1;
    }

    while (fscanf(arquivo, "%f", &numero_arquivo)!= EOF)
    {
        fprintf(arquivo_modificado, "%f\n", pow(numero_arquivo,2));
    }

    rewind(arquivo_modificado);

    while (fscanf(arquivo_modificado,"%f", &numero_arquivo)!= EOF)
    {
        printf("\n%.3f", numero_arquivo);
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
