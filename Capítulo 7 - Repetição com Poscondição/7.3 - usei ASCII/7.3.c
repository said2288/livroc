/*7.3 - Crie um programa que exiba um menu com as seguintes opções: 1 - somar 2 - subtrair 3 - multiplicar 4 - dividir 5 - sair
Após a escolha da opção, o usuário deve fornecer dois números e o programa deve mostrar o resultado da operação.*/

#include <stdio.h>

int main(void)
{

	int opcao;
	float primeiro_numero, segundo_numero, resultado;

	do 
	{

		puts("1 - somar ");
		puts("2 - subtrair ");
		puts("3 - multiplicar ");
		puts("4 - dividir ");
		puts("5 - sair ");
		printf("Escolha uma op%c%co. ", 135, 198);
		scanf("%d", &opcao);
	
		if( opcao == 1 || opcao == 2 || 
			opcao == 3 || opcao == 4)
		{

  		  	printf("Digite o primeiro n%cmero. ", 163);
			scanf("%f", &primeiro_numero);
	
			printf("Digite o segundo n%cmero. ", 163);
			scanf("%f", &segundo_numero);

			switch( opcao )
			{
			
				case 1: resultado = primeiro_numero + segundo_numero; break;

				case 2: resultado = primeiro_numero - segundo_numero; break;

				case 3: resultado = primeiro_numero * segundo_numero; break;

				case 4: resultado = primeiro_numero / segundo_numero; break;  

			}
				
			printf("O resultado da opera%c%co: %.2f\n", 135, 198, resultado);

		}

	} while( opcao != 5 );

	return 0;

}
