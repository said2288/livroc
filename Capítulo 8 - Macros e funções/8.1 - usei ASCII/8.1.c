/*8.1 - Codifique uma função que receba um número natural n como entrada
e exiba uma contagem regressiva de n até 0.*/

#include <stdio.h>

void contagemRegressiva( int contagem_regressiva );

int main(void)
{

	int contagem_regressiva = 0;

	printf("Informe um n%cmero para o in%ccio da contagem regressiva. ", 163, 161);
	scanf("%d", &contagem_regressiva);

	contagemRegressiva( contagem_regressiva );

	return 0;

}

void contagemRegressiva( int contagem_regressiva )
{

	for( int i = contagem_regressiva; i >= 0; --i )
    {
	
		printf("%d\n", i);

	}

}
