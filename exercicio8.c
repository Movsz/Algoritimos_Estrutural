#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    printf("Digite os valores de A, B, C e D, separados por espaço: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}