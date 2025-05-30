/* Ao testar o programa do jogo da velha, você deve ter percebido que, como o computador escolhe sua posição aletoriamente, é
muito fácil de ganhar dele. Para tornar o jogo mais desafiador, podemos fazer uma alteração que torna bastante difícil ganhar do computador.
 A alteração consiste em modificar a função computador() de modo que ela implemente a seguinte estratégia:

1 - [ataque] Encontre duas letras 'o' alinhadas com um espaço em branco e preencha esse espaço em branco com uma terceira letra 'o'.
Nesse caso, o computador vence e o jogo está terminado.

2 - [defesa] Se não for possível vencer o jogo, o computador deve evitar que o usuário o vença. 
Para isso é necessário encontrar duas letras 'x' alinhadas com um espaço em branco e preencher esse espaço em 
branco com uma letra 'o'. Neste caso o computador não vence o jogo, mas tem a chance de vencê-lo na sua próxima jogada.

3 - [aleatório] Se nem o computador nem o usuário estão em condições de vencer o jogo,
 então o computador pode jogar em qualquer posição livre.

Modifique o programa da Listagem 12.2 para funcionar desta maneira.
*/

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
    int L, C, i, j;
    
    for( i = 0; i < 3; i++ ) 
    {
        // Verifica linhas
        if( t[i][0] == 'o' && t[i][1] == 'o' && t[i][2] == ' ' ) { t[i][2] = 'o'; return; }
        if( t[i][0] == 'o' && t[i][2] == 'o' && t[i][1] == ' ' ) { t[i][1] = 'o'; return; }
        if( t[i][1] == 'o' && t[i][2] == 'o' && t[i][0] == ' ' ) { t[i][0] = 'o'; return; }
        
        // Verifica colunas
        if( t[0][i] == 'o' && t[1][i] == 'o' && t[2][i] == ' ' ) { t[2][i] = 'o'; return; }
        if( t[0][i] == 'o' && t[2][i] == 'o' && t[1][i] == ' ' ) { t[1][i] = 'o'; return; }
        if( t[1][i] == 'o' && t[2][i] == 'o' && t[0][i] == ' ' ) { t[0][i] = 'o'; return; }
    }
    
    // Verifica diagonais cima/esquerda -> baixo/direita
    if( t[0][0] == 'o' && t[1][1] == 'o' && t[2][2] == ' ' ) { t[2][2] = 'o'; return; }
    if( t[0][0] == 'o' && t[2][2] == 'o' && t[1][1] == ' ' ) { t[1][1] = 'o'; return; }
    if( t[1][1] == 'o' && t[2][2] == 'o' && t[0][0] == ' ' ) { t[0][0] = 'o'; return; }
    
    // Verifica diagonais cima/direita -> baixo/esquerda
    if( t[0][2] == 'o' && t[1][1] == 'o' && t[2][0] == ' ' ) { t[2][0] = 'o'; return; }
    if( t[0][2] == 'o' && t[2][0] == 'o' && t[1][1] == ' ' ) { t[1][1] = 'o'; return; }
    if( t[1][1] == 'o' && t[2][0] == 'o' && t[0][2] == ' ' ) { t[0][2] = 'o'; return; }
    

    // Caso não seja possível vencer, o computador impedirá que tu vença
    for( i = 0; i < 3; i++ ) 
    {
        // Verifica linhas
        if( t[i][0] == 'x' && t[i][1] == 'x' && t[i][2] == ' ' ) { t[i][2] = 'o'; return; }
        if( t[i][0] == 'x' && t[i][2] == 'x' && t[i][1] == ' ' ) { t[i][1] = 'o'; return; }
        if( t[i][1] == 'x' && t[i][2] == 'x' && t[i][0] == ' ' ) { t[i][0] = 'o'; return; }
        
        // Verifica colunas
        if( t[0][i] == 'x' && t[1][i] == 'x' && t[2][i] == ' ' ) { t[2][i] = 'o'; return; }
        if( t[0][i] == 'x' && t[2][i] == 'x' && t[1][i] == ' ' ) { t[1][i] = 'o'; return; }
        if( t[1][i] == 'x' && t[2][i] == 'x' && t[0][i] == ' ' ) { t[0][i] = 'o'; return; }
    }
    
    // Verifica diagonais cima/esquerda -> baixo/direita
    if( t[0][0] == 'x' && t[1][1] == 'x' && t[2][2] == ' ' ) { t[2][2] = 'o'; return; }
    if( t[0][0] == 'x' && t[2][2] == 'x' && t[1][1] == ' ' ) { t[1][1] = 'o'; return; }
    if( t[1][1] == 'x' && t[2][2] == 'x' && t[0][0] == ' ' ) { t[0][0] = 'o'; return; }
    
    // Verifica diagonais cima/direita -> baixo/esquerda
    if( t[0][2] == 'x' && t[1][1] == 'x' && t[2][0] == ' ' ) { t[2][0] = 'o'; return; }
    if( t[0][2] == 'x' && t[2][0] == 'x' && t[1][1] == ' ' ) { t[1][1] = 'o'; return; }
    if( t[1][1] == 'x' && t[2][0] == 'x' && t[0][2] == ' ' ) { t[0][2] = 'o'; return; }

    // Caso não haja jogada vencedora, mantém comportamento aleatório
	do 
	{
		L = rand()%3;
		C = rand()%3;
	} while( t[L][C] != ' ' );

	t[L][C] = 'o';

    return;
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


