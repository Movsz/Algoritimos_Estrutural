#include <stdio.h>

int main()
{
    int opcao, quantidade;
    float valorTotal = 0.0;

    do {
        printf("MENU DE FRUTAS:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MAÇA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("4 => FINALIZAR COMPRA\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 5.0 * quantidade;
                break;
            case 2:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 1.0 * quantidade;
                break;
            case 3:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 4.0 * quantidade;
                break;
            case 4:
                printf("Valor total da compra: R$ %.2f\n", valorTotal);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}