#include <stdio.h>
#include <math.h> // Inclui a biblioteca math.h para usar a função sqrt()

int main() {
    float x1, y1, x2, y2, d; // Declara as variáveis de entrada e de saída
    
    printf("Digite as coordenadas x e y do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Digite as coordenadas x e y do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    
    d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)); // Calcula a distância usando a fórmula
    
    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.4f\n", x1, y1, x2, y2, d);
    
    return 0;
}