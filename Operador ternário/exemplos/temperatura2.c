#include <stdio.h>

int main (){

    int temperatura = 35;
    int resultdo;

    resultdo = temperatura > 30 ? 1 :  0;

    if (resultdo == 1)
    {
        printf("Está calor\n");
    } else {
        printf("Está frio\n");
    }

    return 0;
    
}