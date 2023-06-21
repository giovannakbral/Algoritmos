#include <stdio.h>
#define TAM 3

int main () {
	
	int matriz [TAM][TAM];
	int lin, col;
	
	printf ("\nDigite os valores da sua matriz:\n");
	
	for (lin=0; lin < TAM; lin ++) {
		for (col=0; col < TAM; col ++) {
		scanf ("%i", &matriz[lin][col]);
		}
	}
	
	printf ("\n\n");
	
	//PRINT DA MATRIZ	
	for (lin=0; lin < TAM; lin ++) {
		printf ("\n");
		for (col=0; col < TAM; col ++) {
		printf ("%i\t", matriz[lin][col]);
		}
	}
	
	//PARA DIAGONAL PRINCIPAL
	printf ("\n\nA diagonal principal é: ");
	for (lin=0; lin < TAM; lin ++) {
		for (col=0; col < TAM; col ++) {
			if (lin == col) {
				printf ("%i ", matriz [lin][col]);
			}
		}
	}
	
	//PARA DIAGONAL SECUNDÁRIA
	printf ("\n\nA diagonal secundária é: ");
	for (lin=0; lin < TAM; lin ++) {
		for (col=0; col < TAM; col ++) {
			if (lin + col == TAM - 1) {
				printf ("%i ", matriz [lin][col]);
			}
		}
	}
	
	return 0;
}
