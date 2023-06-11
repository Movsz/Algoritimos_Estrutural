struct Cadastro {
    char nome[100];
    char identidade[20];
    char telefone[20];
    struct Endereco {
        char rua[100];
        char bairro[100];
        char cidadeEstado[100];
        char cep[10];
    } endereco;
    char cpf[12];
    int idade;
    float salario;
    char estadoCivil[20];
    char sexo;
};