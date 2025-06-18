#include <stdio.h>

int main() {

    //Conversão inplicita;

    int x = 5;
    float y = 5.0;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    //Conversão Explicita;

    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("\nnum == result: %d\n", comparison);

    return 0;
}