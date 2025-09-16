#include <stdio.h>

int main () {

char 
pais_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
pais_b[50]; // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.

float 
area_pais_a, // Variavel que Armazena a Area Digitados A.
area_pais_b, // Variavel que Armazena a Area Digitados B.
pib_pais_a, // Variavel que Armazena o PIB A.
pib_pais_b, // Variavel que Armazena o PIB B.
densidade_demografica_pais_a, // Variavel que Armazena a Densidade Populacional A.
densidade_demografica_pais_b; // Variavel que Armazena a Densidade Populacional B.

int 
populacao_pais_a, // Variavel que Armazena a População A.
populacao_pais_b, // Variavel que Armazena a População B.
pontos_turisticos_a, // Variavel que Armazena o Numero de Pontos Turiscos A.
pontos_turisticos_b; // Variavel que Armazena o Numero de Pontos Turiscos B.

int dados;

printf("\n-----------  Super Trunfo : Tema 3 - Aventureiro. -----------");

printf("\n\nEscolha o Atributo Desejado Para a Comparação:\n");
printf("\n1 - População :\n");
printf("2 - Àrea :\n");
printf("3 - PIB :\n");
printf("4 - Número de pontos turísticos :\n");
printf("5 - Densidade Demográfica :\n\n");

printf("Digite a Opção Desejada:\n");
scanf("%d", &dados);

switch (dados) {
case 1: // População
	printf("Digite o Nome do Pais 1:\n");
	scanf(" %99[^\n]", pais_a);
	printf("Digite o Nome do Pais 2:\n");
	scanf(" %99[^\n]", pais_b);
	printf("Digite à População do Pais 1:\n");
	scanf("%d", &populacao_pais_a);
	printf("Digite à População do Pais 2:\n");
	scanf("%d", &populacao_pais_b);
	
	printf("\n\nPaís 1: %s\n", pais_a);
	printf("País 2: %s\n", pais_b);
	printf("Atributo Usado na Comparação: População.\n");
	printf("População País 1: %d\n", populacao_pais_a);
	printf("População País 2: %d\n\n", populacao_pais_b);
	
	if (populacao_pais_a == populacao_pais_b){
	printf("Resultado: Empatados.\n\n");
	}else if (populacao_pais_a > populacao_pais_b) {
	printf("Resultado: Carta 1: %s Venceu.\n\n", pais_a);
	}else if (populacao_pais_a < populacao_pais_b) {
	printf("Resultado: Carta 2: %s Venceu.\n\n", pais_b);
	}
break;	
case 2: // Àrea
	printf("Digite o Nome do Pais 1:\n");
	scanf(" %99[^\n]", pais_a);
	printf("Digite o Nome do Pais 2:\n");
	scanf(" %99[^\n]", pais_b);
	printf("Digite à Àrea do Pais 1:\n");
	scanf("%f", &area_pais_a);
	printf("Digite à Àrea do Pais 2:\n");
	scanf("%f", &area_pais_b);
	
	printf("\n\nPaís 1: %s\n", pais_a);
	printf("País 2: %s\n", pais_b);
	printf("Atributo Usado na Comparação: Àrea.\n");
	printf("Àrea País 1: %.2f (Km²).\n", area_pais_a);
	printf("Àrea País 2: %.2f (Km²).\n\n", area_pais_b);
	
	if (area_pais_a == area_pais_b){
	printf("Resultado: Empatados.\n\n");
	}else if (area_pais_a > area_pais_b) {
	printf("Resultado: Carta 1: %s Venceu.\n\n", pais_a);
	}else if (area_pais_a < area_pais_b) {
	printf("Resultado: Carta 2: %s Venceu.\n\n", pais_b);
	}
break;
case 3:  // PIB
	printf("Digite o Nome do Pais 1:\n");
	scanf(" %99[^\n]", pais_a);
	printf("Digite o Nome do Pais 2:\n");
	scanf(" %99[^\n]", pais_b);
	printf("Digite à PIB do Pais 1:\n");
	scanf("%f", &pib_pais_a);
	printf("Digite à PIB do Pais 2:\n");
	scanf("%f", &pib_pais_b);
	
	printf("\n\nPaís 1: %s\n", pais_a);
	printf("País 2: %s\n", pais_b);
	printf("Atributo Usado na Comparação: PIB.\n");
	printf("PIB País 1: %.2f\n", pib_pais_a);
	printf("PIB País 2: %.2f\n\n", pib_pais_b);
	
	if (pib_pais_a == pib_pais_b){
	printf("Resultado: Empatados.\n\n");
	}else if (pib_pais_a > pib_pais_b) {
	printf("Resultado: Carta 1: %s Venceu.\n\n", pais_a);
	}else if (pib_pais_a < pib_pais_b) {
	printf("Resultado: Carta 2: %s Venceu.\n\n", pais_b);
	}
break;
case 4: // Número de pontos turísticos
	printf("Digite o Nome do Pais 1:\n");
	scanf(" %99[^\n]", pais_a);
	printf("Digite o Nome do Pais 2:\n");
	scanf(" %99[^\n]", pais_b);
	printf("Digite Número de pontos turísticos do Pais 1:\n");
	scanf("%d", &pontos_turisticos_a);
	printf("Digite Número de pontos turísticos do Pais 2:\n");
	scanf("%d", &pontos_turisticos_b);
	
	printf("\n\nPaís 1: %s\n", pais_a);
	printf("País 2: %s\n", pais_b);
	printf("Atributo Usado na Comparação: Número de pontos turísticos.\n");
	printf("Número de pontos turísticos País 1: %d\n", pontos_turisticos_a);
	printf("Número de pontos turísticos País 2: %d\n\n", pontos_turisticos_b);
	
	if (pontos_turisticos_a == pontos_turisticos_b){
	printf("Resultado: Empatados.\n\n");
	}else if (pontos_turisticos_a > pontos_turisticos_b) {
	printf("Resultado: Carta 1: %s Venceu.\n\n", pais_a);
	}else if (pontos_turisticos_a < pontos_turisticos_b) {
	printf("Resultado: Carta 2: %s Venceu.\n\n", pais_b);
	}
break;
case 5: // Densidade Demográfica]
	printf("Digite o Nome do Pais 1:\n");
	scanf(" %99[^\n]", pais_a);
	printf("Digite o Nome do Pais 2:\n");
	scanf(" %99[^\n]", pais_b);
	printf("Digite à População do Pais 1:\n");
	scanf("%d", &populacao_pais_a);
	printf("Digite à Àrea do Pais 1:\n");
	scanf("%f", &area_pais_a);
	printf("Digite à População do Pais 2:\n");
	scanf("%d", &populacao_pais_b);
	printf("Digite à Àrea do Pais 2:\n");
	scanf("%f", &area_pais_b);
	
	densidade_demografica_pais_a = populacao_pais_a / area_pais_a;
	densidade_demografica_pais_b = populacao_pais_b / area_pais_b;

	printf("\nPaís 1: %s\n", pais_a);
	printf("País 2: %s\n", pais_b);
	printf("Atributo Usado na Comparação: Densidade Demográfica.\n");
	printf("Densidade Demográfica País 1: %.2f\n", densidade_demografica_pais_a);
	printf("Densidade Demográfica País 2: %.2f\n\n", densidade_demografica_pais_b);
	
	if (densidade_demografica_pais_a == densidade_demografica_pais_b){
	printf("Resultado: Empatados.\n\n");
	}else if (densidade_demografica_pais_a < densidade_demografica_pais_b) {
	printf("Resultado: Carta 1: %s Venceu.\n\n", pais_a);
	}else if (densidade_demografica_pais_b < densidade_demografica_pais_a) {
	printf("Resultado: Carta 2: %s Venceu.\n\n", pais_b);
	}
	printf("Na Densidade Demográfica o País Com Menor Valor Vence.\n\n");
break;
default:
  printf("\n----------- © Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n");
break;
}
return 0;
}
