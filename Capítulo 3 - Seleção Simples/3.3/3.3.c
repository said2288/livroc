/*3.3 - Dada a idade de um nadador, informe a sua categoria: infantil (até 10 anos), juvenil (até 17 anos)
ou sênior (acima de 17 anos).*/

#include <stdio.h>

int main(void)
{

	int idade; 

	printf("Qual e a sua idade? ");
	scanf("%d", &idade);

	if( idade <= 10 )
	{

		printf("Categoria INFANTIL!\n"); 

	} 
	else if( idade > 10 && idade <= 17 )
	{

		printf("Categoria JUVENIL!\n");

	} 
	else
	{
	
		printf("Categoria SENIOR!\n");

	}
	
	return 0;
	 
}
