#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    float media;

    printf("**** Programa de Cálculo de Média ****\n");

    printf("\nDigite sua  primeria nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("A Média do aluno é %.2f \n", media);

}