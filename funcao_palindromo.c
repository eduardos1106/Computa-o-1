#include <stdio.h>
#include <locale.h>

void removeExtremos(int *n, int *pri, int *ult)
{
    int numfunction,pot;
    *ult = *n % 10; //definido o ultimo digito

    pot=1;
    numfunction = *n;

    while(numfunction >= 10)//diminui o numero ate o ultimo digito
    {
        numfunction = numfunction/10;
        pot *= 10;
    }
    *pri = *n / pot;//extrai o ultimo digito dividino por 10 elevado na quantidade de vezes que ocorreu o while

    *n = *n % pot;
    *n = *n / 10;//nao sei pra que serve isso, mas vou deixar
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, pri, ult;

    printf("Digite o número para vereficar se ele é palíndromo (não contendo 0): ");
    scanf("%d", &n);

    removeExtremos(&n,&pri,&ult);
    printf("O primeiro digito é: %d. O ultimo digito é: %d", pri, ult);

    if (pri==ult){
        printf("\nO número é palíndromo!");
    }
    else{
        printf("\nO número não é palíndromo!");
    }
    return 0;
}
