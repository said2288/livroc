/*11.3 - A função strcmp() diferencia maiúsculas de minúsculas. Assim, por exemplo, ela considera que "Ana" e "ANA" são strings distintas.
Usando tolower(), que converte um caractere em minúscula, crie a função strcmpi(), que ignora a diferença entre maiúsculas e minúsculas. 
Baseie-se no código na Listagem 11.9(Do livro)*/ 

#include <stdio.h>
#include <conio.h>

int strcmpi( char a[], char b[] )
{
	int i = 0;

	while( tolower( a[i] ) == tolower( b[i] ) && a[i] != '\0')
	{ 
		i++;
	}

	return a[i] - b[i];
}

int main(void) 
{ 
	char n1[128], n2[128];

	printf("Primeira palavra? ");
	gets( n1 );
	printf("Segunda palavra? ");
	gets( n2 );

	int resultado = strcmpi(n1, n2);

	printf("%d\n", resultado);

	getchar();

	return 0;
}	
 


