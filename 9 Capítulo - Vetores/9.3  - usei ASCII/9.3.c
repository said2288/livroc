/*9.3 - Usando as funções definidas nos exercícios 9.1 e 9.2, crie um programa que solicita ao usuário a digitação
de dez números inteiros e, em seguida, informa qual é o maior entre os números fornecidos pelo usuário.*/

#include <stdio.h>

int validaNumeroMaior( int vetor[] );

int preencheVetor()
{

	int numeroInformado = 0, numeroMaior = 0, contadorFor = 0, vetor[9];

	for( contadorFor = 0; contadorFor <= 9; contadorFor++ )
	{

		printf("Informe um n%cmero: ", 163);
		scanf("%d", &numeroInformado);

		vetor[contadorFor] = numeroInformado;

	}

	return numeroMaior = validaNumeroMaior( vetor );
 
}

int validaNumeroMaior( int vetor[] )
{

	int numero = 0, contadorFor = 0;

	for( contadorFor = 0; contadorFor <= 9; contadorFor++ )
	{

		if( numero < vetor[contadorFor] ) 
		{

			numero = vetor[contadorFor];

		} 

    }

	return numero;

}

int main(void) 
{

	int numeroMaior = 0;
	numeroMaior = preencheVetor();
	printf("O maior n%cmero digitado foi: %d\n", 163, numeroMaior);
	return 0;

}
