#include <stdio.h>
#include <math.h>
#define TAM 3

int main () {
	int matriz [TAM][TAM];
	int lin, col, total;
	
	printf ("Digite os valores da sua matriz:\n");
	
	for (lin=0; lin < TAM; lin ++) {
		for (col = 0; col < TAM; col ++) {
			scanf ("%i", &matriz[lin][col]);
		}
	}
	
	
	//PRINTA A MATRIZ ESCOLHIDA
	printf ("\nA matriz escolhida é: \n");

	for (lin=0; lin < TAM; lin ++) {
		printf ("\n");
		for (col = 0; col < TAM; col ++) {
			printf ("%i\t", matriz[lin][col]);
		}
	}
	
	
	//NÃO SEI PRINTAR A MATRIZ COM OS VALORES SELECIONADOS,
	//SENDO ASSIM, VOU PRINTAR OS ELEMENTOS DA DIAGONAL PRINCIPAL
	//E OS ELEMENTOS DA DIAGONAL SECUNDÁRIA
	
	printf ("\n\nDiagonal principal: ");

	for (lin=0; lin < TAM; lin ++) {
		printf ("\n");
		for (col = 0; col < TAM; col ++) {
			if (lin == col) {
					printf ("%i\t ", matriz[lin][col]);
			}
		}
	}
	
	printf ("\n\nDiagonal secundária: ");
	
	for (lin=0; lin < TAM; lin ++) {
		printf ("\n");
		for (col = 0; col < TAM; col ++) {
			if (lin + col == TAM - 1) {
					printf ("%i\t ", matriz[lin][col]);
			}
		}
	}
	
	//PRINTA O TOTAL DE ELEMENTOS DA SELEÇÃO CONFORME SOLICITADO PELA QUESTÃO
	total = pow (TAM,2) - pow (2, TAM-2);
	printf ("\n\nb) Total de valores: %i", total);
	
	return 0;
}
