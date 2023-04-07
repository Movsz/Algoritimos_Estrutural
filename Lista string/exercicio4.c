#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[50], nome_meio[50], ultimo_nome[50], nome_completo[150];

    printf("Digite o primeiro nome: ");
    scanf("%s", primeiro_nome);

    printf("Digite o(s) nome(s) do meio: ");
    scanf("%s", nome_meio);

    printf("Digite o último nome: ");
    scanf("%s", ultimo_nome);

    strcpy(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, nome_meio);
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);

    printf("Nome completo: %s", nome_completo);

    return 0;
}