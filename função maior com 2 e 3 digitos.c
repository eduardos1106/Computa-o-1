#include <stdio.h>

int maior(int n, int a)
{

    if (n>a)
    {
        return n;
    }

    else if (a>n)
    {
        return a;
    }

    else
    {
        return 0;
    }
}


int main()
{
    int n,a,b;

    printf("Digite dois numeros e vamos vereficar qual eh o maior: ");
    scanf("%d %d", &n, &a);

    if (maior(n,a)!=0)
    {
        printf("\nO maior eh: %d", maior(n,a));
    }
    else
    {
        printf("\nOs numeros sao iguais!");
    }

    printf("\nDigite tres numeros e vamos ver qual eh o maior: ");
    scanf("%d %d %d", &n,&a,&b);

    if (maior(n,a)>maior(a,b)){
        printf("\nO maior eh: %d", n);
    }
    else if (maior(n,a)>maior(n,b)){
        printf("\nO maior eh: %d", a);
    }
    else if (maior(n,b)>maior(a,n)){
        printf("\n O maior eh: %d", b);
    }
    else if(maior(n,a)==0&&maior(a,b)==0){
        printf("\nOs numeros sao iguais!");
    }

    return 0;
}
