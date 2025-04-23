#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float l, h;
    float area, tinta, tinta_certa;

    printf("Digite a largura e a altura da parede, em metros, respectivamente: ");
    scanf("%f %f", &l, &h);
    area = l * h;
    printf("\nA área total é: %.1f metros quadrados", area);
    tinta = area/2;

    tinta_certa = floor(tinta);

    if (tinta==tinta_certa)
    {
        printf("\nA quantidade de tinta necessária é: %.0f litros", tinta);
    }
    else
    {
        printf("\nA quantidade de tinta necessária é: %.0f litros", tinta_certa + 1);
    }

    printf("\nFim do programa");
    return 0;
}
