/*1.6 - Dados um valor em real e a cotação do dólar, converta esse valor em dólares.*/

#include <stdio.h>

int main(void)
{

	float valor_real, valor_cotacao_dolar, conversao_em_dolar;

	printf("Informe o valor da moeda real para converte-la em dolar. ");
	scanf("%f", &valor_real);

	printf("Informe a cotacao da moeda dolar, trocando a virgula por ponto. Exemplo 5.00.  ");
	scanf("%f", &valor_cotacao_dolar);

	conversao_em_dolar = valor_real / valor_cotacao_dolar;

	printf("O valor convertido em dolar e de: $%.2f\n", conversao_em_dolar);

	return 0;

}
