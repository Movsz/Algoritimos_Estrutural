#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char gender[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    double height;
    bool vaccinated;
} User;

// Vetor para armazenar os dados dos usuários
User users[MAX_USERS];

// Número atual de usuários cadastrados
int numUsers = 0;

// Função para gerar um ID aleatório
int generateId() {
    return rand() % 1000 + 1;
}

// Função para verificar se um email é válido
bool isValidEmail(const char* email) {
    return strchr(email, '@') != NULL;
}

// Função para verificar se o sexo é válido
bool isValidGender(const char* gender) {
    return strcmp(gender, "Feminino") == 0 || strcmp(gender, "Masculino") == 0 || strcmp(gender, "Indiferente") == 0;
}

// Função para verificar se a altura é válida
bool isValidHeight(double height) {
    return height >= 1.0 && height <= 2.0;
}

// Função para imprimir os dados de um usuário
void printUser(const User* user) {
    printf("ID: %d\n", user->id);
    printf("Nome: %s\n", user->name);
    printf("Email: %s\n", user->email);
    printf("Sexo: %s\n", user->gender);
    printf("Endereco: %s\n", user->address);
    printf("Altura: %.2lf\n", user->height);
    printf("Vacina: %s\n", user->vaccinated ? "Sim" : "Nao");
    printf("\n");
}

// Função para incluir um novo usuário
void addUser() {
    if (numUsers == MAX_USERS) {
        printf("Numero maximo de usuarios atingido.\n\n");
        return;
    }

    User* user = &users[numUsers];
    user->id = generateId();

    printf("Digite o nome completo: ");
    fgets(user->name, sizeof(user->name), stdin);
    user->name[strcspn(user->name, "\n")] = '\0';

    printf("Digite o email: ");
    fgets(user->email, sizeof(user->email), stdin);
    user->email[strcspn(user->email, "\n")] = '\0';

    while (!isValidEmail(user->email)) {
        printf("Email invalido. Digite novamente: ");
        fgets(user->email, sizeof(user->email), stdin);
        user->email[strcspn(user->email, "\n")] = '\0';
    }

    printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
    fgets(user->gender, sizeof(user->gender), stdin);
    user->gender[strcspn(user->gender, "\n")] = '\0';

    while (!isValidGender(user->gender)) {
        printf("Sexo invalido. Digite novamente: ");
        fgets(user->gender, sizeof(user->gender), stdin);
        user->gender[strcspn(user->gender, "\n")] = '\0';
    }

    printf("Digite o endereco: ");
    fgets(user->address, sizeof(user->address), stdin);
    user->address[strcspn(user->address, "\n")] = '\0';

    printf("Digite a altura (em metros): ");
    scanf("%lf", &user->height);

    while (!isValidHeight(user->height)) {
        printf("Altura invalida. Digite novamente: ");
        scanf("%lf", &user->height);
    }

    printf("O usuario foi vacinado? (1-Sim, 0-Nao): ");
    scanf("%d", &user->vaccinated);

    numUsers++;

    printf("\nUsuario cadastrado com sucesso.\n\n");
}

// Função principal
int main() {
    srand(time(NULL));

    int option;

    do {
        printf("1 - Adicionar usuario\n");
        printf("2 - Listar usuarios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addUser();
                break;
            case 2:
                printf("\n--- Usuarios cadastrados ---\n\n");
                for (int i = 0; i < numUsers; i++) {
                    printUser(&users[i]);
                }
                break;
            case 0:
                printf("\nEncerrando o programa.\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n\n");
                break;
        }
    } while (option != 0);

    return 0;
}
