#include <stdio.h>
#include <math.h>
#define TAM 10

	int main () {
	int vet[TAM] = {9, 10, 200, 5, 6, 4, 70, 80, 91}, pos, n, d, menord, lugar, valor;
	
	printf ("Digite um valor para pesquisar: ");
	scanf ("%i", &n);
	
	menord = abs (vet[0]-n); //armazenando a menor distância entre n e o valor no vetor;
	
	//medindo a menor distância entre n e o valor do vetor;
	for (pos = 0; pos < TAM; pos ++) {
		d = abs (vet[pos]-n);
		if (d < menord) {
			menord = d;
			lugar = pos;
			valor = vet [pos];
		}
	}
	
	if (menord == 0) {
		printf ("O valor foi encontrado: %i", valor);
		printf ("\nO valor está na posicao: %i\n", lugar);
		
	}
	else {
		for (pos = 0; pos < TAM; pos ++) {
			d = abs (vet[pos]-n);
			
			if (d == menord) {
				printf ("\nA menor distancia e: %i", menord);
				printf ("\nElemento mais proximo: %i\n", vet[pos]);
				printf ("O valor esta na posicao: %i\n", pos);
			}

		}
	}
	
	return 0;
}
