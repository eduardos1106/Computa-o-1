#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hora, min;
    float seg;

    printf("Digite hora, minuto e segundo entre espaços: ");
    scanf("%d %d %f", &hora, &min, &seg);

//se hora maior que 1 e minuto maior que 15
    if (hora>1, min>15)
    {
        printf("Quantidade total de segundos: %f segundos",((hora*3600)+(min*60)+seg));//tranformar tudo em segundos
    }
    else
    {
        printf("Quantidade total de minutos: %f minutos", ((hora*60)+(min)+(seg/60)));//transformar tudo em minutos
    }

    printf("\nHorário: %02d:%02d:%02d", hora,min,(int)seg);//modelagem da variavel seg de float para int para aparecer com a grafia correta no printf(horario)
    printf("\nTchau!");

    return 0;
}
