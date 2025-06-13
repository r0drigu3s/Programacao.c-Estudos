#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Incremento --a
    Pós-Incremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do Incremento: %d\n", numero1);

    // numero1 = numero1 +1
    // numero = += 1
    // Pós-Incremetno:
    // resultado = numero1;
    //numero1 ++;
    resultado = numero1++;
    //printf("Depois do Incremento: %d\n", numero1);
    printf("Apos Pós-incremento - Númeor1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pre-incremento - Númeor1: %d - Resultado: %d\n", numero1, resultado);

    // numero1 = numeor1 -1
    // numero1 -= 1
    //numero1--;
    //printf("Depois do Incremento: %d\n",  numero1);

    resultado = numero1--;
    printf("Apos Pós-Decremento - Númeor1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pré-decremento - Númeor1: %d - Resultado: %d\n", numero1, resultado);
    
}