/*11.1 - O programa da Listagem 11.3 define a função strlen(), que está disponível em string.h. 
Execute-o para ver o seu funciomamento e depois altere-o para que ele use a versão predefinida dessa função*/ 

/*Centraliza.c - centraliza uma mensagem no video*/

#include <stdio.h>
#include <conio.h>

void centraliza( char m[], int y ) 
{
	_gotoxy( ( 80 - strlen( m ) ) / 2 + 1, y );
	puts(m);
} 
 

int main(void) 
{ 
	char m[128];

	while( 1 )
	{
		printf("Digite uma mensagem com at%c 80 posi%c%ces: ", 130, 135, 228);
		gets( m );
		if( strlen( m ) <= 80 )
		{
			break;
		}
		puts("Mensagem muito longa!");
	} 

	_clrscr();
	centraliza( m, 13 );
	getchar();

	return 0;
}	
 


