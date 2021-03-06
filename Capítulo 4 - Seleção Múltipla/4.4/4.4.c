/*4.4 - O perfil de uma pessoa é dado pelo seu ano de nascimento. Por exemplo, se o ano é 1987, calculamos a soma 19+87,
dividimos seu resultado (106) por 5 e pegamos o resto (1). Este resto indica o perfil da pessoa: 
0 - tímido, 1 - sonhador, 2 - paquerador, 3 - atraente, 4 - irresistível. Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil.*/

#include <stdio.h>

int main(void)
{

	int data_nascimento, digito_um_dois, digito_tres_quatro, resto_divisao_cinco;

	printf("Informe a data do seu nascimento. ");
	scanf("%d", &data_nascimento);

	digito_um_dois = data_nascimento / 100;

	digito_tres_quatro = data_nascimento % 100;

	resto_divisao_cinco = ( digito_um_dois + digito_tres_quatro ) % 5;

	switch( resto_divisao_cinco )
	{

		case 0: printf("Seu perfil e de timido\n"); break; 

		case 1: printf("Seu perfil e de sonhador\n"); break; 

		case 2: printf("Seu perfil e de paquerador\n"); break; 

		case 3: printf("Seu perfil e de atraente\n"); break; 

		case 4: printf("Seu perfil e de irresistivel\n"); break; 

		default: printf("Nenhuma das anteriores\n"); break; 

	}
	
	return 0;

}
