#include <stdio.h>

int main() {
    int i, num, menor, maior;

    // Lê o primeiro número
    printf("Digite um número: ");
    scanf("%d", &num);

    // Define o menor e o maior valor como o primeiro número lido
    menor = num;
    maior = num;

    // Lê os próximos 9 números e atualiza o menor e o maior valor, se necessário
    for (i = 1; i < 10; i++) {
        printf("Digite outro número: ");
        scanf("%d", &num);
        
        if (num < menor) {
            menor = num;
        }
        
        if (num > maior) {
            maior = num;
        }
    }

    // Imprime o menor e o maior valor lido
    printf("O menor número lido é: %d\n", menor);
    printf("O maior número lido é: %d\n", maior);

    return 0;
}