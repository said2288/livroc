/*8.3 - Codifique uma função que receba um número natural como entrada e determine se ele é par ou não.*/

#include <stdio.h>

void validaParImpar( int numero );

int main(void)
{

	int numero;

	printf("Informe um n%cmero inteiro. ", 163);
	scanf("%d", &numero);

	validaParImpar( numero );

	return 0;

}

void validaParImpar( int numero )
{

	float resultado;

	resultado = numero % 2;

	if( resultado == 0 )
	{
	
		printf("O n%cmero digitado %c par.\n", 163, 130);

	}
	else
	{

		printf("O n%cmero digitado %c %cmpar.\n", 163, 130, 161);

	}

}
