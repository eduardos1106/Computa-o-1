#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media;
    int freq;

    printf("Digite três notas separadas por espaço: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("\nDigite sua frequência como um número inteiro: ");
    scanf("%d", &freq);

    media = (n1+n2+n3)/3;

    if (media>8&&freq>75)
    {
        printf("O estudante foi 'Aprovado com distinção' pois teve media: %f, e frequência: %d%%", media, freq);
    }

    else if (media>=6&&freq>75)
    {
        printf("O estudante foi 'Aprovado direto' pois teve media: %f, e frequência: %d%%", media, freq);
    }

    else if(media<4 || freq<50)
    {
        printf("O estudante foi 'Reprovado' pois teve media: %f, e frequência %d%%", media, freq);
    }

    else if (media>=4&&media<6&&freq>75 || media>=6&freq<75 || media>=4&&freq>=50&&freq<75)
    {
        printf("O estudante 'Vai para final' pois teve media: %f, e frequência %d%%", media, freq);
    }

    printf("\nAdeus!");
    return 0;
}

