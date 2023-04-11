#include <stdio.h>

int main() {
    int num, maior, menor;
    
    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &num);
    
    maior = menor = num;
    
    while(num >= 0) {
        if(num > maior) {
            maior = num;
        } else if(num < menor) {
            menor = num;
        }
        
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &num);
    }
    
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
    
    return 0;
}