/*9.1 - Crie uma fun��o para preencher um vetor com dez n�meros inteiros:*/

int preencheVetor()
{

	int numeroInformado = 0, numeroMaior = 0, contadorFor = 0, vetor[9];

	for( contadorFor = 0; contadorFor <= 9; contadorFor++ )
	{

		printf("Informe um n%cmero: ", 163);
		scanf("%d", &numeroInformado);

		vetor[contadorFor] = numeroInformado;

	}

	return numeroMaior = funcaoQueVouCriar-ValidaNumeroMaior( vetor );

}

