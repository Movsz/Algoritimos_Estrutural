#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    printf("Digite o nome completo do cliente: ");
    fgets(nome, 100, stdin);
    int tamanho = strlen(nome) - 1;
    printf("O nome completo do cliente tem %d caracteres.\n", tamanho);
    return 0;
}