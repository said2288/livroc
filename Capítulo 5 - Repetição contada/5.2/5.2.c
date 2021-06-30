/*5.2 - Dadas as idades dos pacientes de uma clínica, informe a idade daquele mais idoso.
Considere que todas as idades são distintas e que o número de pacientes é informado pelo usuário,
no momento da execução do programa.*/

#include <stdio.h>

int main(void)
{

	int idade, pacientes, pega_idade = 0;

	printf("Quantos pacientes ha na clinica? ");
	scanf("%d", &pacientes);

	for( int i = 1; i <= pacientes; i++ )
	{
	
		printf("Informe a idade do paciente numero %d. ", i);
		scanf("%d", &idade);

		if( idade >= pega_idade )
		{
		
			pega_idade = idade;

		}

	}

	printf("A idade da pessoa mais idosa da clinica e de: %d anos\n", pega_idade);

	return 0;

}
