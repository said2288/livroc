/*1.1 - Dado um número real qualquer, informe qual é o seu dobro.*/

#include <stdio.h>

int main(void)
{

	float numero_para_dobrar, numero_dobrado;

	printf("Digite um numero. ");
	scanf("%f", &numero_para_dobrar);

	numero_dobrado = numero_para_dobrar * 2;

	printf("O dobro do numero informado e: %.2f\n", numero_dobrado);

	return 0;

}
