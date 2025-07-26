#include <stdio.h>

int main(){

    int num = 95, num2 = 45;
    int maior;

    num > num2 ? (maior = num) : (maior = num2);
    printf("Número maior = %d\n", maior);
}