/*2.1 - Dada uma distância percorrida (em quilometros), bem como o total de combustível gasto (em litros),
informe o consumo médio do veículo.*/

#include <stdio.h>

int main(void)
{

	float distancia_km, quantidade_litros, resultado;

	printf("Qual foi a distancia percorrida em km? ");
	scanf("%f", &distancia_km);

	printf("Qual foi a quantidade de combustivel gasto em litros? ");
	scanf("%f", &quantidade_litros);

	resultado = distancia_km / quantidade_litros;

	printf("O seu veiculo faz em media %.0fkm por cada litro\n", resultado);

	return 0;

}
