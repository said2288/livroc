/*11.2 - Crie uma função que receba uma string como parâmetro e exiba os caracteres dessa string em diagonal. 
Em seguida, crie também um programa principal para testar a sua função , conforme exemplificado a seguir:(No livro)*/ 

#include <stdio.h>
#include <conio.h>

void diagonal( char m[] ) 
{
    int comprimento = strlen( m );

    for ( int i = 0; i < comprimento; i++ ) 
    {
        for ( int j = 0; j < i; j++ ) 
	{
            printf(" ");
        }

	printf("%c\n", m[i]);
    }
} 
 

int main(void) 
{ 
	char m[128];

	while( 1 )
	{
		printf("Digite uma palavra com at%c 10 posi%c%ces: ", 130, 135, 228);
		gets( m );
		if( strlen( m ) <= 10 )
		{
			break;
		}
		puts("Palavra maior que 10 caracteres!");
	} 

	_clrscr();

	diagonal( m );

	getchar();

	return 0;
}	
 


