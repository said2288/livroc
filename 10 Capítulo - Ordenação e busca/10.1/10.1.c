/*10.1 - Digite e teste o programa da Listagem 10.1. O que acontece quando o vetor contém itens repetidos? 
Mesmo assim o programa funciona? Resposta: Sim! Os números repetidos são alinhados um ao lado do outro*/ 

/*Nome que está no livro: bolha.c ordena um vetor usando 0 metodo da bolha*/

#include <stdio.h> 

void preenche( int v[], int n );
void ordena( int v[], int n ); 
void exibe( int v[], int n ); 

int main(void) 
{ 
	int v[5]; 
	preenche( v, 5 ); 
	ordena( v, 5 ); 
	exibe( v, 5 ); 
	return 0;
}	
 
void preenche( int v[], int n ) 
{
	int i; 
	for( i = 0; i < n; i++ ) 
	{
		printf("%do. item? ", i+1);
		scanf("%d", &v[i]); 
	} 
}

void ordena( int v[], int n ) 
{
	int i, j; 
	for( i = 1; i < n; i++ ) 
	{
 		for( j = 0; j < n-i; j++ ) 
		{
			if( v[j] > v[j+1] ) 
			{ 
				int x = v[j];
 				v[j] = v[j+1]; 
				v[j+1] = x; 
			}
		}
	}
}

void exibe( int v[], int n ) 
{
	int i; 
	for( i = 0; i < n; i++ ) 
	{
		printf("%d\n", v[i]);
	}
} 
