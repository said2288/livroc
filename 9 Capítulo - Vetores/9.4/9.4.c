﻿/*9.4 - O programa seguir parece ser capaz de adivinhar o pensamento do usuário.
Teste esse programa e tente descobrir como ele funciona. No programa, a função time(), definida em time.h, é usada para determinar
o número de segundos que se passaram desde a meia-noite do dia 1º janeiro de 1970. O valor é passado à função srand() para que ela inicie
o gerador de números aleatórios. Depois disso, cada chamada feita à função rand() resulta num número aleatório entre 0 e 1073741823.
As funções srand() e rand() são definidas na biblioteca stdlib.h.*/

/* Nome que está no livro: telepatica.c - adivinha o que o usuário está pensando*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int s[14] = {33, 34, 35, 36, 37, 38, 40, 41, 42, 43, 47, 60, 61, 64};
	char r;
	int i;
	srand( time( NULL ) );
	r = s[rand()%14];
	puts("Pense em um numero de dois digitos (ex. 35)");
	puts("Subtraia deste numero a soma de seus digitos(ex. 35-8=27)");
	puts("Procure na tabela abaixo o simbolo a direita do resultado");
	puts("Concentre-se neste simbolo e pressione a tecla <enter>...\n");
	for( i = 99; i >= 0; i-- ) 
	{
		printf("%02d", i);
		if( i%9==0 ) 
		{
			printf("%c ", r);
		} else 
		{
        	printf("%c ", s[rand()%14]);
		}
    	if( i%10==0 ) { 
			printf("\n"); 
		}
	}
	getchar();
	printf("\nO simbolo em que voce se concentrou e %c\n\n", r);
	return 0;
}
