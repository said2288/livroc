/*7.4 - Refaça o programa da Listagem 6.3 (no Capítulo 6), usando o comando do-while em vez do comando while.*/

/* Listagem 6.3 Livro:

compras.c - calcula o total a ser pago por uma compra

#include <stdio.h>

int main(void){

	float t=0, v;

	while( 1 ) {
		printf("Valor? ");
		scanf("%f", &v);
		if( v<=0 ) break; // forca termino da repeticao
	}

	printf("\nTotal: R$ %.2f\n", t);

	return 0;

}
*/

#include <stdio.h>

int main(void)
{

	float produto, valor_total;

	do 
	{

		valor_total = valor_total + produto;

		printf("Informe o valor do produto. ");
		scanf("%f", &produto); 
	
	} while( produto > 0 );

	printf("O valor da compra %c de: R$ %.2f\n", 130, valor_total);
	
	return 0;

}
