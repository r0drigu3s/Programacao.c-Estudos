#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //Idoso > 60
    //Adulto >= 18 && < 60
    //Adolescente < 18 && > 12
    //Criança < 12

    if(idade >= 60){
        printf ("Você é um idoso!\n");
    } else if (idade >= 18 && idade < 60){
        printf ("Você é um Adulto!\n");
    } else if (idade < 18 && idade >= 12){
        printf ("Você é um Adolescente!\n");
    } else {
        printf ("Você é uma Criança!\n");
    }
}