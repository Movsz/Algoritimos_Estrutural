#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], cpf[12], senha[15];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    
    printf("Digite seu CPF (somente números): ");
    scanf("%s", cpf);
    
    // Concatenando nome, primeira letra do sobrenome e 3 primeiros números do CPF
    sprintf(senha, "%s%c%.3s", nome, sobrenome[0], cpf);
    
    printf("Sua senha de acesso é: %s\n", senha);
    
    return 0;
}