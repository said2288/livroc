/*2.4 - Dado o tamanho de um arquivo (em bits), bem como como a velocidade da conexão (em bits por segundo),
informe o tempo necessário para download do arquivo.*/

#include <stdio.h>

int main(void)
{

	float tamanho_arquivo_em_bits, velocidade_bits_por_segundo, tempo_para_baixar;

	printf("Qual e o tamanho do arquivo em bits? ");
	scanf("%f", &tamanho_arquivo_em_bits);

	printf("Qual e a velocidade em bits por segundo da sua operadora? ");
	scanf("%f", &velocidade_bits_por_segundo);

	tempo_para_baixar = tamanho_arquivo_em_bits / velocidade_bits_por_segundo;

	printf("O tempo aproximado para baixar e de: %.2fs\n", tempo_para_baixar);

	return 0;
	
}
