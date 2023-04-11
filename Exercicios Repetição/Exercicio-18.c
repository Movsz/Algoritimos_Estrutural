#include <stdio.h>
#include <math.h>

int eh_primo(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &n);
    if (eh_primo(n)) {
        printf("%d é primo\n", n);
    } else {
        printf("%d não é primo\n", n);
    }
    return 0;
}