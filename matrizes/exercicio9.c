#include <stdio.h>
#define VN 10
#define N 5
#define M 10
#define VA 5

//falta transfomar os numeros em letras mas eu nao sei

void preencheRes (int m[N][M], int l, int c)
{
    int resposta;
    printf("Quando i=1, aluno 1 registre suas respostas, e assim sucessivamente: ");
    for(int i=0; i<l; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("\n(%d) Reposta questao %d: ", i+1,j+1);
            scanf("%d", &resposta);
            m[i][j] = resposta;
        }
    }
}

void imprime (int m[N][M], int l, int c)
{
    for(int i=0; i<l; i++)
    {
        printf("\n");
        for (int j=0; j<c; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

void compara(int vrespostas[], int m[N][M], int l, int c, int vpontua[])
{
    int soma1=0, soma2=0, soma3=0, soma4=0, soma5=0;

    for (int j=0; j<c; j++)
    {
        if (m[0][j]==vrespostas[j])
        {
            soma1+=1;
        }
    }
    vpontua[0]= soma1;

    for (int j=0;j<c;j++){
        if (m[1][j]==vrespostas[j]){
            soma2+=1;
        }
    }
     vpontua[1]=soma2;

     for (int j=0;j<c;j++){
        if (m[2][j]==vrespostas[j]){
            soma3+=1;
        }
    }
     vpontua[2]=soma3;

     for (int j=0;j<c;j++){
        if (m[3][j]==vrespostas[j]){
            soma4+=1;
        }
    }
     vpontua[3]=soma4;

     for (int j=0;j<c;j++){
        if (m[4][j]==vrespostas[j]){
            soma5+=1;
        }
    }
     vpontua[4]=soma5;
}

int main()
{
    int vpontua[2];
    int a=1, b=2, c=3, d=4;
    int vrespostas[VN] = {a,b,d,c,a,a,b,c,b,d};
    int m[N][M];

    preencheRes(m,N,M);
    printf("\nImprimindo matriz de respostas dos alunos: ");
    imprime(m,N,M);
    compara(vrespostas, m, N, M, vpontua);

    printf("\n");

    for (int i=0;i<VA;i++){
        printf("\nA pontuacao do aluno %d foi: %d", i+1, vpontua[i]);
    }

    printf("\nFIM DO PROGRAMA");
    return 0;
}
