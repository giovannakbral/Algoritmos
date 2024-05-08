#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int* dados;
	int capacidade; //TAMANHO MÁXIMO DA FILA
	int size; //QUANTIDADE TOTAL DE ELEMENTOS
	int inicio;
	int fim;	
} Fila;

Fila *cria_fila (int capacidade);
void destroi_fila (Fila *f);
int size_fila (Fila *f);
bool fila_vazia (Fila *f);
bool fila_cheia (Fila *f);
void add_elemento (Fila *f, int elemento);
int pesquisa_primeiro_elemento (Fila *f);
int remove_elemento (Fila *f);
void mostrar_fila (Fila *f);

int main () {
	
	int opcao, capacidade, x;
	Fila *f = malloc (sizeof(Fila));
	
	printf ("Qual a capacidade maxima da sua fila? ");
	scanf ("%d", &capacidade);
	f = cria_fila (capacidade);
	
	do {
		//MENU DE OPÇÕES
		printf ("\n");
		printf ("MENU DE ACOES:\n\n");
		printf ("(1) Adicionar elemento;\n");
		printf ("(2) Ver primeiro elemento da fila;\n");
		printf ("(3) Remover elemento;\n");
		printf ("(4) Ver a fila.\n");
		printf ("(0) Sair.\n");
		printf ("\n\nDigite a opcao desejada: ");
		scanf ("%d", &opcao);
		
		switch (opcao) {
			case 1:
				if (fila_cheia(f)) {
					printf ("Fila cheia, nao cabem mais elementos.\n");
				}else {
					printf ("Digite o elemento que deseja adicionar: ");
					scanf("%d", &x);
					add_elemento(f, x);
				}
				break;
			
			case 2:
				printf ("O primeiro elemento da sua fila eh: ");
				
				if(!fila_vazia(f)){
					printf("%i\n", pesquisa_primeiro_elemento(f));
				}				
				
				break;
			
			case 3:
				if(fila_vazia (f)) {
					printf ("A fila esta vazia.\n");
				}else {	
					remove_elemento(f);
				}
				break;
			
			case 4:
				mostrar_fila(f);
				break;
		}
	} 	while (opcao != 0);
	
	destroi_fila(f);
	
	return 0;
}

Fila *cria_fila (int capacidade) {
	
	//ALOCA A STRUCT
	Fila *f = malloc (sizeof(Fila));
	
	f->capacidade = capacidade;
	f->dados  = malloc (sizeof(int)*f->capacidade); //ALOCA A FILA
	f->size   = 0;
	f->inicio = 0;
	f->fim    = 0;
	
	return f;
}

void destroi_fila (Fila *f) {
	free (f->dados);
	free (f);	
}

int size_fila (Fila *f) {
	return f->size;
}

bool fila_vazia (Fila *f) {
	return f->size == 0;
}

bool fila_cheia (Fila *f) {
	return f->size == f->capacidade;
}

void add_elemento (Fila *f, int elemento) {
		f->dados[f->fim] = elemento;
		f->fim = (f->fim + 1) % f->capacidade;
		f->size++;
		printf ("Elemento adicionado!");
}

int pesquisa_primeiro_elemento (Fila *f) {
	return f->dados [f->inicio];
}

int remove_elemento (Fila *f) {
	
	int elemento=0;
	elemento = f->dados [f->inicio];
	f->inicio = (f->inicio + 1) % f->size;
	f->size--;
	
	return elemento;
}

void mostrar_fila(Fila *f) {
	printf("[");
	int i, s;
	for(s=0, i = f->inicio; s < f->size; s++, i = (i+1) % f->capacidade) {
		printf(" %i ", f->dados[i]);
	}
	printf("]\n");
}
