#include <stdio.h>
#define n 3

//funciona so pra 3x3 e nao sei fazer em um so loop

void verifica(int m[n][n], int tam)
{
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0;

    for (int j = 0; j < tam; j++) {
        soma1 += m[0][j];
    }
    printf("\nSOMA1 = %d", soma1);

    for (int j = 0; j < tam; j++) {
        soma2 += m[1][j];
    }
    printf("\nSOMA2 = %d", soma2);

    for (int j = 0; j < tam; j++) {
        soma3 += m[2][j];
    }
    printf("\nSOMA3 = %d", soma3);

    for (int j = 0; j < tam; j++) {
        soma4 += m[j][j];
    }
    printf("\nSOMA4 = %d", soma4);

    for (int j = 0; j < tam; j++) {
        soma5 += m[j][tam - 1 - j];
    }
    printf("\nSOMA5 = %d", soma5);

    if (soma1!=soma2){
        printf("\nA matriz nao eh um quadrado magico!");
    }
    else if (soma2==soma3&&soma3==soma4&&soma4==soma5){
        printf("\nA matriz eh um quadrado magico!");
    }
}

int main()
{
//    int i;
//
//    printf("Digite o tamanho da matriz quadrada que deseja: ");
//    scanf("%d", &i);

    int valor;

    int m[n][n];

    printf("Preencha a matriz quadrada 3x3: ");//preenchendo a matriz

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("\nDigite o valor do elemento [%d][%d]: ", i, j);
            scanf("%d", &valor);
            m[i][j] = valor;
        }
    }

    for (int i=0; i<n; i++)
    {
        printf("\n");
        for (int j=0; j<n; j++)
        {
            printf("%d ", m[i][j]);//mostra a matriz pra ver se ta certo
        }
    }

    verifica(m,n);

    printf("\nFim do programa");
    return 0;
}
