#include <stdio.h>

int main() {
    float altura, peso;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso da pessoa (em quilogramas): ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso < 60) {
            printf("Classificação: I\n");
        } else if (peso >= 60 && peso <= 90) {
            printf("Classificação: H\n");
        } else {
            printf("Classificação: G\n");
        }
    } else if (altura >= 1.20 && altura <= 1.70) {
        if (peso < 60) {
            printf("Classificação: F\n");
        } else if (peso >= 60 && peso <= 90) {
            printf("Classificação: E\n");
        } else {
            printf("Classificação: D\n");
        }
    } else {
        if (peso < 60) {
            printf("Classificação: C\n");
        } else if (peso >= 60 && peso <= 90) {
            printf("Classificação: B\n");
        } else {
            printf("Classificação: A\n");
        }
    }

    return 0;
}