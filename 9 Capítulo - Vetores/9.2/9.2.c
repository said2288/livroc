/*9.2 - Crie uma função que recebe um vetor contendo dez números inteiros
 e devolva como resposta o valor do maior número armazenado no vetor.*/

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
