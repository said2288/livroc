/*2.2 - Dadas as medidas de uma sala em metros (comprimento e largura), bem como o preço do metro
quadrado de carpete, informe o custo total para forrar o piso da sala.*/

#include <stdio.h>

int main(void)
{

	float comprimento, largura, carpete_metro, resultado;

	printf("Qual e o comprimento da sala em metros? Exe: 50 cm = 0.50. ");
	scanf("%f", &comprimento);

	printf("Qual e a largura da sala em metros? Exe: 50 cm = 0.50. ");
	scanf("%f", &largura);

	printf("Qual e o valor do metro quadrado do carpete? ");
	scanf("%f", &carpete_metro);
	
	resultado = carpete_metro * ( largura * comprimento );

	printf("O custo total para forrar o piso da sala e de: R$%.2f reais\n " , resultado);

	return 0;

}
