#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 99; i += 2) {
        soma += i;
    }

    printf("Valor de S: %d\n", soma);

    return 0;
}
