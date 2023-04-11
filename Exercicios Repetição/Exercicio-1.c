#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros naturais de 0 ate %d:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}