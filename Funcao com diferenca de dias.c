#include <stdio.h>

void diferenca(int dia, int mes, int *dias)
{
int i;
    int meses[12];
    meses[0]=31;
    meses[1]=28;
    meses[2]=31;
    meses[3]=30;
    meses[4]=31;
    meses[5]=30;
    meses[6]=31;
    meses[7]=30;
    meses[8]=31;
    meses[9]=30;
    meses[10]=31;
    meses[11]=30;

    *dias=0;
    for(i=0; i<mes-1; i++)
    {
        *dias = *dias+meses[i];
    }
    *dias = *dias + dia;
}

int main()
{
    int dia1, mes1, dia2, mes2, dias1, dias2;
    int diferenca1, diferenca2;

    printf("Digite o primeiro dia: ");
    scanf("%d", &dia1);

    printf("\nInforme o primeiro mes: ");
    scanf("%d", &mes1);

    printf("\nInforme o segundo dia: ");
    scanf("%d", &dia2);

    printf("\nInforme o segundo mes: ");
    scanf("%d", &mes2);

    diferenca(dia1,mes1,&dias1);

    printf("\nAs diferencas sao: ");
    printf("\n%d para %02d/%02d", dias1, dia1,mes1);

    diferenca(dia2,mes2,&dias2);
    printf("\n%d para %02d/%02d", dias2, dia2, mes2);

    return 0;
}
