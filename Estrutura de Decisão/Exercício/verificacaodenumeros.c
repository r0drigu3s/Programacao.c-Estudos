#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("Número PAR.\n");
        } else {
            printf("Número IMPAR.\n");
        }
        //printf("Número é Positivo!\n");
    } else if (numero == 0) {
        printf("Número é Zero.\n");
    } else {
        printf("Número é negativo.\n");
    }

    return 0;

}