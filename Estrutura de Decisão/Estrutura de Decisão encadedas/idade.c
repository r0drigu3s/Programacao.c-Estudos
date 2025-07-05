#include <stdio.h>

int main(){
     
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    //Criança < 12
    //Adolescente 12 >= x < 18
    //Adulto 18 >= x  < 60
    //Idoso > 60

    if (idade < 12) {
        printf ("Você é uma Criança!\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Você é um Adolescente!\n");
    } else if (idade >= 18 && idade < 60) {
        printf ("Você é um adulto!\n");
    } else {
        printf ("Você é um idoso!\n");
    }
}