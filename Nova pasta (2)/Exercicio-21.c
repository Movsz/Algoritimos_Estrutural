#include <stdio.h>

struct habitante {
    char sexo;
    char cor_olhos;
    char cor_cabelos;
    int idade;
};

int main() {
    int n; // número de habitantes a serem coletados
    printf("Digite o número de habitantes a serem coletados: ");
    scanf("%d", &n);

    struct habitante populacao[n]; // criação de um vetor de estruturas habitante

    // Loop para coleta de informações
    for (int i = 0; i < n; i++) {
        printf("Digite as informações do habitante %d:\n", i+1);

        printf("Sexo (m ou f): ");
        scanf(" %c", &populacao[i].sexo);

        printf("Cor dos olhos (a, v, c ou p): ");
        scanf(" %c", &populacao[i].cor_olhos);

        printf("Cor dos cabelos (l, c, p ou r): ");
        scanf(" %c", &populacao[i].cor_cabelos);

        printf("Idade em anos: ");
        scanf("%d", &populacao[i].idade);

        printf("\n");
    }

    // Apresentação das informações coletadas
    printf("Informações coletadas:\n");
    for (int i = 0; i < n; i++) {
        printf("Habitante %d:\n", i+1);
        printf("Sexo: %c\n", populacao[i].sexo);
        printf("Cor dos olhos: %c\n", populacao[i].cor_olhos);
        printf("Cor dos cabelos: %c\n", populacao[i].cor_cabelos);
        printf("Idade: %d\n", populacao[i].idade);
        printf("\n");
    }

    return 0;
}
