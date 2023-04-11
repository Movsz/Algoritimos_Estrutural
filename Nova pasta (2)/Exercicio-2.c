#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("Números naturais de 0 até %d em ordem decrescente:\n", n);
    for(int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
