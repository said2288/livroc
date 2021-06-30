/*7.1 - Dadas as duas notas de um aluno, informe a sua média. Seu programa deve forçar o usuário a digitar notas na faixa de 0 a 10.*/

#include <stdio.h>

int main(void)
{

	float primeira_nota, segunda_nota, media;

	do 
	{
		
		puts("\nDigite suas notas entre o 0 e 10 \n");
		printf("Digite sua primeira nota. ");
		scanf("%f", &primeira_nota);

		printf("Digite sua segunda nota. ");
		scanf("%f", &segunda_nota);
	
	} while( primeira_nota < 0 || primeira_nota > 10
		    || segunda_nota < 0 || segunda_nota > 10 );

	media = ( primeira_nota + segunda_nota ) / 2;

	printf("Sua M%cdia calculada: %.2f\n", 130, media);

	return 0;

}
