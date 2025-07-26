#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroComputador;
    srand (time(0));

    printf(">>> Jokenpô <<<\n");
    printf("\n1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("\nEscolha: ");
    scanf("%d", &numeroJogador);

    numeroComputador = rand() % 3 +1;

    switch (numeroJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

     switch (numeroComputador)
    {
    case 1:
        printf("Maquina: Pedra\n");
        break;
    case 2:
        printf("Maquina: Papel\n");
        break;
    case 3:
        printf("Maquina: Tesoura\n");
        break;
    }

    if (numeroJogador == numeroComputador) {
        printf("#### Empate ####\n");
    } else if ((numeroJogador == 1) && (numeroComputador == 3) ||
               (numeroJogador == 2) && (numeroComputador == 1) ||
               (numeroJogador == 3) && (numeroComputador == 2)) {

        printf("#### Você Ganhou. ####\n");
     } else {
        printf("#### Você Perdeu. ####\n");
     }
    
    return 0;
    
}