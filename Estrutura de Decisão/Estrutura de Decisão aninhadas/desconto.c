#include <stdio.h>

int main(){

    /*Vamos criar agora um programa que verifica se uma pessoa está qualificada para
    um desconto especial com base na idade e na renda mensal. A pessoa deve ter mais
    de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000.*/

    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    //Você está qualificado para o desconto especial
    //Você não está qualificado para o desconto devido à renda!
    //Você não está qualificado para o desconto devido a idade!

   if (idade <= 18 || idade >= 60) {
    if (renda <= 2000) {
        printf("Você está qualificado para o desconto especial!\n");
    } else {
        printf("Você não está qualificado para o desconto devido à renda!\n");
    }
   } else {
    printf("Você não está qualificado para o desconto devido a idade!\n");
   }

   
   return 0;  
}