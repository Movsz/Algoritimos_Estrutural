#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], email[100], endereco[100];
    char nomeBackup[100], emailBackup[100], enderecoBackup[100];

    printf("Digite o nome completo do usuario: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove a quebra de linha no final do nome

    printf("Digite o e-mail do usuario: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0'; // remove a quebra de linha no final do e-mail

    printf("Digite o endereco do usuario: ");
    fgets(endereco, 100, stdin);
    endereco[strcspn(endereco, "\n")] = '\0'; // remove a quebra de linha no final do endereco

    // faz um backup dos dados
    strcpy(nomeBackup, nome);
    strcpy(emailBackup, email);
    strcpy(enderecoBackup, endereco);

    // imprime os dados e o backup
    printf("\nDados do usuario:\n");
    printf("Nome: %s\n", nome);
    printf("Email: %s\n", email);
    printf("Endereco: %s\n", endereco);

    printf("\nBackup dos dados:\n");
    printf("Nome: %s\n", nomeBackup);
    printf("Email: %s\n", emailBackup);
    printf("Endereco: %s\n", enderecoBackup);

    return 0;
}