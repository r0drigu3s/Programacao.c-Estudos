#include <stdio.h>

int main(){

    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado - numero1
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado * 5
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);

}