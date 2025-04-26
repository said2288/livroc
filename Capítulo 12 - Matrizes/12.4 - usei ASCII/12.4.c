/* Usando uma matriz bidimensional, crie um programa para implementar um jogo de campo minado.
   Para preencher as posições da matriz, use números aleatórios de modo que 0(zero) represente uma posição livre
   e 1 represente uma posição com bomba. O usuário vai escolhendo as posições (sem ver o que há nelas) e, caso ele acerte
   todas as posições livres, ele ganha o jogo. O usuário deve ter a chance de cometer até três erros, no máximo.
   Se ele cometer mais de três erros, ele perde o jogo. Durante o jogo, o programa deve apresentar no video a matriz que 
   representa o campo minado: posições livres já escolhidas devem ser marcadas com o símbolo (ASCII 2), posições com
   bombas já escolhidas devem ser marcadas com o símbolo (ASCII 15) e posições ainda  não escolhidas deve ser marcadas
   com o símbolo (ASCII 63), conforme ilustrado a seguir.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void limpar( char t[4][5] );
void mostrar( char t[4][5] );
int selecionarUsuario( char t[4][5], int s );

int main( void ) 
{
	char t[4][5], v = ' ';
	int j = 0, s, contador = 0;

	limpar( t );
	srand(time( NULL ));
	s = rand() % 2;

	do 
	{
		mostrar( t );
		s = selecionarUsuario( t, s );
		if ( s == 1 ) 
	    {
			contador++;
			if ( contador == 3 )
			{
				mostrar( t );
				printf("Voc%c Perdeu\n", 136);
				return 0;
			}
		}
		s = rand() % 2;
		j++;
	} while( j < 21 );

	mostrar( t );
	printf("Voc%c venceu!\n", 136); 
	return 0;	
}


void limpar( char t[4][5]) 
{

	int i, j;

	for( i = 0; i < 4; i++ ) 
	{
		for( j = 0; j < 5; j++ ) 
		{
			t[i][j] = ' ';
		}
	}
}


void mostrar( char t[4][5] ) 
{

	_clrscr();

	for ( int i = 0; i < 4; i++ ) 
		{
        for ( int j = 0; j < 5; j++ ) 
		{
            char exibir = ( t[i][j] == ' ' ) ? '?' : t[i][j];
            printf(" %c ", exibir);
            if ( j < 4 ) printf("|");
        }

        printf("\n");

        if ( i < 3 )
	    {
 		printf("---+---+---+---+---\n");
		}
    }
}

int selecionarUsuario( char t[4][5], int s ) 
{

	int L, C;

	do 
	{
		printf("\n\nPosicao? ");
		scanf("%d %d", &L, &C);
	} while( L < 0 || L > 3 || C < 0 || C > 4 || t[L][C] != ' ' );

	if ( s == 0 ) 
	{
		t[L][C] = 2;
	} else {
		t[L][C] = 15;	
	}

    return s; 

}



