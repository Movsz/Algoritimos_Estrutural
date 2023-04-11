#include <stdio.h>

int main() {
    int valores[10]; // vetor para armazenar os 10 valores
    int soma = 0; // variável para armazenar a soma dos valores
    
    printf("Digite 10 valores:\n");
    
    // leitura dos valores e soma
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    
    printf("A soma dos valores digitados é: %d\n", soma);
    
    return 0;
}