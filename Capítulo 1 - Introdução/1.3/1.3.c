/*1.3 - Dadas as medidas de uma sala em metros (comprimento e largura),informe a sua área em metros quadrados.*/

#include <stdio.h>

int main(void)
{

	float comprimento, largura, quadrado_calculado;

	printf("Qual e o metro do comprimento da sala? ");
	scanf("%f", &comprimento);

	printf("Qual e o metro da largura da sala? ");
	scanf("%f", &largura);

	quadrado_calculado = comprimento * largura; 

	printf("A medida da sua sala em metros e de: %.2fm\n", quadrado_calculado);

	return 0;

}
