/*7.2 - Modifique a lógica elaborada para o exercício anterior de modo que, 
ao final de cada execução, o usuário tenha a opção de repetir o processo.*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

	float primeira_nota, segunda_nota, media;

	do 
	{

		do 
		{
		
			puts("\nDigite suas notas entre o 0 e 10 \n");
			printf("Digite sua primeira nota. ");
			scanf("%f", &primeira_nota);

			printf("Digite sua segunda nota. ");
			scanf("%f%*c", &segunda_nota);
	
		} while( primeira_nota < 0 || primeira_nota > 10
		    	|| segunda_nota < 0 || segunda_nota > 10 );

		media = ( primeira_nota + segunda_nota ) / 2;

		printf("Sua M%cdia calculada: %.2f\n", 130, media);
		
		printf("\nGostaria de continuar a tirar m%cdias de notas? Se sim, pressione qualquer tecla, sen%co pressione 'n' ou 'N'.\n", 130, 198);

    } while( toupper(getchar()) != 'N' );

	return 0;

}
