 #include <stdio.h>
 #include <stdlib.h>
 #define N 250
 #define C 12
 
 typedef struct {
 	char nome[N];
	char cpf [C];
	int relacao;
} Dependente;
 
 typedef struct {
 	char nome[N];
 	char cpf[C];
 	int depend;
 	int ano_admissao;
 	int estado_civil;
 	Dependente parente;
 } Pessoa;
 
void cadastro_pessoa (Pessoa *p, int n);
void cadastro_dependente (Pessoa *d, int nd);
void mostra_pessoa (Pessoa *p, int n);
void mostra_dependente (Pessoa *d, int nd);

 int main () {
 	
 	Pessoa *p, *d;
 	int n, nd, i, j;
 	
 	printf ("Digite quantos funcionarios deseja cadastrar: ");
	scanf ("%d", &n);
	
	p = malloc (sizeof(Pessoa)*n);
	
	for (i=0; i < n; i++) {
		
		cadastro_pessoa (p, i);
		
		if (p[i].depend != 0) {
			printf ("\n\nDigite os dados do (s) dependente (s):\n");
			d = malloc (sizeof(Pessoa)*(p[i].depend));
			for (j=0; j < p[i].depend; j++) {
				cadastro_dependente (d, j);
			}
		}
	}
	
	for (i=0; i < n; i++) {
		
		if (p[i].depend == 0) {
			mostra_pessoa (p, i);
		} else {
			mostra_pessoa (p, i);
			for (j=0; j < p[i].depend; j++) {
				mostra_dependente (d, j);
			}
		} 
	}
 	
 	return 0;
 }
 
 void cadastro_pessoa (Pessoa *p, int n) {
 	printf ("Digite o nome funcionario %d: ", n+1);
 		scanf ("%s", &p[n].nome);
 	printf ("\nDigite o CPF: ");
 		scanf ("%s", &p[n].cpf);
 	printf ("\nDigite o numero de dependentes: ");
		scanf ("%d", &p[n].depend);
	printf ("\nDigite o ano de admissao: ");
		scanf ("%d", &p[n].ano_admissao);
	printf ("Digite o estado civil:\n(1) Solteiro\n(2) Casado/Uni�o est�vel\n(3) Divorciado\n(4) Viuvo\n");
		scanf ("%d", &p[n].estado_civil); 	
 }
 
  void cadastro_dependente (Pessoa *d, int nd) {
 	printf ("Digite o nome do dependente: ");
 		scanf (" %s", &d[nd].parente.nome);
 	printf ("\nDigite o CPF: ");
 		scanf (" %s", &d[nd].parente.cpf);
	printf ("Digite o grau de parentesco:\n(1) Conjuge\n(2) Filho (a)/enteado (a)\n(3) Mae\n(4) Pai\n");
		scanf (" %d", &d[nd].parente.relacao);	
 }
 
 void mostra_pessoa (Pessoa *p, int n) {
 	printf ("------------------- DADOS DO FUNCIONARIO %d:\n\n", n+1);
  	printf ("Nome: %s", p[n].nome);
 	printf ("\nCPF: %s", p[n].cpf);
 	printf ("\nNumero de dependentes: %d", p[n].depend);
	printf ("\nAno de admissao: %d", p[n].ano_admissao);
	printf ("\nEstado civil:\n(1) Solteiro\n(2)Casado/Uni�o est�vel\n(3) Divorciado\n(4) Viuvo\nResposta: %d\n\n", p[n].estado_civil);
}

 void mostra_dependente (Pessoa *d, int nd) {
 	printf ("\n\n");
 	 	printf ("------------------- DADOS DO DEPENDENTE:\n\n");
  	printf ("Nome do dependente: %s", d[nd].parente.nome);
 	printf ("\nCPF do dependente: %s", d[nd].parente.cpf);
	printf ("\nGrau de parentesco:\n(1) Conjuge\n(2) Filho (a)/enteado (a)\n(3) Mae\n(4) Pai\nResposta: %d\n\n", d[nd].parente.relacao);
}
