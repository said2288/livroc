/*1.2 - Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas.*/

#include <stdio.h>

int main(void)
{

	float valor_total_vendas, resultado_calculado, comissao = 0.10;
	

	printf("Qual foi o total de vendas? ");
	scanf("%f", &valor_total_vendas);

	resultado_calculado = valor_total_vendas * comissao;

	printf("Sua comissao e de: %.2f\n", resultado_calculado);

	return 0;

}
