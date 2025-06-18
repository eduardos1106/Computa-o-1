#include <stdio.h>
#define N 500

int main()
{
    float numero_arquivo;
    float soma=0;
    int i =1;
    FILE* arquivo;

    arquivo = fopen("teste2.txt", "r");

    if (arquivo==NULL)
    {
        printf("\nNao consegui achar o arquivo!");
        return 1;
    }

    while (fscanf(arquivo, "%f", &numero_arquivo) != EOF)
    {
        printf("\n numero %d: %.2f",i, numero_arquivo);
        soma = soma + numero_arquivo;
        i++;
    }
    printf("\nA soma dos numeros no arquivo eh: %f", soma);

    int resultado = fclose(arquivo);

    if (resultado==EOF)
    {
        printf("\nAconteceu um erro no fechamento do arquivo!");
        return 1;
    }

    printf("\nFim do programa");
    return 0;
}
