#include <stdio.h>

int main(){

    int opcao, agencia, conta;
    float saldo = 1000, deposito, saque;
    char banco;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo.\n");
    printf("2. Fazer deposito.\n");
    printf("3. Fazer saque.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo é igual a R$%.2f\n", saldo);
        break;
    case 2:
         printf("Nome do Banco: ");
         scanf("%s", &banco);
         printf("Agência: ");
         scanf("%d", &agencia);
         printf("Conta: ");
         scanf("%d", &conta);
         printf("valor do seu deposito: R$:");
         scanf("%f", &deposito);

          if (deposito > 0) {
            printf("Deposito efetuado com sucesso!\n");
         } else {
            printf("Valor de Deposito inválido.\n");
         }
         break;
        
    case 3:
         printf("Digite o valor do saque: R$:");
         scanf("%f", &saque);
         break;
    default:
          printf("Opçaõ inválida.\n");

        break;
    }

    return 0;
}