/*10.3 Um concurso público teve n candidatos. Dada a nota de cada um deles 
(suponha que as notas sejam todas distintas e que haja pelo menos três notas), apresente as três melhores notas eni ordem decrescente.*/

#include <stdio.h> 

void preencheQuantidadeCandidato( int lista[], int quantidadeCandidato );
void ordenaNotasDecrescente( int lista[], int quantidadeCandidato ); 
void exibeNotas( int lista[], int quantidadeCandidato ); 

int main(void) 
{ 
	int quantidadeCandidato = 0;
 
	printf("Quantidade de candidatos que participaram do concurso? ");
	scanf("%d", &quantidadeCandidato); 

	int lista[quantidadeCandidato];
	
	preencheQuantidadeCandidato( lista, quantidadeCandidato ); 
	ordenaNotasDecrescente( lista, quantidadeCandidato ); 
	exibeNotas( lista, quantidadeCandidato ); 
	return 0;
}	
 
void preencheQuantidadeCandidato( int lista[], int quantidadeCandidato ) 
{
	int i; 
	for( i = 0; i < quantidadeCandidato; i++ )
    {
		printf("Nota do %d Candidato: ", i+1);
		scanf("%d", &lista[i]); 
	} 
}

void ordenaNotasDecrescente( int lista[], int quantidadeCandidato ) 
{
	int i, j; 
	for( i = 1; i < quantidadeCandidato; i++ ) 
	{
 		for( j = 0; j < quantidadeCandidato-i; j++ ) 
		{
			if( lista[j] < lista[j+1] ) 
			{ 
				int x = lista[j];
 				lista[j] = lista[j+1]; 
				lista[j+1] = x; 
			}
		}
	}
}

void exibeNotas( int lista[], int quantidadeCandidato ) 
{
	int i; 
	for( i = 0; i < 3; i++ ) 
	{
		printf("Nota: %d\n", lista[i]);
	}
} 
