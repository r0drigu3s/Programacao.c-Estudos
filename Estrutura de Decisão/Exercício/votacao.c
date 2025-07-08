#include <stdio.h>

int main(){

    int idade;
    int idademinima = 16;

    printf("Digite Sua idade: ");
    scanf("%d", &idade);

    if(idade >= idademinima)
       printf("Você Pode Votar!\n");
    else
       printf("Você NÃO Pode votar\n");
}