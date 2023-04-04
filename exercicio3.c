#include <stdio.h>

int main() {
   int numeroInteiro;
   float numeroRealFloat;
   double numeroRealDouble;
   char letra;
   char string[100];
   int endereco;

   printf("Digite um numero inteiro: ");
   scanf("%d", &numeroInteiro);

   printf("Digite dois numeros reais, separados por espaco: ");
   scanf("%f %lf", &numeroRealFloat, &numeroRealDouble);

   printf("Digite uma letra: ");
   scanf(" %c", &letra);

   printf("Digite uma string: ");
   scanf(" %99[^\n]", string);

   printf("Digite um endereco de memoria em hexadecimal: ");
   scanf("%x", &endereco);

   printf("Numero inteiro: \"%d\"\n", numeroInteiro);
   printf("Numeros reais:\n");
   printf("\"%.3f\"\n", numeroRealFloat);
   printf("\"%.3lf\"\n", numeroRealDouble);
   printf("Letra: \"%c\"\n", letra);
   printf("String: \"%s\"\n", string);
   printf("Endereco: \"%p\"\n", (void *)endereco);
   return 0;
}