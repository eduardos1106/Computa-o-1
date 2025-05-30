#include <stdio.h>
#include <stdlib.h>
#define N 50

void contaVogais(char string[],int *a,int *e,int *i,int *o,int *u)
{
    int a1=0,e1=0,i1=0,o1=0,u1=0;
    for (int j=0; string[j]!='\0'; j++)
    {
        if (string[j]=='a')
        {
            a1++;
        }
        else if (string[j]=='e')
        {
            e1++;
        }
        else if (string[j]=='i')
        {
            i1++;
        }
        else if(string[j]=='o')
        {
            o1++;
        }
        else if(string[j]=='u')
        {
            u1++;
        }
    }
    *a=a1;
    *e=e1;
    *i=i1;
    *o=o1;
    *u=u1;
}

void imprimeVogais (a,e,i,o,u)
{
    char A[N],E[N],I[N],O[N],U[N];

    for (int i=0; i<a; i++)
    {
        A[i]='*';
    }
    A[a]='\0';
    for (int i=0; i<e; i++)
    {
        E[i]='*';
    }
    E[e]='\0';

    for (int j=0; j<i; j++)
    {
        I[j]='*';
    }
    I[i]='\0';

    for (int i=0; i<o; i++)
    {
        O[i]='*';
    }
    O[o]='\0';

    for (int i=0; i<u; i++)
    {
        U[i]='*';
    }
    U[u]='\0';

    printf("\na: %s (%d)", A, a);
    printf("\ne: %s (%d)", E, e);
    printf("\ni: %s (%d)", I, i);
    printf("\no: %s (%d)", O, o);
    printf("\nu: %s (%d)", U, u);
}

int main()
{
    char string[N];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Digite uma string para verificar quantas vogais ela possui: ");
    fgets(string, "%s", stdin);

    contaVogais(string,&a,&e,&i,&o,&u);
    imprimeVogais(a,e,i,o,u);

    printf("\nFim do programa");
    return 0;
}
