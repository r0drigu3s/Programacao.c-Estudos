#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Temperatura: ");
    scanf("%f", &temperatura);

    printf("Umidade: ");
    scanf("%f", &umidade);

    printf("Estoque: ");
    scanf("%u", &estoque);

    if(temperatura > 30) {
        printf("Temperatura está alta.\n");
    } else {
        printf("Temperatura está dentro dos parâmetros.\n");
    }
    
    if(umidade > 50) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade está dentro dos parâmetros.\n");
    }

    if(estoque < estoqueminimo) {
        printf("Estoque está a baixo do minímo.\n");
    } else {
        printf("Estoque normal.\n");
    }
}