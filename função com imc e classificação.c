#include <stdio.h>

int calcImc (float peso, float alt)
{
    return peso/(alt*alt);
}

void classif(int imcdado)
{

    if (imcdado>30)
    {
        printf("\nVocê é gordo obeso");
    }

    else if (imcdado>=25)
    {
        printf("\nVocê está acima do peso");
    }

    else if (imcdado>=18.5)
    {
        printf("\nVocê está com o peso normal");
    }

    else
    {
        printf("Você está abaixo do peso");
    }

}
int main()
{
    float peso, alt;
    int imc;

    printf("Digite seu peso e sua altura respectivamente: ");
    scanf("%f %f", &peso, &alt);
    imc=calcImc(peso, alt);
    printf("\nSeu imc eh: %d", calcImc(peso,alt));
    classif(imc);

    return 0;
}
