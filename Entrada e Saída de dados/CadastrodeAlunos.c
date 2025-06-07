#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf(">>Cadastro de Aluno(s)<<\n\n");

    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite sua Mátricula: ");
    scanf("%d", &matricula);

    printf("Nome: %s    Idade: %d\n", nome, idade);
    printf("Altura: %.2f   Mátricula: %d\n", altura, matricula);

}