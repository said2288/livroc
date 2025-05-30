/*Teste o programa da listagem 12.1. Em seguida, modifique-o de modo que ele leia dez nomes de até 30 posições e os exiba em ordem
alfabética decrescente*/

/* alfa.c - ordena em ordem alfabetica

#include <stdio.h>
#include <string.h>

void ler( char m[][31], int n ) 
{

    int i;

    for ( i = 0; i < n; i++ ) 
    {
        printf("%do. nome? ", i + 1);
        gets(m[i]);
    }
}

void ordenar( char m[][31], int n ) 
{

    int i, j;

    for ( i = 1; i < n; i++ )
    {
        for ( j = 0; j < n - i; j++ )
		{
            if ( strcmp( m[j], m[j + 1]) > 0 ) 
	    {
                char x[31];
                strcpy( x, m[j] );
                strcpy( m[j], m[j + 1] );
                strcpy( m[j + 1], x );
            }
       }
    }
}

void exibir( char m[][31], int n ) 
{

    int i;

    for (  i = 0; i < n; i++ )
    {
        printf("%do. nome: %s\n", i + 1, m[i]);
    }
}

int main() 
{
    char m[5][31];

    ler( m, 5 );
    ordenar( m, 5 );
    puts("\nOrdem alfabética:\n");
    exibir( m, 5 );
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

void ler( char m[][31], int n ) 
{

    int i;

    for ( i = 0; i < n; i++ ) 
    {
        printf("%do. nome? ", i + 1);
        gets(m[i]);
    }
}

void ordenar( char m[][31], int n ) 
{

    int i, j;

    for ( i = 1; i < n; i++ )
    {
        for ( j = 0; j < n - i; j++ )
	{
            if ( strcmp( m[j], m[j + 1]) < 0 ) 
	    {
                char x[31];
                strcpy( x, m[j] );
                strcpy( m[j], m[j + 1] );
                strcpy( m[j + 1], x );
            }
	}
    }
}

void exibir( char m[][31], int n ) 
{

    int i;

    for (  i = 0; i < n; i++ )
    {
        printf("%do. nome: %s\n", i + 1, m[i]);
    }
}

int main() 
{

    char m[10][31];

    ler( m, 10 );
    ordenar( m, 10 );
    printf("\nOrdem alfab%ctica decrescente:\n", 130);
    exibir( m, 10 );
    return 0;
}
