#include <stdio.h>
#include <string.h>
#define N 101

void contaVogais(char palavra[N],int tam)
{
    int j;
    int acontador=0, econtador=0, icontador=0, ucontador=0, ocontador=0;

    for (j=0; palavra[j]!='\0'; j++)
    {
        if (palavra[j]=='a')
        {
            acontador++;
        }
        else if (palavra[j]=='e')
        {
            econtador++;
        }
        else if(palavra[j]=='i')
        {
            icontador++;
        }
        else if (palavra[j]=='u')
        {
            ucontador++;
        }
        else if (palavra[j]=='o')
        {
            ocontador++;
        }
    }
    palavra[j]='\0';

    printf("\nA palavra %s tem %d letras 'a'",palavra, acontador);
    printf("\nA palavra %s tem %d letras 'e'",palavra, econtador);
    printf("\nA palavra %s tem %d letras 'i'",palavra, icontador);
    printf("\nA palavra %s tem %d letras 'o'",palavra, ocontador);
    printf("\nA palavra %s tem %d letras 'u'",palavra, ucontador);
}



int main()
{
    char palavra[N];

    printf("Digite uma palavra para contar suas vogais: ");
    fgets(palavra, N, stdin);


    contaVogais(palavra,N);


    return 0;
}
