#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    if (prestacao > 0.2 * salario) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}