#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo1[4], cidade1[20], estado2, codigo2[4], cidade2[20];
  int populacao1, pontosT1, populacao2, pontosT2;
  float area1, pib1, area2, pib2; 

  // Área para entrada de dados

  //DADOS DA CARTA 1

  //Estado - carta 1 
  printf("Digite uma letra entre 'A' e 'H' para representar a inicial de um estado da carta 1: \n");
  scanf("%c", &estado1);

  //Código - carta 1
  printf("Digite o código da carta 1: \n");
  scanf("%s", codigo1);

  //Cidade - carta 1
  printf("Digite o nome da Cidade da carta 1: \n");
  scanf("%s", cidade1);

  //Habitantes - carta 1
  printf("Digite o número de habitantes da cidade da carta 1: \n");
  scanf("%d", &populacao1);

  //KM² - carta 1
  printf("Digite a área da cidade em quilômetro quadrados da carta 1: \n");
  scanf("%f", &area1);

  //PIB - carta 1
  printf("Digite o PIB (o produtro interno bruto da cidade) da carta 1: \n");
  scanf("%f", &pib1);

  //PONTOS TURÍSTICOS - carta 1
  printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
  scanf("%d", &pontosT1);

  //DADOS DA CARTA 2

  //Estado - carta 2 
  printf("Digite uma letra entre 'A' e 'H' para representar a inicial de um estado da carta 2: \n");
  scanf("%c", &estado2);

  //Código - carta 2
  printf("Digite o código da carta 2: \n");
  scanf("%s", codigo2);

  //Cidade - carta 2
  printf("Digite o nome da Cidade da carta 2: \n");
  scanf("%s", cidade2);

  //Habitantes - carta 2
  printf("Digite o número de habitantes da cidade da carta 2: \n");
  scanf("%d", &populacao2);

  //KM² - carta 2
  printf("Digite a área da cidade em quilômetro quadrados da carta 2: \n");
  scanf("%f", &area2);

  //PIB - carta 2
  printf("Digite o PIB (o produtro interno bruto da cidade) da carta 2: \n");
  scanf("%f", &pib2);

  //PONTOS TURÍSTICOS - carta 2
  printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
  scanf("%d", &pontosT2);


  // Área para exibição dos dados da cidade
  printf("CARTA 1:\n");
  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, cidade1);
  printf("População: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n", populacao1, area1, pontosT1);
  printf("CARTA 2:\n");
  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);
  printf("População: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n", populacao2, area2, pontosT2);


return 0;
} 
