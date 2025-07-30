#include <stdio.h>

int main() {
     
    int opcao;
    float nota1, nota2, media;

    printf("Menu Gerenciamento de estudante\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha Uma Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nCalcular a Média\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >=0 && nota2 <= 10)) {
          media = (nota1 + nota2) / 2;
          printf("\nA média é %.2f\n", media);
        } else {
            printf("Entrada com valores errados de notas\n");
        }
        break;

    case 2:
        printf("\nDeterminar Status\n");
        printf("Entrar com média: ");
        scanf("%f", &media);
        //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");
         
        if (media >= 7) {
            printf("Aprovado!\n");
        } else if (media >= 5) {
            printf("Recuperação!\n");
        } else {
            printf("Reprovado!\n");
        }
        break;

    case 3:
        printf("\nSaindo do Programa...\n");
        break;
    
    default:
        printf("\nopção inválida\n");
        break;
    }
}