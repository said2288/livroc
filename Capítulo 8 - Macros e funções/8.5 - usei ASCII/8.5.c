/*8.5 - O fatorial de um número natural n é definido pelo produto 1x2x3x...xn.
Codifique uma função que receba um número natural e determine o seu fatorial.*/

#include <stdio.h>

int calculaFatorial( int fatorial );

int main(void)
{

	int fatorial, resultado_fatorial;

	printf("Digite um n%cmero para calcular seu fatorial. ", 163);
	scanf("%d", &fatorial);

	resultado_fatorial = calculaFatorial( fatorial );

	printf("Fatorial calculado: %d\n", resultado_fatorial);

	return 0;

}

int calculaFatorial( int fatorial )
{

    if ( fatorial <= 1 )
    {

    	return 1;

	}
    else
	{

       return fatorial * calculaFatorial( fatorial - 1 );

    }

}
