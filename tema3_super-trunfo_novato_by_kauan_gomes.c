// OBS: AO Professor: Fui Obrigado a usar a função 'fgets' pois a função 'scanf' não atendia a meus requisitos como pegar o caractere de espaço em palavras das cidades como " São Paulo. " Por Exemplo - Peço Desculpas Desde já.

// Usei a função getchar na linha 48 para pegar o valor da variavel e retornalo como int.

#include <stdio.h>

int main() {

  char estado_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  estado_b[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  codigo_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres
  codigo_b[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres
  cidade_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres
  cidade_b[50]; // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres
  
  float area_cidade_a, // Variavel que Armazena a Area Digitados A.
  area_cidade_b, // Variavel que Armazena a Area Digitados B.
  pib_cidade_a, // Variavel que Armazena o PIB A.
  pib_cidade_b, // Variavel que Armazena o PIB B.
  densidade_populacional_cidade_a, // Variavel que Armazena a Densidade Populacional A.
  densidade_populacional_cidade_b, // Variavel que Armazena a Densidade Populacional B.
  pib_per_capta_cidade_a, // Variavel que Armazena PIB Per Capta A.
  pib_per_capta_cidade_b; // Variavel que Armazena PIB Per Capta B.
    
  int populacao_cidade_a, // Variavel que Armazena a População A.
  populacao_cidade_b, // Variavel que Armazena a População B.
  pontos_turisticos_a, // Variavel que Armazena o Numero de Pontos Turiscos A.
  pontos_turisticos_b; // Variavel que Armazena o Numero de Pontos Turiscos B.
  
  printf("\n-----------  Super Trunfo - Tema 3 : Novato -----------");
  
  printf("\n\n-----------  Carta A: -----------"); // Dados da Carta A:
  
  printf("\n\nDigite o Estado da Carta A (A à H): "); 
  scanf(" %99[^\n]", estado_a);
  
  printf("\nDigite o Codigo da Carta A: "); 
  scanf(" %99[^\n]", codigo_a);
  
  printf("\nDigite o Nome da Cidade da Carta A: "); 
  scanf(" %99[^\n]", cidade_a);
  
  printf("\nPopulação da Cidade da Carta A: ");
  scanf("%d", &populacao_cidade_a);
  
  printf("\nDigite à Área da Cidade da Carta A: ");
  scanf("%f", &area_cidade_a);
  
  printf("\nDigite o PIB da Cidade da Carta A: ");
  scanf("%f", &pib_cidade_a);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta A: ");
  scanf("%d", &pontos_turisticos_a);
  
  printf("\n-----------  Carta B: -----------"); // Dados da Carta B:
  
  printf("\n\nDigite o Estado da Carta B (A à H): "); 
  scanf(" %99[^\n]", estado_b);
  
  printf("\nDigite o Codigo da Carta B: "); 
  scanf(" %99[^\n]", codigo_b);
  
  printf("\nDigite o Nome da Cidade da Carta B: "); 
  scanf(" %99[^\n]", cidade_b);
  
  printf("\nPopulação da Cidade da Carta B: ");
  scanf("%d", &populacao_cidade_b);
  
  printf("\nDigite à Área da Cidade da Carta B: ");
  scanf("%f", &area_cidade_b);
   
  printf("\nDigite o PIB da Cidade da Carta B: ");
  scanf("%f", &pib_cidade_b);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta B: ");
  scanf("%d", &pontos_turisticos_b);
  
  // Formula do Calculo de Desnsidade Populacional de Ambas as Cartas:
  densidade_populacional_cidade_a = populacao_cidade_a / area_cidade_a;
  densidade_populacional_cidade_b = populacao_cidade_b / area_cidade_b;
  
  // Formula do Calculo de PIB Per Capta das Cartas:
  pib_per_capta_cidade_a = pib_cidade_a / populacao_cidade_a;
  pib_per_capta_cidade_b = pib_cidade_b / populacao_cidade_b;

  printf("\n\n-----------  Carta A:  -----------\n"); // Impressão dos dados Carta A:
  
  printf("\nEstado : %s\n" , estado_a);
  printf("Codigo : %s\n", codigo_a);
  printf("Nome da Cidade: %s\n", cidade_a);
  printf("População : %d Habitantes\n", populacao_cidade_a);
  printf("Área : %.2f (Km²).\n", area_cidade_a);
  printf("PIB : %.2f\n", pib_cidade_a);
  printf("Número de Pontos Turísticos : %d\n", pontos_turisticos_a);
  printf("Densidade Populacional : %.2f hab/km²\n", densidade_populacional_cidade_a);
  printf("PIB per Capita : %.2f Reais\n", pib_per_capta_cidade_a);
  
  printf("\n\n-----------  Carta B:  -----------\n"); // Impressão dos dados Carta B:
  
  printf("\nEstado : %s" , estado_b);
  printf("Codigo : %s", codigo_b);
  printf("Nome da Cidade : %s\n", cidade_b);
  printf("População : %d Habitantes.\n", populacao_cidade_b);
  printf("Área : %.2f (Km²).\n", area_cidade_b);
  printf("PIB : %.2f Bilhões de Reais.\n", pib_cidade_b);
  printf("Número de Pontos Turísticos : %d\n", pontos_turisticos_b);
  printf("Densidade Populacional : %.2f hab/km²\n", densidade_populacional_cidade_b);
  printf("PIB per Capita : %.2f Reais\n\n\n", pib_per_capta_cidade_b);
  
  printf("-----------  Comparação de Cartas:  -----------\n\n"); // Condiçoes para comparação das Cartas:
  
  if (populacao_cidade_a > populacao_cidade_b) {
  printf("População: Carta A Venceu (1) \n");
  }
  
  if (populacao_cidade_b > populacao_cidade_a){
  printf("População: Carta B Venceu (1)\n");
  }
  
  else {
  printf("População: Empatados.\n");
  }
 
  if (area_cidade_a > area_cidade_b) {
  printf("Área: Carta A Venceu (1)\n");
  } 
  
  if (area_cidade_b > area_cidade_a) {
  printf("Área: Carta B Venceu (1)\n");
  }
  
  else {
  printf("Área: Empatados.\n");
  }
  
  if (pib_cidade_a > pib_cidade_b) {
  printf("PIB: Carta A Venceu (1)\n");
  }
  
  if (pib_cidade_b > pib_cidade_a) {
  printf("PIB: Carta B Venceu (1)\n");
  }
  
  else {
  printf("PIB: Empatados.\n");
  }
  
  if (pontos_turisticos_a > pontos_turisticos_b) {
  printf("Pontos Turísticos: Carta A Venceu (1)\n");
  }
  
  if (pontos_turisticos_b > pontos_turisticos_a) {
  printf("Pontos Turísticos: Carta B Venceu (1)\n");
  }
  
  else {
  printf("Pontos Turísticos: Empatados.\n");
  }
  
  if (densidade_populacional_cidade_a > densidade_populacional_cidade_b) {
  printf("Densidade Populacional: Carta A Venceu (1)\n");
  }

  if (densidade_populacional_cidade_b > densidade_populacional_cidade_a) {
  printf("Densidade Populacional: Carta B Venceu (1)\n");
  }
  
  else {
  printf("Densidade Populacional: Empatados.\n");
  }
  
  if (pib_per_capta_cidade_a > pib_per_capta_cidade_b) {
  printf("PIB per Capita: Carta A Venceu (1)\n");
  }
  
  if (pib_per_capta_cidade_b > pib_per_capta_cidade_a) {
  printf("PIB per Capita: Carta B Venceu (1)\n\n");
  }
  
  else {
  printf("PIB per Capita: Empatados.\n");
  }
  
  printf("\n\n-----------  Comparação de cartas Final Atributo Escolhido ( Atributo: PIB ):  -----------\n");
  
  printf("\nCarta A - %s (%s): PIB: %.2f\n",cidade_a,estado_a,pib_cidade_a);
  printf("Carta B - %s (%s): PIB: %.2f\n",cidade_b,estado_b,pib_cidade_b);
 
  if (pib_cidade_a > pib_cidade_b) {
  printf("\nResultado: Carta A - ( %s ) venceu!\n",cidade_a);
  }
  
  if (pib_cidade_b > pib_cidade_a) {
  printf("\nResultado: Carta B - ( %s ) venceu!\n",cidade_b);
  }
  
  else {
  printf("\nResultado Final: Empatados.\n");
  }
  
  printf("\n----------- © Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n\n");
  	
  return 0;
}
