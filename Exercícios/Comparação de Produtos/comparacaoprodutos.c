#include <stdio.h>

int main(){

  char produtoA[30] = "Produto A";
  char prodrutoB[30] = "Produto B";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned estoqueMinimoA = 500;
  unsigned estoqueMinimoB = 2500;

  double valorTotalA;
  double valorTotalB;

  int resultadoA, resultadoB;

  //Exibir as informações do produto

  printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
  printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", prodrutoB, estoqueB, valorB);

  // Comparação com o valor minímo de estoque

  resultadoA = estoqueA > estoqueMinimoA;
  resultadoB = estoqueB > estoqueMinimoB;

  printf("O produto %s tem estoque minímo de %d\n", produtoA, resultadoA);
  printf("O produto %s tem estoque minímo de %d\n", prodrutoB, resultadoB);

  // Comparação dos valores totais dos produtos

  printf("O valor total de A (R$ %.2f) é mairo que o valor total de B (R$ %.2f)? %d\n", 
                          estoqueA * valorA, 
                          estoqueB * valorB,
             (estoqueA * valorA) > (estoqueB * valorB));

  






}