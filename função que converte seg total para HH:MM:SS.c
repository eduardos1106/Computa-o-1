#include <stdio.h>
#include <locale.h>

void converte(int segtotal,int *horas, int *min, int *seg)
{
    *horas = segtotal/3600;
    segtotal = segtotal - *horas*3600;
    *min = segtotal/60;
    *seg = segtotal - *min*60;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int segtotal, horas, min, seg;

    printf("Insera o total de segundos para converter: ");
    scanf("%d", &segtotal);

    converte(segtotal,&horas,&min,&seg);
    printf("%d segundos convertido é: %02d:%02d:%02d", segtotal, horas, min,seg);
    return 0;
}
