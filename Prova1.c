#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float l, c;
    float perimetro, area;

    printf("Digite a largura e o comprimento, respectivamente, em metros: ");
    scanf("%f %f", &l, &c);

    perimetro = 2*l + 2*c;
    area = l * c;

    printf("O perímetro é: %.0f", perimetro);
    printf("\nA quantidade de rodapé necessário vai ser: %.2f metros", perimetro - 0.8);
    printf("\nA área do quarto é: %.2f metros quadrados", area);

    printf("\nFim do programa");
    return 0;
}
