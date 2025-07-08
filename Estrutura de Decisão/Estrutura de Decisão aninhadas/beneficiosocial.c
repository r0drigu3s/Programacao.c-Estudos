#include <stdio.h>

int main(){

    //A primeira condição idade do usuário está entre 18 e 65 anos.
    //A segunda condição se a renda do usuário é menor que 3000.
    //A terceira condição verifica se o número de dependentes é maior que 2.

    int idade, dependentes;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("Você tem quantos dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65) {
        if (renda < 3000 ) {
            if (dependentes > 2) {
                printf("Você foi aprovado!\n");
            } else {
                printf("Você não atende ao critério dependentes.\n");
            }
        } else  {
            printf("Você não atende ao critério renda.\n");
        }
    } else {
        printf("Você não atende ao critério de idade.\n");
    }
    
}