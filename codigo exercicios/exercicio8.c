#include <stdio.h>

int main() {
    float valor;
    char estado;
    float preco_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o estado de destino (A, B, C ou D): ");
    scanf(" %c", &estado);

    switch (estado) {
        case 'A':
            preco_final = valor * 1.10; // acréscimo de 10% de imposto
            break;
        case 'B':
            preco_final = valor * 1.15; // acréscimo de 15% de imposto
            break;
        case 'C':
            preco_final = valor * 1.20; // acréscimo de 20% de imposto
            break;
        case 'D':
            preco_final = valor * 1.25; // acréscimo de 25% de imposto
            break;
        default:
            printf("Estado de destino inválido!\n");
            return 1;
    }

    printf("Preço final do produto: R$ %.2f\n", preco_final);

    return 0;
}