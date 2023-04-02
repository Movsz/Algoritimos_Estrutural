#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equacao do segundo grau (ax^2 + bx + c):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Nao existe raiz real.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz unica: %f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raizes: %f e %f\n", x1, x2);
        }
    }

    return 0;
}