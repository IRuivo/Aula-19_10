// Criar um codigo que calcule a média de duas notas do aluno.
// O codigo deve perguntar o nome do aluno, as duas notas e exibir no terminal a média simples.

#include <stdio.h>
#include <math.h>

int main() {
    char nome[50]; 
    float nota1, nota2, media;
    printf("Digite o nome do aluno: \n");
    scanf("%s", nome); 
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1); 
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2); 
    media = (nota1 + nota2) / 2; 

    printf("A média de %s é: %.2f\n", nome, media);
    

    return 0;
}