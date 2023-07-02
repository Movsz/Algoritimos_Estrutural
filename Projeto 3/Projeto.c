#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

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

// Ponteiro para armazenar os dados dos usuários
User* users = NULL;

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
    User newUser;
    newUser.id = generateId();

    printf("Digite o nome completo: ");
    fgets(newUser.name, sizeof(newUser.name), stdin);
    newUser.name[strcspn(newUser.name, "\n")] = '\0';

    printf("Digite o email: ");
    fgets(newUser.email, sizeof(newUser.email), stdin);
    newUser.email[strcspn(newUser.email, "\n")] = '\0';

    while (!isValidEmail(newUser.email)) {
        printf("Email invalido. Digite novamente: ");
        fgets(newUser.email, sizeof(newUser.email), stdin);
        newUser.email[strcspn(newUser.email, "\n")] = '\0';
    }

    printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
    fgets(newUser.gender, sizeof(newUser.gender), stdin);
    newUser.gender[strcspn(newUser.gender, "\n")] = '\0';

    while (!isValidGender(newUser.gender)) {
        printf("Sexo invalido. Digite novamente: ");
        fgets(newUser.gender, sizeof(newUser.gender), stdin);
        newUser.gender[strcspn(newUser.gender, "\n")] = '\0';
    }

    printf("Digite o endereco: ");
    fgets(newUser.address, sizeof(newUser.address), stdin);
    newUser.address[strcspn(newUser.address, "\n")] = '\0';

    printf("Digite a altura (em metros): ");
    scanf("%lf", &newUser.height);

    while (!isValidHeight(newUser.height)) {
        printf("Altura invalida. Digite novamente: ");
        scanf("%lf", &newUser.height);
    }

    printf("O usuario foi vacinado? (1-Sim, 0-Nao): ");
    scanf("%d", &newUser.vaccinated);

    // Alocar memória para um novo usuário
    users = realloc(users, (numUsers + 1) * sizeof(User));

    // Verificar se a alocação de memória foi bem-sucedida
    if (users == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    // Adicionar o novo usuário à lista
    users[numUsers] = newUser;
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

    // Liberar a memória alocada antes de sair do programa
    free(users);

    return 0;
}

//comentario do chat gpt:o ponteiro users é inicialmente definido como NULL. À medida que novos usuários são adicionados, a função addUser() realoca a memória para acomodar o novo usuário, usando realloc(). No final do programa, antes de sair, a memória alocada é liberada usando free(users)