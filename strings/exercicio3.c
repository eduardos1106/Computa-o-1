#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void muda(char f[])
{
    int i = 0, j = 0;
    while (f[i] != '\0')
    {
        if (f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o' || f[i] == 'u')
        {
            f[j++] = f[i];
        }
        i++;
    }
    f[j] = '\0';
}

void junta (char f1[], char f2[])
{
    printf("%s", strcat(f1,f2));
}

int main()
{
    char f1[N];
    char f2[N];

    printf("Digite o seu nome: ");
    fgets(f1, "%s", stdin);

    printf("\nDigite o bairro onde voce mora: ");
    fgets(f2, "%s", stdin);

    printf("\n%s", f1);
    printf("\n%s", f2);

    muda(f1);
    printf("\n%s", f1);

    muda(f2);
    printf("\n%s", f2);

    printf("\nSua senha eh: ");
    junta(f1,f2);
    return 0;
}
