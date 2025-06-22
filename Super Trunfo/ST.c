#include <stdio.h>

int main(){

    // Váriaveis
    
    char estado, estado2, codigo[4], codigo2[4], cidade[20], cidade2[20];
    unsigned int populacao, populacao2, carta;
    int pontos, pontos2, resultado2;
    float area, area2, pib, pib2, densidade, densidade2, pibpercapita, pibpercapita2, resultado;
    float superpoder, superpoder2, resultado3;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(">>PRIMEIRA CARTA<<\n");

    printf("\nESTADO, escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%c", &estado);

    printf("CÓDIGO DA CARTA, letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo);

    printf("CIDADE: ");
    scanf("%s", &cidade);

    printf("POPULAÇÃO: ");
    scanf("%u", &populacao);

    printf("ÀREA (km²): a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("PIB, produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos);


    printf("\n>>SEGUNDA CARTA<<\n");

    printf("\nESTADO, escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("CÓDIGO DA CARTA, letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo2);

    printf("CIDADE: ");
    scanf("%s", &cidade2);

    printf("POPULAÇÃO: ");
    scanf("%u", &populacao2);

    printf("ÀREA (km²), a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("PIB, produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Cálculo.

    densidade = (long double) populacao / area;
    densidade2 = (long double) populacao2 / area2;
    pibpercapita = (long double) populacao / pib;
    pibpercapita2 = (long double) populacao2 / pib2;
    superpoder = (float) populacao + area + pib + (float) pontos + pibpercapita + ( 1 / (float) densidade);
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + pibpercapita2 + ( 1 / (float) densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta:1");
    printf("\nEstado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Àrea: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("Super Poder: %f\n", superpoder);


    printf("\nCarta:2");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Àrea: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);

    //Cálculo para Comparação das Cartas

    printf("\nComparação de Cartas: \n");
    carta = populacao > populacao2;
    printf("População: Carta 1 (%u)\n", carta);
    resultado = area > area2;
    printf("Àrea: Carta 1 (%.f)\n", resultado);
    resultado = pib > pib2;
    printf("PIB: Carta 1 (%.0f)\n", resultado);
    resultado2 = pontos > pontos2;
    printf("Pontos Turisticos: Carta 1 (%d)\n", resultado2);
    resultado = densidade > densidade2;
    printf("Densidade Populacional: Carta 1 (%0.f)\n", resultado);
    resultado = pibpercapita > pibpercapita2;
    printf("PIB per Capita: Carta 1 (%.0f)\n", resultado);
    resultado3 = superpoder > superpoder2;
    printf("Super Poder: Carta 1 (%.0f)\n", resultado3);

    return 0;

}