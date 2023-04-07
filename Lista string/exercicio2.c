#include <stdio.h>
#include <string.h>

int main() {
    char cor[10]; // cria uma string para armazenar a cor
    printf("Digite uma cor (branco, verde ou amarelo): ");
    scanf("%s", cor); // lê a entrada do usuário e armazena na string
    
    // compara a string com as cores permitidas
    if (strcmp(cor, "branco") == 0 || strcmp(cor, "verde") == 0 || strcmp(cor, "amarelo") == 0) {
        printf("Cor valida!\n");
    } else {
        printf("Cor invalida!\n");
    }
    
    return 0;
}