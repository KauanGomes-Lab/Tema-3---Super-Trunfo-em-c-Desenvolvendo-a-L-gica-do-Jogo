// Criado Por Kauan Gomes - Github: ----------- © ( https://github.com/KauanGomes-Lab ) © ----------- :

#include <stdio.h>

int main () {

char 
pais_a[50], // Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
pais_b[50]; // Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres

float 
area_pais_a, // Variavel Responsavel Por Armazenar o valor da Área do Pais A.
area_pais_b, // Variavel Responsavel Por Armazenar o valor da Área do Pias B.
pib_pais_a, // Variavel Responsavel Por Armazenar o valor do PIB do Pais A.
pib_pais_b, // Variavel Responsavel Por Armazenar o valor do PIB do Pais B.
densidade_demografica_pais_a, // Variavel Responsavel Por Armazenar o valor da Densidade Demografica do Pais A.
densidade_demografica_pais_b, // Variavel Responsavel Por Armazenar o valor da Densidade Demografica do Pais B.
pib_per_capta_pais_a, // Variavel Responsavel Por Armazenar o valor do PIB Per Capta Do Pais A.
pib_per_capta_pais_b; // Variavel Responsavel Por Armazenar o valor do PIB Per Capta Do Pais B.

int 
populacao_pais_a,  // Variavel Responsavel Por Armazenar o valor da População do Pais A.
populacao_pais_b, // Variavel Responsavel Por Armazenar o valor da População do Pais B.
pontos_turisticos_a, // Variavel Responsavel Por Armazenar o valor da Pontos Turisticos do Pais A.
pontos_turisticos_b; // Variavel Responsavel Por Armazenar o valor da Pontos Turisticos do Pais B.

int 
dados, // Variavel Responsavel Por Armazenar o valor das Entradas de Dados dos Switches Abaixo.
dados2; // Variavel Responsavel Por Armazenar o valor das Entradas de Dados dos Switches Abaixo.

// Formula do Calculo desidade demografica das Cartas:
densidade_demografica_pais_a = populacao_pais_a / area_pais_a;
densidade_demografica_pais_b = populacao_pais_b / area_pais_b;

// Formula do Calculo de PIB Per Capta das Cartas:
pib_per_capta_pais_a = pib_pais_a / populacao_pais_a;
pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;

printf("\nSuper Trunfo : Tema 3 - Mestre. -----------");

printf("\n\nEscolha o Atributo Desejado Para a Comparação:\n\n");
printf("1 - População :\n");
printf("2 - Àrea :\n");
printf("3 - PIB :\n");	
printf("4 - Número de pontos turísticos :\n");
printf("5 - Densidade Demografica :\n");
printf("6 - PIB Per Capta :\n\n");

printf("Digite a Opção Desejada:\n");
scanf("%d", &dados);

switch (dados) {

case 1:
	printf("\nDigigte o nome do pais A: \n");
	scanf(" %99[^\n]", pais_a);
	printf("\ndigite a população do pais A:\n");
	scanf("%d", &populacao_pais_a);
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");	
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	
		switch (dados2) {
		
		case 1:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (populacao_pais_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == populacao_pais_b || populacao_pais_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 2:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
		
			printf("\nDigite à Àrea do Pais B:\n");
			scanf("%f", &area_pais_b);
		
			if (populacao_pais_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (area_pais_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == area_pais_b || area_pais_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (populacao_pais_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Km².\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Km².\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == pib_pais_b || pib_pais_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigite o Nome do Pais A:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o Número de Pontos Turisticos do Pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (populacao_pais_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : (%d) Km².\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : (%d) Km².\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == pontos_turisticos_b || pontos_turisticos_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
				
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
		
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
				
			// Formula do Calculo desidade demografica das Cartas:
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
				
			if (populacao_pais_a > densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == densidade_demografica_pais_b || densidade_demografica_pais_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (populacao_pais_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n", pais_a, populacao_pais_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - População : (%d) Individuos.\n\n", pais_a, populacao_pais_a);
			}if (populacao_pais_a == pib_per_capta_pais_b || pib_per_capta_pais_b == populacao_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
			}
break;

case 2:
	printf("\nDigigte o nome do pais A: \n");
	scanf(" %99[^\n]", pais_a);
	printf("\ndigite a Área do pais A:\n");
	scanf("%f", &area_pais_a);
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");	
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	
		switch (dados2) {
		
		case 1:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (area_pais_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, area_pais_a);
			}if (area_pais_a == populacao_pais_b || populacao_pais_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 2:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
		
			printf("\nDigite à Àrea do Pais B:\n");
			scanf("%f", &area_pais_b);
		
			if (area_pais_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (area_pais_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, area_pais_a);
			}if (area_pais_a == area_pais_b || area_pais_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (area_pais_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, area_pais_a);
			}if (area_pais_a == pib_pais_b || pib_pais_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigite o Nome do Pais A:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o Número de Pontos Turisticos do Pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (area_pais_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, area_pais_a);
			}if (area_pais_a == pontos_turisticos_b || pontos_turisticos_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
			
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
				
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
		
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
				
			// Formula do Calculo desidade demografica das Cartas:
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
				
			if (area_pais_a > densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			}if (area_pais_a == densidade_demografica_pais_b || densidade_demografica_pais_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (area_pais_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Individuos.\n", pais_a, area_pais_a);
			}if (area_pais_a == pib_per_capta_pais_b || pib_per_capta_pais_b == area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		}
break;

case 3:
	printf("\nDigigte o nome do pais A: \n");
	scanf(" %99[^\n]", pais_a);
	
	printf("\nDigite o PIB do Pais A:\n");
	scanf("%f", &pib_pais_a);
	
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");	
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	
	switch (dados2) {
	
		case 1:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (pib_pais_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_a, pib_pais_a);
			}if (pib_pais_a == populacao_pais_b || populacao_pais_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 2:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite á Área do Pais B:\n");
			scanf("%f", &area_pais_b);
			
			if (pib_pais_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (populacao_pais_b > pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_a, pib_pais_a);
			}if (pib_pais_a == area_pais_b || area_pais_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (pib_pais_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_a, pib_pais_a);
			}if (pib_pais_a == pib_pais_b || pib_pais_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigite o Número de Pontos Turisticos do Pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (pib_pais_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Individuos.\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > area_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - Área : (%.2f) Km².\n\n", pais_a, pib_pais_a);
			}if (pib_pais_a == pontos_turisticos_b || pontos_turisticos_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
				
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
		
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
				
			// Formula do Calculo desidade demografica das Cartas:
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
				
			if (pib_pais_a > densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Individuos.\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b > pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - PIB : (%.2f) Individuos.\n", pais_a, pib_pais_a);
			}if (pib_pais_a == densidade_demografica_pais_b || densidade_demografica_pais_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (pib_pais_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB : (%.2f) Individuos.\n", pais_a, pib_pais_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - PIB : (%.2f) Individuos.\n\n", pais_a, pib_pais_a);
			}if (pib_pais_a == pib_per_capta_pais_b || pib_per_capta_pais_b == pib_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		}
break;

case 4:
	printf("\nDigigte o nome do pais A: \n");
	scanf(" %99[^\n]", pais_a);
	
	printf("\nDigite o Número de Pontos Turisticos Do Pais A: \n");
	scanf("%d", &pontos_turisticos_a);
	
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");	
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	
	switch (dados2) {
	
		case 1:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (pontos_turisticos_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == populacao_pais_b || populacao_pais_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 2:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a Área do Pais B:\n");
			scanf("%f", &area_pais_b);
			
			if (pontos_turisticos_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (area_pais_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Área : (%.2f) Km².\n\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == area_pais_b || area_pais_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigite o Nome do Pais B:\n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (pontos_turisticos_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == pib_pais_b || pib_pais_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite o Número de Pontos Turisticos do pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (pontos_turisticos_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == pontos_turisticos_b || pontos_turisticos_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
	
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
			
			// Formula do Calculo desidade demografica das Cartas:
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
			
			if (pontos_turisticos_a > densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == densidade_demografica_pais_b || densidade_demografica_pais_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (pontos_turisticos_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n", pais_a, pontos_turisticos_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_a, pontos_turisticos_a);
			}if (pontos_turisticos_a == pib_per_capta_pais_b || pib_per_capta_pais_b == pontos_turisticos_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		}
break;

case 5:
	printf("\nDensidade Demografica do País A:\n\n");
	
	printf("Digite o Nome do País A: \n");
	scanf(" %99[^\n]", pais_a);
	
	printf("\nDigite a População do pais A:\n");
	scanf("%d", &populacao_pais_a);
	
	printf("\nDigite a Area do pais A:\n");
	scanf("%f", &area_pais_a);
	
	// Formula do Calculo desidade demografica das Cartas:
	densidade_demografica_pais_a = populacao_pais_a / area_pais_a;
	densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
	
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	switch (dados2) {
	
		case 1:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (densidade_demografica_pais_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == populacao_pais_b || populacao_pais_b == densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}	
		break;
		
		case 2:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a Àrea do pais B:\n");
			scanf("%f", &area_pais_b);
			
			if (densidade_demografica_pais_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - Àrea : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (area_pais_b > densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Àrea : (%.2f) Km².\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == area_pais_b || area_pais_b == densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a PIB do pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (densidade_demografica_pais_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == pib_pais_b || pib_pais_b == densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite o Número de Pontos Turisticos do pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (densidade_demografica_pais_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == pontos_turisticos_b || pontos_turisticos_b == densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
	
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
			
			// Formula do Calculo desidade demografica das Cartas:
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
			
			if (densidade_demografica_pais_a < densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b < densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == densidade_demografica_pais_b || densidade_demografica_pais_b ==	densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (densidade_demografica_pais_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_a, densidade_demografica_pais_a);
			}if (densidade_demografica_pais_a == pib_per_capta_pais_b || pib_per_capta_pais_b == densidade_demografica_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		}
break;

case 6:
	printf("\nPIB - Per Capta\n");
	printf("\nDigigte o nome do pais A: \n");
	scanf(" %99[^\n]", pais_a);
	printf("\nDigite o PIB do Pais A:\n");
	scanf("%f", &pib_pais_a);
	printf("\nDigite à População do Pais A:\n");
	scanf("%d", &populacao_pais_a);
	
	// Formula do Calculo PIB Per Capta da Carta A.
	pib_per_capta_pais_a = pib_pais_a / populacao_pais_a;
	
	printf("\n%f.\n", pib_per_capta_pais_a);
	
	printf("\nEscolha o Segundo Atributo Desejado Para a Comparação:\n");
	printf("1 - População :\n");
	printf("2 - Àrea :\n");
	printf("3 - PIB :\n");
	printf("4 - Número de pontos turísticos :\n");
	printf("5 - Densidade Demografica :\n");
	printf("6 - PIB Per Capta :\n\n");
	
	scanf("%d", &dados2);
	switch (dados2) {
	
		case 1:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			if (pib_per_capta_pais_a > populacao_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n\n", pais_b, populacao_pais_b);
			}if (populacao_pais_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - População : (%d) Individuos.\n", pais_b, populacao_pais_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == populacao_pais_b || populacao_pais_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}	
		break;
		
		case 2:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a Àrea do pais B:\n");
			scanf("%f", &area_pais_b);
			
			if (pib_per_capta_pais_a > area_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - Àrea : (%.2f) Km².\n\n", pais_b, area_pais_b);
			}if (area_pais_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Àrea : (%.2f) Km².\n\n", pais_b, area_pais_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == area_pais_b || area_pais_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 3:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite a PIB do pais B:\n");
			scanf("%f", &pib_pais_b);
			
			if (pib_per_capta_pais_a > pib_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			}if (pib_pais_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB : (%.2f) Reais.\n\n", pais_b, pib_pais_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == pib_pais_b || pib_pais_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 4:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			printf("\ndigite o Número de Pontos Turisticos do pais B:\n");
			scanf("%d", &pontos_turisticos_b);
			
			if (pib_per_capta_pais_a > pontos_turisticos_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			}if (pontos_turisticos_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Número de Pontos Turisticos : %d.\n\n", pais_b, pontos_turisticos_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == pontos_turisticos_b || pontos_turisticos_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 5:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite a População do pais B:\n");
			scanf("%d", &populacao_pais_b);
	
			printf("\nDigite a Area do pais B:\n");
			scanf("%f", &area_pais_b);
			
			densidade_demografica_pais_b = populacao_pais_b / area_pais_b;
			
			if (pib_per_capta_pais_a > densidade_demografica_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n\n", pais_b, densidade_demografica_pais_b);
			}if (densidade_demografica_pais_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - Densidade Demografica : %.2f Habitantes Por Km².\n", pais_b, densidade_demografica_pais_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == densidade_demografica_pais_b || densidade_demografica_pais_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		
		case 6:
			printf("\nDigigte o Nome do pais B: \n");
			scanf(" %99[^\n]", pais_b);
			
			printf("\nDigite o PIB do Pais B:\n");
			scanf("%f", &pib_pais_b);
			
			printf("\nDigite à População do Pais B:\n");
			scanf("%d", &populacao_pais_b);
			
			// Formula do Calculo PIB Per Capta da Carta B.
			pib_per_capta_pais_b = pib_pais_b / populacao_pais_b;
			
			if (pib_per_capta_pais_a > pib_per_capta_pais_b) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais A - ( %s ) - Venceu.\n\n", pais_a);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_a);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			}if (pib_per_capta_pais_b > pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Pais B - ( %s ) - Venceu.\n\n", pais_b);
			printf("Pais B : ( %s ) - PIB - Per Capta : %.2f Reais.\n", pais_a, pib_per_capta_pais_b);
			printf("Pais A : ( %s ) - PIB - Per Capta : %.2f Reais.\n\n", pais_a, pib_per_capta_pais_a);
			}if (pib_per_capta_pais_a == pib_per_capta_pais_b || pib_per_capta_pais_b == pib_per_capta_pais_a) {
			printf("\n----------- Resultado da Comparação: -----------\n\n");
			printf("Resultado Final : ( %s ) e ( %s ) Empatados.\n\n", pais_a , pais_b);}
		break;
		}
break;

default:
	printf("\nErro - Execute o Programa Novamente.\n");
	printf("\n© Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n\n");
break;
}
return 0;
}
