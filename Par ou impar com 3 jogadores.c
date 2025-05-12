#include <stdio.h>

int retornaResto(int alexandre, int maria, int rafael)
{
    return (alexandre+maria+rafael)%3;
}

void vencedor(int resto){

if (resto==0){
    printf("\nO vencedor eh o Alexandre!");
}
else if (resto==1){
    printf("\nO vencedor eh a Maria!");
}
else if (resto==2){
    printf("\nE o vencedor eh o Rafael!");
}
}

int main()
{
    int n1,n2,n3,resto;

    printf("Alexandre, digite o seu numero: ");
    scanf("%d",&n1);
    printf("\nMaria, digite o seu numero: ");
    scanf("%d", &n2);
    printf("\nRafa, digite o seu numero: ");
    scanf("%d", &n3);
    resto = retornaResto(n1,n2,n3);

    printf("\nO resto da soma dos tres numeros eh: %d", retornaResto(n1,n2,n3));
    vencedor(resto);

    return 0;
}
