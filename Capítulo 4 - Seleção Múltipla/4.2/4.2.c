/*4.2 - Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente: 
1 - saldo, 2 - extrato, 3 - saque, 4 - sair.*/

#include <stdio.h>

int main(void)
{

	int opcao;

	printf("Informe a opcao desejada pelo numero: \n1 - saldo \n2 - extrato \n3 - saque \n4 - sair\n");
	scanf("%d", &opcao);

	switch( opcao )
	{
	
		case 1: printf("Saldo\n"); break;

		case 2: printf("Extrato\n"); break;

		case 3: printf("Saque\n"); break;

		case 4: printf("Sair\n"); break;

		default: printf("Nenhuma das anteriores\n"); break;

	}

	return 0;

}
