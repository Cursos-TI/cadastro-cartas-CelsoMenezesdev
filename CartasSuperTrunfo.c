#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // ===== CARTA 1 =====
    char Estado_1;
    char Codigo_da_Carta_1 [4];
    char Nome_da_Cidade_1 [50];
    int População_1;
    float Area_1;
    float PIB_1;
    int Numero_de_Pontos_Turisticos_1;
     
     // ===== CARTA 2 =====
    char Estado_2;
    char Codigo_da_Carta_2 [4];
    char Nome_da_Cidade_2 [50];
    int População_2;
    float Area_2;
    float PIB_2;
    int Numero_de_Pontos_Turisticos_2;
  // Área para entrada de dados
// ===== ENTRADA CARTA 1 =====
  printf("Digite o Estado da primeira carta (A ate H): ");
  scanf(" %c", &Estado_1);

  printf("Digite o Código da primeira carta(ex: A01): ");
  scanf(" %s", Codigo_da_Carta_1);

  printf ("Digite o Nome da Cidade: ");
  scanf (" %s", Nome_da_Cidade_1);

  printf ("Digite a População_1: ");
  scanf (" %i", &População_1);

  printf ("Digite a Área em km²_1: ");
  scanf (" %f", &Area_1);
  
  printf ("Digite o PIB_1: ");
  scanf ("%f", &PIB_1);

  printf ("Digite o Número de Pontos Turísticos_1: ");
  scanf (" %i", &Numero_de_Pontos_Turisticos_1);

 // ===== ENTRADA CARTA 2 =====
  printf("\nDigite o Estado da segunda carta (A ate H): ");
  scanf(" %c", &Estado_2);

  printf("Digite o Código da segunda carta(ex: B02): ");
  scanf("%s", Codigo_da_Carta_2);

  printf ("Digite o Nome da Cidade_2: ");
  scanf ("%s", Nome_da_Cidade_2);

  printf ("Digite a População_2: ");
  scanf ("%i", &População_2);

  printf ("Digite a Área_2 em km²: ");
  scanf ("%f", &Area_2);
  
  printf ("Digite o PIB_2: ");
  scanf ("%f", &PIB_2);

  printf ("Digite o Número de Pontos Turísticos_2: ");
  scanf (" %i", &Numero_de_Pontos_Turisticos_2);

  // Área para exibição dos dados da cidade
    // ===== SAIDA =====
  printf ("\nPrimeira Carta: \n");

  printf ("Estado: %c\n", Estado_1);
  
  printf ("Código da Carta: %s\n", Codigo_da_Carta_1); 
 
  printf ("Nome da Cidade: %s\n", Nome_da_Cidade_1);

  printf ("População: %i\n", População_1);

  printf ("Área: %.2f km²\n", Area_1);
  
  printf ("PIB: %.2f\n", PIB_1);
 
  printf ("Número de Pontos Turísticos: %i\n", Numero_de_Pontos_Turisticos_1);

 // ===== SAIDA =====
 
  printf ("\nSegunda Carta: \n");
 
  printf ("Estado: %c\n", Estado_2);
  
  printf ("Código da Carta: %s\n", Codigo_da_Carta_2);
 
  printf ("Nome da Cidade: %s\n", Nome_da_Cidade_2);
 
  printf ("População: %i\n", População_2);
 
  printf ("Área: %.2f km²\n", Area_2);
  
  printf ("PIB: %.2f\n", PIB_2);
  
  printf ("Número de Pontos Turísticos: %i\n", Numero_de_Pontos_Turisticos_2);
  return 0;
} 
