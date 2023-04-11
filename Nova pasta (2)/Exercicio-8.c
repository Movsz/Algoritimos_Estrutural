#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    double media = (double) soma / 10;

    printf("A média dos números é %.2lf\n", media);

    return 0;
}