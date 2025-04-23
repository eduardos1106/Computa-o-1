#include <stdio.h>

int main()
{

    int taxa=7;
    float c, valor3, valorcerto3;
    float valor4, valorcerto4, valorcertofinal;

    printf("Digite o seu consumo mensal de agua (em mł): ");
    scanf("%f", &c);

    valor3 = c - 30;
    valorcerto3 = c - valor3;

    valor4 = c-100;
    valorcerto4 = (c - valor4) - 30;
    valorcertofinal = (100 - valorcerto4)-10;

    if ((c==0)||(c<=10))
    {
        printf("Sua conta de agua eh: $%d", taxa);
    }
    else if (c>10&&c<=30)
    {
        printf("Sua conta de agua eh: $%.1f", taxa + c);
    }
    else if (c>30&&c<=100)
    {
        printf("Sua conta de agua eh: $%.1f", taxa + valor3*2 + valorcerto3);
    }
    else
    {
        printf("Sua conta de agua eh: $%.1f", taxa + valor4*5 +valorcerto4*2 + valorcertofinal);
    }
    printf("\nFim do codigo");
    return 0;
}
