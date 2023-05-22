#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

// Vetores para armazenar os dados dos usuários
int userIds[MAX_USERS];
char userNames[MAX_USERS][MAX_NAME_LENGTH];
char userEmails[MAX_USERS][MAX_EMAIL_LENGTH];
char userGenders[MAX_USERS][MAX_NAME_LENGTH];
char userAddresses[MAX_USERS][MAX_ADDRESS_LENGTH];
double userHeights[MAX_USERS];
int userVaccinated[MAX_USERS];

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
void printUser(int index) {
    printf("ID: %d\n", userIds[index]);
    printf("Nome: %s\n", userNames[index]);
    printf("Email: %s\n", userEmails[index]);
    printf("Sexo: %s\n", userGenders[index]);
    printf("Endereco: %s\n", userAddresses[index]);
    printf("Altura: %.2lf\n", userHeights[index]);
    printf("Vacina: %s\n", userVaccinated[index] ? "Sim" : "Nao");
    printf("\n");
}

// Função para incluir um novo usuário
void addUser() {
    if (numUsers == MAX_USERS) {
        printf("Numero maximo de usuarios atingido.\n\n");
        return;
    }

    userIds[numUsers] = generateId();

    printf("Digite o nome completo: ");
    fgets(userNames[numUsers], sizeof(userNames[numUsers]), stdin);
    userNames[numUsers][strcspn(userNames[numUsers], "\n")] = '\0';

    printf("Digite o email: ");
    fgets(userEmails[numUsers], sizeof(userEmails[numUsers]), stdin);
    userEmails[numUsers][strcspn(userEmails[numUsers], "\n")] = '\0';

    while (!isValidEmail(userEmails[numUsers])) {
        printf("Email invalido. Digite novamente: ");
        fgets(userEmails[numUsers], sizeof(userEmails[numUsers]), stdin);
        userEmails[numUsers][strcspn(userEmails[numUsers], "\n")] = '\0';
    }

    printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
    fgets(userGenders[numUsers], sizeof(userGenders[numUsers]), stdin);
    userGenders[numUsers][strcspn(userGenders[numUsers], "\n")] = '\0';

    while (!isValidGender(userGenders[numUsers])) {
        printf("Sexo invalido. Digite novamente: ");
        fgets(userGenders[numUsers], sizeof(userGenders[numUsers]), stdin);
        userGenders[numUsers][strcspn(userGenders[numUsers], "\n")] = '\0';
    }

    printf("Digite o endereco: ");
    fgets(userAddresses[numUsers], sizeof(userAddresses[numUsers]), stdin);
    userAddresses[numUsers][strcspn(userAddresses[numUsers], "\n")] = '\0';

    printf("Digite a altura (1.0 - 2.0 m): ");
    scanf("%lf", &userHeights[numUsers]);
    getchar();

    while (!isValidHeight(userHeights[numUsers])) {
        printf("Altura invalida. Digite novamente: ");
        scanf("%lf", &userHeights[numUsers]);
        getchar();
    }

    printf("Ja foi vacinado? (1 - Sim, 0 - Nao): ");
    scanf("%d", &userVaccinated[numUsers]);
    getchar();

    numUsers++;
    printf("Usuario cadastrado com sucesso.\n\n");
}

// Função para editar um usuário existente
void editUser() {
    int id;
    printf("Digite o ID do usuario a ser editado: ");
    scanf("%d", &id);
    getchar();

    int userIndex = -1;
    for (int i = 0; i < numUsers; i++) {
        if (userIds[i] == id) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        printf("Usuario nao encontrado.\n\n");
        return;
    }

    printf("Digite o novo nome completo: ");
    fgets(userNames[userIndex], sizeof(userNames[userIndex]), stdin);
    userNames[userIndex][strcspn(userNames[userIndex], "\n")] = '\0';

    printf("Digite o novo email: ");
    fgets(userEmails[userIndex], sizeof(userEmails[userIndex]), stdin);
    userEmails[userIndex][strcspn(userEmails[userIndex], "\n")] = '\0';

    while (!isValidEmail(userEmails[userIndex])) {
        printf("Email invalido. Digite novamente: ");
        fgets(userEmails[userIndex], sizeof(userEmails[userIndex]), stdin);
        userEmails[userIndex][strcspn(userEmails[userIndex], "\n")] = '\0';
    }

    printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
    fgets(userGenders[userIndex], sizeof(userGenders[userIndex]), stdin);
    userGenders[userIndex][strcspn(userGenders[userIndex], "\n")] = '\0';

    while (!isValidGender(userGenders[userIndex])) {
        printf("Sexo invalido. Digite novamente: ");
        fgets(userGenders[userIndex], sizeof(userGenders[userIndex]), stdin);
        userGenders[userIndex][strcspn(userGenders[userIndex], "\n")] = '\0';
    }

    printf("Digite o novo endereco: ");
    fgets(userAddresses[userIndex], sizeof(userAddresses[userIndex]), stdin);
    userAddresses[userIndex][strcspn(userAddresses[userIndex], "\n")] = '\0';

    printf("Digite a nova altura (1.0 - 2.0 m): ");
    scanf("%lf", &userHeights[userIndex]);
    getchar();

    while (!isValidHeight(userHeights[userIndex])) {
        printf("Altura invalida. Digite novamente: ");
        scanf("%lf", &userHeights[userIndex]);
        getchar();
    }

    printf("Ja foi vacinado? (1 - Sim, 0 - Nao): ");
    scanf("%d", &userVaccinated[userIndex]);
    getchar();

    printf("Usuario editado com sucesso.\n\n");
}

// Função para excluir um usuário
void deleteUser() {
    int id;
    printf("Digite o ID do usuario a ser excluido: ");
    scanf("%d", &id);
    getchar();

    int userIndex = -1;
    for (int i = 0; i < numUsers; i++) {
        if (userIds[i] == id) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        printf("Usuario nao encontrado.\n\n");
        return;
    }

    for (int i = userIndex; i < numUsers - 1; i++) {
        userIds[i] = userIds[i + 1];
        strcpy(userNames[i], userNames[i + 1]);
        strcpy(userEmails[i], userEmails[i + 1]);
        strcpy(userGenders[i], userGenders[i + 1]);
        strcpy(userAddresses[i], userAddresses[i + 1]);
        userHeights[i] = userHeights[i + 1];
        userVaccinated[i] = userVaccinated[i + 1];
    }

    numUsers--;
    printf("Usuario excluido com sucesso.\n\n");
}

// Função para buscar um usuário pelo email
void searchUserByEmail() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuario a ser buscado: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    int foundUsers = 0;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(userEmails[i], email) == 0) {
            printUser(i);
            foundUsers++;
        }
    }

    if (foundUsers == 0) {
        printf("Nenhum usuario encontrado com o email especificado.\n\n");
    }
}

// Função para imprimir todos os usuários cadastrados
void printAllUsers() {
    if (numUsers == 0) {
        printf("Nenhum usuario cadastrado.\n\n");
        return;
    }

    for (int i = 0; i < numUsers; i++) {
        printUser(i);
    }
}

// Função para fazer backup dos usuários cadastrados
void backupUsers() {
    FILE* file = fopen("backup.txt", "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo de backup.\n\n");
        return;
    }

    for (int i = 0; i < numUsers; i++) {
        fprintf(file, "%d;%s;%s;%s;%s;%.2lf;%d\n", userIds[i], userNames[i], userEmails[i],
                userGenders[i], userAddresses[i], userHeights[i], userVaccinated[i]);
    }

    fclose(file);
    printf("Backup realizado com sucesso.\n\n");
}

// Função para restaurar os dados a partir do backup
void restoreBackup() {
    FILE* file = fopen("backup.txt", "r");
    if (file == NULL) {
        printf("Nenhum arquivo de backup encontrado.\n\n");
        return;
    }

    numUsers = 0;
    while (fscanf(file, "%d;", &userIds[numUsers]) == 1) {
        fscanf(file, "%[^;];", userNames[numUsers]);
        fscanf(file, "%[^;];", userEmails[numUsers]);
        fscanf(file, "%[^;];", userGenders[numUsers]);
        fscanf(file, "%[^;];", userAddresses[numUsers]);
        fscanf(file, "%lf;", &userHeights[numUsers]);
        fscanf(file, "%d\n", &userVaccinated[numUsers]);

        numUsers++;
    }

    fclose(file);
    printf("Restauracao realizada com sucesso.\n\n");
}

int main() {
    srand(time(NULL));

    char option;
    do {
        printf("Selecione uma opcao:\n");
        printf("1. Incluir usuario\n");
        printf("2. Editar usuario\n");
        printf("3. Excluir usuario\n");
        printf("4. Buscar usuario pelo email\n");
        printf("5. Imprimir todos os usuarios\n");
        printf("6. Fazer backup dos usuarios\n");
        printf("7. Restaurar dados do backup\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%c", &option);
        getchar();

        switch (option) {
            case '1':
                addUser();
                break;
            case '2':
                editUser();
                break;
            case '3':
                deleteUser();
                break;
            case '4':
                searchUserByEmail();
                break;
            case '5':
                printAllUsers();
                break;
            case '6':
                backupUsers();
                break;
            case '7':
                restoreBackup();
                break;
            case '0':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Digite novamente.\n\n");
        }
    } while (option != '0');

    return 0;
}

