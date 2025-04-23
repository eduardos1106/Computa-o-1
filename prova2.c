#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dist;
    int min, seg;
    int media1, media2;

    printf("Digite a distância percorrida (em um número inteiro) : ");
    scanf("%d", &dist);
    printf("\nDigite em quantos minutos foi o percurso (em um número inteiro): ");
    scanf("%d", &min);
    printf("\nDigite em quantos segundos foi o percurso (em um número inteiro): ");
    scanf("%d", &seg);

    media1 = min/dist;

    if(min%10!=0)
    {
        seg = seg + (min%10)*60;
    }

    media2 = seg/dist;

    printf("\nA velocidade média em minutos por quilômetro é: %d", media1);
    printf("\nA velocidade média em segundos por quilômetro é: %d", media2);

    printf("\nFim do programa");

    return 0;
}
