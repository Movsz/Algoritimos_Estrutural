#include <stdio.h>

int main() {
    int a, b, prod;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    prod = a * b;

    printf("PROD = %d\n", prod);

    return 0;
}