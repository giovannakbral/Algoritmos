#include <stdio.h>
#define TAM 5

int main () {
	double vetPFN [TAM], vetAGT [TAM], maiorPFN, maiorAGT, comp;
	int iPFN, jPFN, iAGT, jAGT, novoPFN, novoAGT, posPFN, posAGT;
	
	//notas de PFN
	printf ("Digite as notas de PFN: \n");
	
		for (iPFN=0; iPFN < TAM; iPFN ++) {
			scanf (" %lf", &vetPFN[iPFN]);
		}
		
	maiorPFN = vetPFN [0];
	iPFN = 0;
		
	for (iPFN=0; iPFN < TAM; iPFN ++) {
		if (vetPFN[iPFN] > maiorPFN) {
			maiorPFN = vetPFN[iPFN];
			posPFN = iPFN;
		}
	}
	
	printf ("\nA maior nota de PFN foi: %.1lf\n", maiorPFN);
	
	for (iPFN=0; iPFN < TAM; iPFN++) {
		for (jPFN=0; jPFN < TAM; jPFN++) {
		
			if (vetPFN [iPFN] < vetPFN [jPFN]) {
				novoPFN = vetPFN [iPFN];
				vetPFN [iPFN] = vetPFN[jPFN];
				vetPFN [jPFN] = novoPFN; 
			}
		}
	}
	
	printf ("\nAs notas de PFN, em ordem, sao: \n");
	for (iPFN=0; iPFN < TAM; iPFN++) {	
		printf (" %.1lf", vetPFN [iPFN]);
	}
	
	
	//notas de AGT
	printf ("\n\nDigite as notas de AGT: \n");
	
		for (iAGT=0; iAGT < TAM; iAGT ++) {
			scanf (" %lf", &vetAGT[iAGT]);
		}
		
	comp = vetAGT[posPFN];
		
	maiorAGT = vetAGT [iAGT];
	iAGT = 0;
		
	for (iAGT=0; iAGT < TAM; iAGT ++) {
		if (vetAGT[iAGT] > maiorAGT) {
			maiorAGT = vetAGT[iAGT];
			posAGT = iAGT;
		}
	}
	
	
	printf ("\n\nA maior nota de AGT foi: %.1lf", maiorAGT);
	printf ("\nO aluno que tirou a maior nota em PFN tirou %.1lf em AGT.", comp);
	
	for (iAGT=0; iAGT < TAM; iAGT++) {
		for (jAGT=0; jAGT < TAM; jAGT++) {
		
			if (vetAGT [iAGT] < vetAGT [jAGT]) {
				novoAGT = vetAGT [iAGT];
				vetAGT [iAGT] = vetAGT[jAGT];
				vetAGT [jAGT] = novoAGT; 
			}
		}
	}
	
	printf ("\nAs notas de AGT, em ordem, sao: \n");
	for (iAGT=0; iAGT < TAM; iAGT++) {	
		printf (" %.1lf", vetAGT [iAGT]);
	}
	
	
	return 0;
}
