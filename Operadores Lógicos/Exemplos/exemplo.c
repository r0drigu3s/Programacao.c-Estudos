#include <stdio.h>

int main(){

    int a = 1;
    int b = 10;;
    int c = 1;

    //a > 0 => Verdadeiro
    //b < 0 => Falsa
    //Verdadeiro && Falsa => Falsa
    //Falsa || c == 0
    //Falsa || Falsa => Falsa

    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }
}