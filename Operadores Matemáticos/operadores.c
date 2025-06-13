#include <stdio.h>

int main(){

    /*
    Soma (+)
    subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Número: ");
    scanf("%d", &numero1);
    printf("Número: ");
    scanf("%d", &numero2);

     //Operação soma
    soma = numero1 + numero2;

     //Operação Subtração
    subtracao = numero1 - numero2;

     //Operação Multiplicação
    multiplicacao = numero1 * numero2;

    //Operação Divisão
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

}