#include <stdio.h>

int main(){

    int idade;
    float altura;
    char nome[20];
    char opcao;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s.\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem: %d anos.\n", idade);

    printf("Qual a sua altura: ");
    scanf("%f", &altura);
    printf("Você tem %.2f de altura.\n", altura);

    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);
    printf("Você escolheu a opção: %c\n", opcao);

    return 0;


}