#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int forca, nivelarma;
    float critico, danototal;

    printf("Digite a força do seu personagem, como némero inteiro (1 a 100): ");
    scanf("%d", &forca);
    printf("Digite o nível da arma que está usando, como némero inteiro (1 a 50): ");
    scanf("%d", &nivelarma);
    printf("Digite o multiplicador de crítico como um número real (1 a 2): ");
    scanf("%f", &critico);

    danototal = forca * nivelarma * critico;

    printf("%.2f!", danototal);

    if (danototal>5000)
    {
        printf("\nDANO CRÍTICO MASSIVO!");
    }

    else if (danototal>1000)
    {
        printf("\nDANO CRÍTICO!");
    }

    else
    {
        printf("\nDano normal");
    }

    printf("\nFim do programa");
    return 0;
}
