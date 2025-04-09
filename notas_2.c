#include <stdio.h>//colocar no code blocks para formatar certo
int main ()
{

    float n1, n2, n3, media;
    int freq;//calcular a media e decidir se passa ou não considerando a frequência

    printf("Digite três notas separadas por espaço:");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("\nDigite sua frequência entre 0 e 100 (como numero inteiro):");
    scanf("%d", &freq);

    media = (n1+n2+n3)/3;

    if (media>8 && freq>75)
    {
        printf("Aprovado com distinção!");
    }

    else if (media>=6&&freq>75)
    {
        printf("Aprovado direto");

    }
    else if (media<4 || media<=10&&freq<=50)
    {
        printf("Reprovado direto");
    }

    else if (media<=4 && media<6 && freq<75 || media>=6 && freq<75 || media>=4 && freq<75)
    {
        printf("Vai para final");
    }
    printf("\nAdeus!");
    return 0;
}
