/*3.5 - Dados três números distintos, exiba-os em ordem crescente.*/

#include <stdio.h>

int main(void)
{

	int numero_um, numero_dois, numero_tres, primeiro, segundo, terceiro;

	printf("Informe o primeiro numero. ");
	scanf("%d", &numero_um);

	printf("Informe o segundo numero. ");
	scanf("%d", &numero_dois);

	printf("Informe o terceiro numero. ");
	scanf("%d", &numero_tres);

	if( numero_um > numero_dois )
	{
		
		if( numero_um > numero_tres )
		{
		
			terceiro = numero_um;
			
			if( numero_dois > numero_tres )
			{

				segundo = numero_dois;
				primeiro = numero_tres;

			} 
			else
			{
			
				primeiro = numero_dois;
				segundo = numero_tres;

			}

	    } 
		else 
		{
			
			primeiro = numero_dois;
			segundo = numero_um;
			terceiro = numero_tres;

		}

	}
	else if( numero_um < numero_tres )
	{
	
		primeiro = numero_um;

		if( numero_dois > numero_tres )
		{
		
			terceiro = numero_dois;
			segundo = numero_tres;

		} 
		else 
		{
		
			segundo = numero_dois;
			terceiro = numero_tres;

		}

	}
    else
    {
		
		terceiro = numero_dois;
		segundo = numero_um;
		primeiro = numero_tres;	

	}

	printf("Ordem crescente: %d %d %d\n", primeiro, segundo, terceiro);

	return 0;

}

