#include <stdio.h>

int main() {
    int n, count = 0;
    double sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Valor ignorado.\n");
            continue;
        }

        sum += n;
        count++;
    }

    if (count == 0) {
        printf("Nenhum valor positivo foi digitado.\n");
    } else {
        double media = sum / count;
        printf("Média dos valores positivos digitados: %.2lf\n", media);
    }

    return 0;
}