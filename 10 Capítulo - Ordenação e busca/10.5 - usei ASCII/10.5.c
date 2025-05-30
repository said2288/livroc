/*10.5 Refaça o programa da listagem 10.3, para que as senhas válidas sejam cadastradas pelo usuário,
numa ordem aleatória , e o próprio programa ordene essas senhas antes de realizar a busca binária.*/

/*Nome que está no livro: binaria.c - usa busca binaria para validar uma senha*/

#include <stdio.h>

void ordenaNotasCrescente( int listaSenha[], int quantidadeSenha ); 
int pertence( int x, int v[], int n );

int main(void) 
{
	int quantidadeSenha = 0, i = 0, validarSenha = 0;

		printf("Quantas senhas ser%co cadastradas: ", 198);
		scanf("%d", &quantidadeSenha);

		int listaSenha[quantidadeSenha];

		for( i = 0; i < quantidadeSenha; i++ ) 
		{
			printf("Digite a %d senha: ", i+1);
			scanf("%d", &listaSenha[i]);
		}

		ordenaNotasCrescente( listaSenha, quantidadeSenha );

		printf("Digite a senha que queira v%clidar sua consulta: ", 160);
		scanf("%d", &validarSenha);

		if ( pertence( validarSenha, listaSenha, quantidadeSenha ) )
	    {
			printf("Senha v%clida encontrada com sucesso! \n", 160, 160);
		} else {	
			printf("Senha inv%clida! \n", 160);
		}

	return 0;
}

void ordenaNotasCrescente( int listaSenha[], int quantidadeSenha ) 
{
	int i, j; 
	for( i = 1; i > quantidadeSenha; i++ ) 
	{
 		for( j = 0; j < quantidadeSenha-i; j++ ) 
		{
			if( listaSenha[j] < listaSenha[j+1] ) 
			{ 
				int x = listaSenha[j];
 				listaSenha[j] = listaSenha[j+1]; 
				listaSenha[j+1] = x; 
			}
		}
	}
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

