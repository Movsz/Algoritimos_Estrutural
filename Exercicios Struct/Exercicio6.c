#include <stdio.h>
#include <string.h>

struct Endereco {
    char rua[100];
    char bairro[100];
    char cidadeEstado[100];
    char cep[10];
};

struct Cadastro {
    char nome[100];
    char identidade[20];
    char telefone[20];
    struct Endereco endereco;
    char cpf[12];
    int idade;
    float salario;
    char estadoCivil[20];
    char sexo;
};

int main() {
    struct Cadastro cadastros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados do cadastro %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %99[^\n]", cadastros[i].nome);

        printf("Identidade: ");
        scanf(" %19[^\n]", cadastros[i].identidade);

        printf("Telefone: ");
        scanf(" %19[^\n]", cadastros[i].telefone);

        printf("Rua: ");
        scanf(" %99[^\n]", cadastros[i].endereco.rua);

        printf("Bairro: ");
        scanf(" %99[^\n]", cadastros[i].endereco.bairro);

        printf("Cidade e Estado: ");
        scanf(" %99[^\n]", cadastros[i].endereco.cidadeEstado);

        printf("CEP: ");
        scanf(" %9[^\n]", cadastros[i].endereco.cep);

        printf("CPF: ");
        scanf(" %11[^\n]", cadastros[i].cpf);

        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);

        printf("Salário: ");
        scanf("%f", &cadastros[i].salario);

        printf("Estado Civil: ");
        scanf(" %19[^\n]", cadastros[i].estadoCivil);

        printf("Sexo: ");
        scanf(" %c", &cadastros[i].sexo);

        printf("\n");
    }

    //c) Encontre a pessoa com maior idade entre os cadastrados:
    int maiorIdade = cadastros[0].idade;
    int indiceMaiorIdade = 0;

    for (int i = 1; i < 5; i++) {
        if (cadastros[i].idade > maiorIdade) {
            maiorIdade = cadastros[i].idade;
            indiceMaiorIdade = i;
        }
    }

    printf("Pessoa com maior idade:\n");
    printf("Nome: %s\n", cadastros[indiceMaiorIdade].nome);
    printf("Idade: %d\n", cadastros[indiceMaiorIdade].idade);

    //d) Encontre as pessoas do sexo masculino:
    printf("Pessoas do sexo masculino:\n");
    for (int i = 0; i < 5; i++) {
        if (cadastros[i].sexo == 'M') {
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Sexo: %c\n", cadastros[i].sexo);
        }
    }

    //e) Encontre as pessoas com salário maior que 1000:
    printf("Pessoas com salário maior que 1000:\n");
    for (int i = 0; i < 5; i++) {
        if (cadastros[i].salario > 1000.0) {
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Salário: %.2f\n", cadastros[i].salario);
        }
    }

    //f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário:
    char identidadeBusca[20];
    printf("Digite a identidade para busca: ");
    scanf("%s", identidadeBusca);

    int encontrado = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(cadastros[i].identidade, identidadeBusca) == 0) {
            printf("Dados da pessoa com identidade %s:\n", identidadeBusca);
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Idade: %d\n", cadastros[i].idade);
            printf("Telefone: %s\n", cadastros[i].telefone);
            printf("Endereço:\n");
            printf("Rua: %s\n", cadastros[i].endereco.rua);
            printf("Bairro: %s\n", cadastros[i].endereco.bairro);
            printf("Cidade e Estado: %s\n", cadastros[i].endereco.cidadeEstado);
            printf("CEP: %s\n", cadastros[i].endereco.cep);
            printf("CPF: %s\n", cadastros[i].cpf);
            printf("Salário: %.2f\n", cadastros[i].salario);
            printf("Estado Civil: %s\n", cadastros[i].estadoCivil);
            printf("Sexo: %c\n", cadastros[i].sexo);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Nenhuma pessoa encontrada com a identidade %s.\n", identidadeBusca);
    }

    return 0;
}

