#include <stdio.h>


int main() {

char nome[50];

// array de char para armazenar o nome do usuário
printf("Digite seu nome: \n");

// %s para string, sem o & pois nome é um array de char
scanf("%s", nome);
// array de char para armazenar o nome do usuário
printf("Olá, %s \n", nome);




return 0;
}
