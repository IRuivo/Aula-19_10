#include <stdio.h>

int main() {
    char nome[50]; // array de char para armazenar o nome do usuário
    int idade; // variável para armazenar a idade do usuário
    float altura; // variável para armazenar a altura do usuário
    char genero[10]; // array de char para armazenar o gênero do usuário

    printf("Digite seu nome: \n");
    scanf("%s", nome); // %s para string, sem o & pois nome é um array de char
    printf("Digite sua Idade: \n");
    scanf("%d", &idade); // %d para int, com & pois idade é uma variável do tipo int
    printf("Digite seu Genero: ");
    scanf("%s", genero); // %s para string, sem o & pois genero é um array de char
    printf("Digite sua Altura: ");    
    scanf("%f", &altura); // %f para float, com & pois altura é uma variável do tipo float



    printf("--Dados Cadastrados-- \n");
    printf("Olá, %s \n", nome);// %s para string, sem o & pois nome é um array de char
    printf("Sua idade é: %d\n", idade);// %d para int, com & pois idade é uma variável do tipo int
    printf("Seu Genero é: %s\n", genero);// %s para string, sem o & pois genero é um array de char
    printf("Sua Altura é: %.2f \n", altura); //%.2f para limitar a 2 casas decimais

    return 0;
}