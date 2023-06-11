#include <stdio.h>

struct Pessoa {
    char nome[100];
    char endereco[100];
    char telefone[20];
};

int main() {
    struct Pessoa pessoas[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Endereço: ");
        scanf("%s", pessoas[i].endereco);

        printf("Telefone: ");
        scanf("%s", pessoas[i].telefone);

        printf("\n");
    }

    printf("Dados das pessoas cadastradas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}