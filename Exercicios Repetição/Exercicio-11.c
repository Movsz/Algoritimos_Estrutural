#include <stdio.h>

int main() {
   int n, i;
   printf("Digite um número positivo: ");
   scanf("%d", &n);
   printf("Os divisores de %d são: ", n);
   for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         printf("%d ", i);
      }
   }
   printf("\n");
   return 0;
}