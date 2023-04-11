#include <stdio.h>

int main()
{
    int n, i;
    float hn = 0;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        hn += 1.0/i;
    }
    
    printf("O valor de Hn é: %f\n", hn);

    return 0;
}