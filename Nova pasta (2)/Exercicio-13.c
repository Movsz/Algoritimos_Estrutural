#include <stdio.h>

int main() {
    int n, i, termo1 = 0, termo2 = 1, proximo_termo;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d\n", termo1);
    }
    else if (n == 1) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d\n", termo2);
    }
    else {
        for (i = 2; i <= n; i++) {
            proximo_termo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximo_termo;
        }

        printf("O enesimo termo da sequencia de Fibonacci e: %d\n", termo2);
    }

    return 0;
}