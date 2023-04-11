#include <stdio.h>

int main() {
    int i, num = 0, soma = 0;

    for (i = 1; i <= 50; i++) {
        num += 2; // incrementa o número par em cada iteração
        soma += num; // soma o número par na variável de soma
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}