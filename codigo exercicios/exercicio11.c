#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, opcao;
    float media;

    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Digite a opção da média que deseja calcular:\n");
    printf("1 - Geometria\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmônica\n");
    printf("4 - Aritmética\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = pow(x*y*z, 1.0/3);
            printf("Média Geométrica: %.2f\n", media);
            break;
        case 2:
            media = (x + 2*y + 3*z) / 6.0;
            printf("Média Ponderada: %.2f\n", media);
            break;
        case 3:
            media = 3.0 / ((1.0/x) + (1.0/y) + (1.0/z));
            printf("Média Harmônica: %.2f\n", media);
            break;
        case 4:
            media = (x + y + z) / 3.0;
            printf("Média Aritmética: %.2f\n", media);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}