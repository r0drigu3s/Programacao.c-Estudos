#include <stdio.h>

int main(){

    /*float nota1, nota2, resultado;
    int soma;

     //Primeira nota do aluno.
    printf("Primeira Nota: ");
    scanf("%f", &nota1);

    //Segunda nota do aluno.
    printf("Segunda Nota: ");
    scanf("%f", &nota2);

    soma = nota1 + nota2;
    printf("Soma: %d\n", soma);

    resultado = (float) soma / 2;
    printf("A nota média do aluno é: %.2f\n", resultado);*/

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