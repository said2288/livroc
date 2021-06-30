/*6.3 - Um número natural é denominado triangular se é igual à soma dos n primeiros números naturais consecutivos, a partir de 1.
Por exemplo, 1, 3, 6, 10, 15, ... são triangulares. Dado um natural n >= 1, informe se ele é ou não triangular.*/

#include <stdio.h>

int main(void)
{

	int numero, triangulo = 0, termo = 1; 

	printf("Informe um n%cmero para valida%c%co triangular. Obs: A partir do n%cmero '0' ", 163, 135, 198, 163);
	scanf("%d", &numero);

	while( numero != 0 )
	{
	
		triangulo = ( termo * ( termo + 1 ) ) / 2;

		if( numero < triangulo )
		{
		
			printf("O n%cmero %d n%co %c triangular\n", 163, numero, 198, 130);
			
			numero = 0;

		}

		if( triangulo == numero )
		{
		
			printf("O n%cmero %d %c triangular\n", 163, numero, 130);

			numero = 0;

		}

	termo++;
	
	}

	return 0;

}
