#include <stdio.h>
#include <math.h>

int bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = (b*b) - 4*a*c;

    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = (-b - sqrt(delta))/2*a;
}

int main()
{
    float a,b,c,x1,x2;
    float delta;

    printf("Digite os valores da equação do segundo grau, a,b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    bhaskara(a,b,c,&x1,&x2);
    delta = (b*b) - 4*a*c;

    if (delta>0)
    {
        return printf("\nA equação tem duas raízes diferentes! x1= %.2f, x2= %.2f", x1, x2);
    }
    else if (delta=0)
    {
        return printf("\nA equação tem duas raízes iguais! x1 e x2= %.2f", x1);
    }
    else
    {
        return printf("\nA equação nao possui raizes reais!");
    }

    return 0;
}
