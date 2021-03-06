/*2.5 - Dados um capital C, uma taxa de juros mensal fixa J e um período de aplicação em meses M,
informe o montante F no final do período(F = C*(1+J/100)²).*/

#include <stdio.h>
#include <math.h>

int main(void)
{

	/*
	C = capital
	J = taxa_juros_mensal
	M = meses
	F = final_periodo
	*/

	float capital, taxa_juros_mensal, meses, final_periodo;

	printf("Qual o capital a ser calculado? ");
	scanf("%f", &capital);

	printf("Qual e a taxa de juros mensal fixa? ");
	scanf("%f", &taxa_juros_mensal);

	printf("Qual e o periodo de aplicacao em meses? ");
	scanf("%f", &meses);

	final_periodo = capital * pow( 1 + taxa_juros_mensal / 100, meses );

	printf("O montante no fim do periodo e de: %.2f\n", final_periodo);

	return 0;
	
}
