#include <stdio.h>

struct Veiculo {
    char marca[50];
    char modelo[50];
    char cor[20];
    int quantidadePortas;
    float motorizacao;
};

void cadastrarVeiculos(struct Veiculo veiculos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite os dados do veículo %d:\n", i + 1);

        printf("Marca: ");
        scanf("%s", veiculos[i].marca);

        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);

        printf("Cor: ");
        scanf("%s", veiculos[i].cor);

        printf("Quantidade de portas: ");
        scanf("%d", &veiculos[i].quantidadePortas);

        printf("Motorização: ");
        scanf("%f", &veiculos[i].motorizacao);

        printf("\n");
    }
}

void mostrarVeiculos(struct Veiculo veiculos[], int quantidade) {
    printf("Dados dos veículos cadastrados:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("Veículo %d:\n", i + 1);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Cor: %s\n", veiculos[i].cor);
        printf("Quantidade de portas: %d\n", veiculos[i].quantidadePortas);
        printf("Motorização: %.2f\n", veiculos[i].motorizacao);
        printf("\n");
    }
}

int main() {
    struct Veiculo veiculos[10];
    int quantidade;

    printf("Digite a quantidade de veículos a cadastrar (até 10): ");
    scanf("%d", &quantidade);

    cadastrarVeiculos(veiculos, quantidade);
    mostrarVeiculos(veiculos, quantidade);

    return 0;
}