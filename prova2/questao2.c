#include <stdio.h>
#define N 15

void calculaEstatisticas (float valores_arquivo[], int tamanho, float *maior)
{
    *maior=valores_arquivo[0];
    
    for (int i=0; i<tamanho; i++)
    {
        if (valores_arquivo[i]>*maior)
        {
            *maior=valores_arquivo[i];
        }
    }
}

int main()
{
    FILE* arquivo;
    float valores_arquivo[N];
    float dados;
    float maior=0;
    arquivo = fopen("valores.txt", "w+");

    if (arquivo==NULL)
    {
        printf("\nNao foi possivel achar o arquivo");
        return 1;
    }

    for (int i=0; i<N; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &dados);
        fprintf(arquivo, "\n%f", dados);
    }

    int resultado = fclose(arquivo);
    if (resultado==EOF)
    {
        printf("\nErro ao fechar o arquivo");
        return 1;
    }

    arquivo = fopen("valores.txt", "r");

    if (arquivo==NULL)
    {
        printf("\nNao foi possivel achar o arquivo");
        return 1;
    }

    int k=0;

    while (fscanf(arquivo,"%f",&dados)!=EOF)
    {
        valores_arquivo[k]=dados;
        k++;
    }
    rewind(arquivo);

    printf("\nMostrando valores que estao no arquivo 'valores.txt': ");
    printf("\n");

    while (fscanf(arquivo,"%f",&dados)!=EOF)
    {
        printf("%.2f\n", dados);
    }

    fclose(arquivo);
    if (resultado==EOF)
    {
        printf("\nErro ao fechar o arquivo");
        return 1;
    }

    calculaEstatisticas(valores_arquivo,N,&maior);

    printf("\nMostrando o conteudo do vetor: ");
    printf("\n");

    for (int i=0; i<N; i++)
    {
        printf("%.2f\n", valores_arquivo[i]);
    }

    printf("\nMaior valor encontrado pela funcao: %.2f", maior);


    printf("\nFim do programa");
    return 0;
}
