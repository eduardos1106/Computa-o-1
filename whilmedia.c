#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, a=1;
    float n1, n2, n3, media;

    printf("Digite a quantidade de alunos que você tem que calcular as notas: ");
    scanf("%d", &i);

    while (a<=i)
    {

        printf("\nDigite três notas separadas por espaço: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        media =s (n1*2+n2*3+n3*5)/10;
        printf("\nA média é: %.2f", media);

        a++;
    }

    printf("\nFim do while");
    return 0;
}
