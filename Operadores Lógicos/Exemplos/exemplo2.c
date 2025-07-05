#include <stdio.h>

int main(){

    int idade = 17;
    float altura = 1.71;

    // idade >= 18 => Falso
    // altura <= 30  => Verdadeiro
    // Falso && Verdadeiira
    // Falso && altura > 1.7 => falso
    // Falso && Falso => Falso

    if ( idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem altura adequada\n");
     } else {
        printf("Você não atende aos critérios\n");
     }
}