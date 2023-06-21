#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char minus (char texto [1000], int i);

int main () {
	
	char texto [1000] = "Todo ser humano tem direito a vida, a liberdade e a segurança pessoal. NINGUEM sera mantido em escravidao ou servidao; a escravidao e o trafico de escravos serao proibidos em todas as suas formas. Ninguem sera submetido a tortura, nem a tratamento ou castigo cruel, desumano ou degradante.";
	int i;
	int A=0, E=0, I=0, O=0, U=0;
	int letras=0, espaco=0;
	
	////LETRA A
	for (i=0; i < 1000; i++) {
		minus;
		if (isalpha (texto [i])) {
			letras = letras + 1;
		}
	}
	
	printf ("Total de letras: %i.\n", letras);
	
	
	////LETRA B
	// VOGAL A
	for (i=0; i < 1000; i++) {
		if (texto [i] == 'a' || texto [i] == 'A') {
			A = A + 1;
		}
	}
 		printf ("\nTotal a: %i", A);
 	
 	//VOGAL E
	for (i=0; i < 1000; i++) {
		if (texto [i] == 'e' || texto [i] == 'E') {
			E = E + 1;
		}
	}
 		printf ("\nTotal e: %i", E);
 	
 	//VOGAL I
 		for (i=0; i < 1000; i++) {
		if (texto [i] == 'i' || texto [i] == 'I') {
			I = I + 1;
		}
	}
 	 printf ("\nTotal i: %i", I);
 	
 	//VOGAL O
 		for (i=0; i < 1000; i++) {
		if (texto [i] == 'o' || texto [i] == 'O') {
			O = O + 1;
		}
	}
 		printf ("\nTotal o: %i", O);
 	
 	//VOGAL U
 		for (i=0; i < 1000; i++) {
		if (texto [i] == 'u' || texto [i] == 'U') {
			U = U + 1;
		}
	}
	 	printf ("\nTotal u: %i", U);
	 	
	////lETRA C
	for (i=0; i < 1000; i++) {
		if (isspace (texto [i])) {
			espaco = espaco + 1;
		}
	}
	 	printf ("\n\nTotal espaços: %i", espaco);

	return 0;
}

	//FUNÇÃO MINUS QUE CONVERTE MAIÚSCULA EM MINÚSCULA
	char minus (char texto [1000], int i) {
	
		for (i=0; i < 1000; i++) {
			char minus [1000];
			minus [i] = tolower(texto[i]);
			}
						
		return minus;
			}
