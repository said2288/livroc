/*1.5 - Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. 
Considere que o percentual de desconto é um número real entre 0 e 1.*/

#include <stdio.h>

int main(void)
{

	float valor_compra, percentagem, valor_para_pagar;

	printf("Informe o valor da compra. ");
	scanf("%f", &valor_compra);

	printf("Informe a percentagem do desconto em casas decimais utilizando ponto no lugar da virgula.\nExemplo: 0.1 que equivale a 10 porcento. ");
	scanf("%f", &percentagem);

	valor_para_pagar = valor_compra - percentagem * valor_compra;

	printf("O valor da compra com desconto foi de: %.2f\n", valor_para_pagar);

	return 0;

}
