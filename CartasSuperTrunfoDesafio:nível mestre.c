#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   // ===== CARTA 1 =====
     //declarando as variáveis para a primeira carta
    char Estado_1;
    char Codigo_da_Carta_1 [4];
    char Nome_da_Cidade_1 [50];
    unsigned long int Populacao_1;
    float Area_1;
    float PIB_1;
    int Numero_de_Pontos_Turisticos_1;
    float densidade_Populacional_1;
    float media_PIB_PERCAPITA_1;
    float Super_poder_1;
     // ===== CARTA 2 =====
       //declarando as variáveis para a segunda carta
     char Estado_2;
    char Codigo_da_Carta_2 [4];
    char Nome_da_Cidade_2 [50];
    unsigned long int Populacao_2;
    float Area_2;
    float PIB_2;
    int Numero_de_Pontos_Turisticos_2;
    float media_PIB_PERCAPITA_2; 
    float densidade_Populacional_2; 
    float Super_poder_2;
// ===== ENTRADA DE DADOS DA CARTA 1 =====  
  printf("Digite o Estado da primeira carta (A ate H): ");
  scanf(" %c", &Estado_1);

  printf("Digite o Código da primeira carta(ex: A01): ");
  scanf(" %s", Codigo_da_Carta_1);

  printf ("Digite o Nome da Cidade: ");
  scanf (" %s", Nome_da_Cidade_1);

  printf ("Digite a População_1: ");
  scanf (" %lu", &Populacao_1);

  printf ("Digite a Área em km²_1: ");
  scanf (" %f", &Area_1);
  
  printf ("Digite o PIB_1: ");
  scanf ("%f", &PIB_1);

  printf ("Digite o Número de Pontos Turísticos_1: ");
  scanf (" %i", &Numero_de_Pontos_Turisticos_1);

   // calculos da primeira carta
   media_PIB_PERCAPITA_1 = (float)PIB_1 / Populacao_1; 
   
   densidade_Populacional_1 = (float)Populacao_1 / Area_1;

  Super_poder_1 =(float)Populacao_1 + Area_1 + PIB_1 + Numero_de_Pontos_Turisticos_1 + media_PIB_PERCAPITA_1 + (1.0 / densidade_Populacional_1);

 // ===== ENTRADA DE DADOS DA CARTA 2 =====
  printf("\nDigite o Estado da segunda carta (A ate H): ");
  scanf(" %c", &Estado_2);

  printf("Digite o Código da segunda carta(ex: B02): ");
  scanf("%s", Codigo_da_Carta_2);

  printf ("Digite o Nome da Cidade_2: ");
  scanf ("%s", Nome_da_Cidade_2);

  printf ("Digite a População_2: ");
  scanf ("%lu", &Populacao_2);

  printf ("Digite a Área_2 em km²: ");
  scanf ("%f", &Area_2);
  
  printf ("Digite o PIB_2: ");
  scanf ("%f", &PIB_2);

  printf ("Digite o Número de Pontos Turísticos_2: ");
  scanf (" %i", &Numero_de_Pontos_Turisticos_2);

    // calculos da segunda carta

   media_PIB_PERCAPITA_2 = (float)PIB_2 / Populacao_2; 
   
   densidade_Populacional_2 = (float)Populacao_2 / Area_2; 

  Super_poder_2 = (float)Populacao_2 + Area_2 + PIB_2 + Numero_de_Pontos_Turisticos_2 + media_PIB_PERCAPITA_2 + (1.0 / densidade_Populacional_2);
  
    // ===== Comparação de Poder =====
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", Populacao_1 > Populacao_2);
    printf("Area: Carta 1 venceu (%d)\n", Area_1 > Area_2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB_1 > PIB_2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", Numero_de_Pontos_Turisticos_1 > Numero_de_Pontos_Turisticos_2);

    /* densidade: menor vence */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_Populacional_1 < densidade_Populacional_2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", media_PIB_PERCAPITA_1 > media_PIB_PERCAPITA_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Super_poder_1 > Super_poder_2);

    return 0;
} 
