/*2.3 - O Índice de massa corpórea (IMC) de uma pessoa é igual ao seu peso (em quilogramas) dividido pelo quadrado de sua altura (em metros).
Dados o peso e a altura de uma pessoa, informe o valor de seu IMC.*/

#include <stdio.h>
#include <math.h>

int main(void)
{

	float peso, altura, imc;

	printf("Qual e o seu peso? ");
	scanf("%f", &peso);

	printf("Qual e a sua altura em metros? No lugar da virgula, usar ponto. Exemplo: 1.80. ");
	scanf("%f", &altura);

	imc = peso / pow( altura, 2 );

	printf("Seu IMC(Indice de massa corporea) e de: %.2f\n", imc);

	return 0;
	
}
