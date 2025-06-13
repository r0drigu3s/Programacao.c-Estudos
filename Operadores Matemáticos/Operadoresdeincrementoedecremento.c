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

    int numero1 = 1;

    printf("Antes do Incremento: %d\n", numero1);

    // numero1 = numero1 +1
    // numero = += 1
    numero1++;
    printf("Depois do Incremento: %d\n", numero1);

    // numero1 = numeor1 -1
    // numero1 -= 1
    numero1--;
    printf("Depois do Incremento: %d\n",  numero1);
}