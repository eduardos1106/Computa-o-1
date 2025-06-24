#include <stdio.h>
#include <math.h>


int main()
{
    FILE* arquivo;
    FILE* arquivo_modificado;
    float dados;
    int linhas;

    arquivo = fopen("teste4.txt", "w+");

    if (arquivo==NULL)
    {
        printf("\nNao foi possivel achar o arquivo");
        return 1;
    }

    arquivo_modificado = fopen("teste4_1.txt", "w+");

    if (arquivo_modificado==NULL)
    {
        printf("\nNao foi possivel achar o arquivo modificado");
        return 1;
    }

    printf("\nDigite quantos numeros voce quer colocar: ");
    scanf("%d", &linhas);

    for (int i=0; i<linhas; i++)
    {
        printf("\nDigite o valor %d: ", i+1);
        scanf("%f", &dados);
        fprintf(arquivo, "\n%f", dados);
    }

    rewind(arquivo);

    while(fscanf(arquivo,"%f",&dados)!=EOF)
    {
        fprintf(arquivo_modificado,"\n%.2f", (((pow(dados,2))-2)/5));
    }

    rewind(arquivo_modificado);

    printf("\nCalculando os valores do arquivo modificado com base na formula secreta :0 :");

    while(fscanf(arquivo_modificado,"%f",&dados)!=EOF)
    {
        printf("\n%.2f",dados);
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
