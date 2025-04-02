#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media;
    printf("Digite três notas separadas por espaço: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1+n2+n3)/3;

    if (media>=8)
    {
        printf("Aprovado com Distinção");
    }
    else if (media>=6)
    {
        printf("Aprovado direto");
    }
    else if (media>=4)
    {
        printf("Vai para final");
    }
    else
    {
        printf("Reprovado direto");
    }
    return 0;
}

