#include <stdio.h>

int main() {
    char nome[100];
    double salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o nome do vendedor: ");
    scanf("%[^\n]s", nome); // lê o nome completo do vendedor (pode conter espaços)

    printf("Digite o salario fixo do vendedor: ");
    scanf("%lf", &salarioFixo);

    printf("Digite o total de vendas do vendedor: ");
    scanf("%lf", &vendas);

    comissao = 0.15 * vendas; // calcula a comissão
    salarioFinal = salarioFixo + comissao; // calcula o salário final

    printf("O vendedor %s recebera R$ %.2lf no final do mes.\n", nome, salarioFinal);

    return 0;
}