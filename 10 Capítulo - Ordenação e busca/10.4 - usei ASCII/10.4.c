/*10.4 Altere o programa da listagem 10.3, considerando que há também um vetor A com cinco senhas de administradores de sistema.
Dada uma senha, o programa deve verificar se ela é uma senha de usuário, de administrador ou inválida.*/

/*Nome que está no livro: binaria.c - usa busca binaria para validar uma senha*/

#include <stdio.h>

int pertence( int x, int v[], int n );

int main(void) 
{
	int U[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
	int A[5] = {2, 4, 6, 8, 10};
	int x;

	while( 1 ) 
	{
		printf("Senha: ");
		scanf("%d", &x);
		if( pertence( x, U, 9 ) ) 
	    {
			printf("Senha v%clida de usu%crio! \n", 160, 160);
			break;
		} else if ( pertence( x, A, 5 ) ) 
	    {
			printf("Senha v%clida de administrador! \n", 160);
			break;
		}

		printf("Senha inv%clida! \n", 160);
	}

	return 0;
}

int pertence( int x, int v[], int n )
{
	int i = 0, f = n - 1, m;
	while( i <= f )
	{
		m = ( i + f ) / 2;
		if( x == v[m] )
	    {
			return 1;
		}
		if( x < v[m] )
	    {
			f = m - 1;
		} else {
			i = m + 1;
		}
	}

	return 0;
}
