/*8.4 - Codifique uma função que calcula a média ponderada de duas notas. Essa função deve receber quatro dados de entrada,
sendo as notas e seus respectivos pesos. Os pesos devem ser valores entre 0 a 1, com soma igual a 1.*/

#include <stdio.h>

float calculaMediaPonderada( float nota1, float peso1, float nota2, float peso2 );

int main(void)
{

	int contador = 0;
	float nota1, peso1, nota2, peso2, nota_final;

	do
	{

	printf("Obs: Os pesos informados somados n%co devem ser maior que 1.\nInforme-os sempre como no exemplo: 0.2\n", 198);
	printf("Informe a primeira nota. ");
	scanf("%f", &nota1);

	printf("Informe o peso da primeira nota. ");
	scanf("%f", &peso1);

	printf("Informe a segunda nota. ");
	scanf("%f", &nota2);

	printf("Informe o peso da segunda nota. ");
	scanf("%f", &peso2);

	if( peso1 + peso2 == 1 )
	{

		nota_final = calculaMediaPonderada( nota1, peso1, nota2, peso2 );

		printf("A nota do aluno %c de: %.2f\n", 130, nota_final);

		contador = 1;

	}
	else
	{

		printf("Informe os campos novamente seguindo as orienta%c%ces. ", 135, 228);

	}

	} while( contador == 0 );

	return 0;

}

float calculaMediaPonderada( float nota1, float peso1, float nota2, float peso2 )
{
/*
  1 - Multiplicar Peso com a nota
  2 - Somar todas as multiplicações 
  3 - Somar pesos 
  4 - Dividir a soma das multiplicações pela soma dos pesos
*/
	float nota_peso1, nota_peso2, soma_multiplicacoes, soma_pesos, resultado_nota;

	nota_peso1 = nota1 * peso1;
	nota_peso2 = nota2 * peso2;

	soma_multiplicacoes = nota_peso1 + nota_peso2;

	soma_pesos = peso1 + peso2;

	resultado_nota = soma_multiplicacoes / soma_pesos;

	return resultado_nota;

}
