#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 101

int main() {
    char nomes[N];
    char tentativa[N];
    char nome1[N], nome2[N], nome3[N];


    printf("Digite tres nomes: ");
    fgets(nomes, N, stdin);


    printf("\nDigite apenas um nome: ");
    fgets(tentativa, N, stdin);


    nomes[strcspn(nomes, "\n")] = '\0';
    tentativa[strcspn(tentativa, "\n")] = '\0';

    int i = 0, j = 0;

//define nom1
    while (nomes[i] != '\0') {
        if (nomes[i] != ' ') {
            nome1[j++] = nomes[i];
        } else if (j > 0) {
            nome1[j] = '\0';
            break;
        }
        i++;
    }

    // define nome2
    while (nomes[i] != '\0') {
        if (nomes[i] != ' ') {
            nome2[j++] = nomes[i];
        } else if (j > 0) {
            nome2[j] = '\0';
            break;
        }
        i++;
    }

    // define nome3
    while (nomes[i] != '\0') {
        if (nomes[i] != ' ') {
            nome3[j++] = nomes[i];
        } else if (j > 0) {
            nome3[j] = '\0';
            break;
        }
        i++;
    }

    tentativa[strcspn(tentativa, "\n")] = '\0';

    while ((strcmp(nome1, tentativa) != 0) && (strcmp(nome2, tentativa) != 0) && (strcmp(nome3, tentativa) != 0)) {
        printf("Errado! Digite outro nome para advinhar: ");
        fgets(tentativa, N, stdin);
        tentativa[strcspn(tentativa, "\n")] = '\0';
    }

    printf("A tentativa está contida entre os nomes!\n");
    printf("\nFim do programa\n");

    return 0;
}
