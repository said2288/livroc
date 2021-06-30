/*8.2 - Codifique uma função que receba um número inteiro como entrada e exiba o dia da semana correspondente
por extenso (1 - domingo, 2 - segunda-feria, 3 - terça-feria, 4 - quarta-feria, 5 - quinta-feria, 6 - sexta-feria, 7 - sábado).*/

#include <stdio.h>

void informaDiaSemana( int numero_dia );

int main(void)
{

	int numero_dia;

	printf("Informe o n%cmero referente ao dia da semana, come%cando com o n%cmero 1 representando o domingo. ", 163, 135, 163);
	scanf("%d", &numero_dia);

	informaDiaSemana( numero_dia );

	return 0;

}

void informaDiaSemana( int numero_dia )
{

	switch( numero_dia )
	{

		case 1: printf("Domingo\n"); break;

		case 2: printf("Segunda-Feira\n"); break;

		case 3: printf("Ter%ca-Feira\n", 135); break;

		case 4: printf("Quarta-Feira\n"); break;

		case 5: printf("Quinta-Feira\n"); break;

		case 6: printf("Sexta-Feira\n"); break;

		case 7: printf("S%cbado\n", 160); break;

		default: printf("Nenhum dia da semana %c representado com n%cmero\n", 130, 163); break; 

	}

}
