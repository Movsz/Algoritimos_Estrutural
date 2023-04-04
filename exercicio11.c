#include <stdio.h>

#define PI 3.14159 // Definindo PI como uma constante

int main() {
    float raio, area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0/3) * PI * raio * raio * raio;

    printf("Área da esfera: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);

    return 0;
}