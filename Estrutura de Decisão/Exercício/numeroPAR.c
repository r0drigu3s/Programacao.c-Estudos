#include <stdio.h>

int main(){

    int numero = 4, resultado;

    resultado = numero % 2;

    if(numero % 2 == 0){
        printf("O %d é um número Par.\n", numero);
    }

    printf("O resultado é %d\n", resultado);
}