#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("O número ao quadrado é: %.2f\n", pow(num, 2));
        printf("A raiz quadrada do número é: %.2f\n", sqrt(num));
    } else {
        printf("O número digitado não é positivo.\n");
    }

    return 0;
}