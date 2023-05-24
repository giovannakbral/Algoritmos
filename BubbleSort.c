#include <stdio.h>
#define TAM 5

int main () {
	int vet[TAM], i, j, novo;
	
	printf ("Digite 5 valores que deseja ordenar: \n");
	
	for (i=0; i < TAM; i++) {
		scanf ("%i", &vet[i]);
	}
	
	//em qual posição vai o menor valor do vetor
	for (i=0; i < TAM; i++) {
		//ordena o vetor
		for (j=0; j < TAM; j++) {
	
			if (vet [i] < vet [j]) {
				novo = vet [i];
				vet [i] = vet [j];
				vet [j] = novo;
			}
		}
	}
	printf ("\nO vetor ordenado é:\n");
	for (i=0; i < TAM; i++) {	
		printf ("%i", vet [i]);
	}
	
	return 0;
}
