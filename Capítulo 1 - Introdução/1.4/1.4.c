/*1.4 - Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste é dado por um número
real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15.*/

#include <stdio.h>

int main(void)
{

	float salario, percentagem, salario_reajustado;

	printf("Informe o valor do salario atual. ");
	scanf("%f", &salario);

	printf("Informe a percentagem do reajuste salarial em casas decimais utilizando ponto no lugar da virgula.\nExemplo: 0.1 que equivale a 10 porcento. ");
	scanf("%f", &percentagem);

	salario_reajustado = salario + percentagem * salario;

	printf("O salario foi reajustado para: %.2f\n", salario_reajustado);

	return 0;

}
