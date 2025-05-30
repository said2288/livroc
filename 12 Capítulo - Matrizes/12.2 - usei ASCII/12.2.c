/*Teste o programa da listagem 12.2.*/

/* velha.c - jogo da velha */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void limpar( char t[3][3] );
void mostrar( char t[3][3] );
void usuario( char t[3][3] );
void computador( char t[3][3] );
char vencedor( char t[3][3] );

int main( void ) 
{
	char t[3][3], v;
	int j = 0, e, s;

	printf("par (0) ou impar (1)?");
	scanf("%d", &e);

	srand(time( NULL ));
	s=rand()%2;
	limpar( t );

	do 
	{
		mostrar( t );
		if( e == s ) usuario( t );
		else computador( t );
		j++;
		s = !s;
		v = vencedor( t );
	} while( j < 9 && v == ' ' );

	mostrar( t );

	switch( v )
	{
		case 'x': puts("\n\nVoce ganhou"); break;
		case 'o': puts("\n\nEu ganhei"); break;
		case ' ': puts("\n\nEmpatamos");
	}

	return 0;	
}

void limpar( char t[3][3]) 
{

	int i, j;

	for( i = 0; i < 3; i++ ) 
	{
		for( j = 0; j < 3; j++ ) 
		{
			t[i][j] = ' ';
		}
	}
}

void mostrar( char t[3][3] ) 
{
	int i;

	_clrscr();

	for( i = 0; i < 3; i++ ) 
	{
		printf("\n %c | %c | %c ", t[i][0], t[i][1], t[i][2]);
	    if( i < 2 ) printf("\n---+---+---");
	}
}

void usuario( char t[3][3] ) 
{

	int L, C;

	do 
	{
		printf("\n\nPosicao?");
		scanf("%d %d", &L, &C);
	} while( L < 0 || L > 2 || C < 0 || C > 2 || t[L][C] != ' ' );

	t[L][C] = 'x';
}

void computador( char t[3][3] ) 
{

	int L, C;

	do 
	{
		L = rand()%3;
		C = rand()%3;
	} while( t[L][C] != ' ' );

	t[L][C] = 'o';
}

char vencedor( char t[3][3] ) 
{

	int i;

	for( i = 0; i < 3; i++ ) 
	{
		if( t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][0] != ' ') return t[i][0];
		if( t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[0][i] != ' ') return t[0][i];
	}

	if( t[0][0] == t[1][1] && t[1][1] == t[2][2] && t[0][0] != ' ') return t[0][0];
	if( t[0][2] == t[1][1] && t[1][1] == t[2][0] && t[0][2] != ' ') return t[0][2];

	return ' ';
}


