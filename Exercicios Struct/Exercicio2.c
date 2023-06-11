#include <stdio.h>

struct DadosAluno {
    char nome[100];
    int idade;
};

int main() {
    struct DadosAluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Idade do aluno: %d\n", aluno.idade);

    return 0;
}