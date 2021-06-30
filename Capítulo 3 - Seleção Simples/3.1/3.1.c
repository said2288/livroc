/*3.1 - Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas custa R$ 0,20.
Dado o total de cópias, informe o total a ser pago.*/

#include <stdio.h>

int main(void)
{

	int quantidade_folhas_informadas;
	float valor_a_ser_pago;
	const int FOLHAS = 100;
	const float MENOSOUIGUAL = 0.25;
	const float MAIOR = 0.20;

	printf("Informe qual e a quantidade de folhas a serem impressas. ");
	scanf("%d", &quantidade_folhas_informadas);

	if( quantidade_folhas_informadas <= FOLHAS )
	{

		valor_a_ser_pago = MENOSOUIGUAL * quantidade_folhas_informadas; 

	} 
	else 
	{

		valor_a_ser_pago = MAIOR * quantidade_folhas_informadas;

	}
	
	printf("O valor a ser pago e de: R$ %.2f\n", valor_a_ser_pago); 

	return 0;
	 
}
