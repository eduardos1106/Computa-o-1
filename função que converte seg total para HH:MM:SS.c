#include <stdio.h>

void converte(int segtotal, int *horas, int *min, int *seg)
{

    if (segtotal>=3600)
    {
        *horas = segtotal/3600;
        segtotal = segtotal - *horas*3600;
        if (segtotal==0){
            *min==0;
        *seg==0;
        }
        *min = segtotal/60;
        *seg = segtotal - *min*60;
    }
    else
    {
        *horas=0;
        *min = segtotal/60;
        if(segtotal==0){
            *seg==0;
        }
        *seg = segtotal - *min*60;
    }
}

int main()
{
    int segtotal;
    int seg;
    int min, horas;

    printf("Digite a quantidade total de segundos para converter: ");
    scanf("%d", &segtotal);

    converte(segtotal, &horas, &min, &seg);
    printf("\nA quantidade de segundos: %d, convertida eh: %02d:%02d:%02d", segtotal, horas, min, seg);
    return 0;
}
