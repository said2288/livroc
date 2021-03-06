/*3.2 - Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças defeituosas supera 10% da produção.
Dados o total de peças produzidas e o total de peças defeituosas, informe se a máquina precisa de manutenção.*/

#include <stdio.h>

int main(void)
{

	float total_pecas_produzidas, pecas_defeituosas, percentagem;
	const float MANUTENCAO = 0.1;

	printf("Quantas pecas foram produzidas no total? ");
	scanf("%f", &total_pecas_produzidas);

	printf("Quantas pecas estao defeituosas? ");
	scanf("%f", &pecas_defeituosas);

	percentagem = pecas_defeituosas / total_pecas_produzidas;

	if( percentagem >= MANUTENCAO )
	{

		printf("Necessario manutencao!\n"); 

	} 
	else 
	{

		printf("Sem necessidade de manutencao!\n");

	}
	
	return 0;
	 
}
