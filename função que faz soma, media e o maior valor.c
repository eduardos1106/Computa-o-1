#include <stdio.h>

void somaMediaMaior (int n, float *media, float *maior, float *soma){

float nota;
int i=1;

 while(i<=n){

        printf("Digite a nota numero %d: ", i);
        scanf("%f", &nota);
        *media = *media + nota;

        if (nota>*maior){
            *maior=nota;
        }
        i++;
    }
    *soma=*media;
    *media=*media/n;
}

int main(){
    int n;
    int i=2;
    float nota;
    float soma=0;
    float maior=0;
    float media=0;

    printf("Digite quantas notas voce deseja fazer a media: ");
    scanf("%d", &n);
    somaMediaMaior(n, &media, &maior, &soma);
    printf("\nA soma eh %.2f. A media eh %.2f. E o maior valor foi %.2f", soma, media, maior);
    printf("\nDeu certo amem jesus");
    return 0;
}
