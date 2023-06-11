#include <stdio.h>

struct Vetor {
    int a;
    int b;
    int c;
};

int main() {
    struct Vetor vetor1, vetor2, resultado;

    printf("Digite os elementos do vetor 1:\n");
    printf("a: ");
    scanf("%d", &vetor1.a);
    printf("b: ");
    scanf("%d", &vetor1.b);
    printf("c: ");
    scanf("%d", &vetor1.c);

    printf("Digite os elementos do vetor 2:\n");
    printf("a: ");
    scanf("%d", &vetor2.a);
    printf("b: ");
    scanf("%d", &vetor2.b);
    printf("c: ");
    scanf("%d", &vetor2.c);

    resultado.a = vetor1.a + vetor2.a;
    resultado.b = vetor1.b + vetor2.b;
    resultado.c = vetor1.c + vetor2.c;

    printf("Resultado da soma: <%d, %d, %d>\n", resultado.a, resultado.b, resultado.c);

    return 0;
}