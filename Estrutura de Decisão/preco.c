#include <stdio.h>

int main(){
     int preco1 = 22.00;
     int preco2 = 24.00;

     if(preco1 > preco2)
        printf("O Preço 1 é maior\n");
    else
        if(preco1 < preco2)
           printf("O Preço 2 é maior\n");
        else
            printf("Os Preços são iguais.\n");

       
}