/*5.5 - Exibir um relógio digital, cujo mostrador varia de 00:00 a 23:59. Dica: para exibir o relógio fixo em um ponto da tela, use o comando 
_gotoxy (coluna, linha), da biblioteca conio.h, em que coluna é um número inteiro entre 1 e 80 e linha é um número inteiro entre 1 e 25;
para dar uma pausa entre a exibição de um horário e do próximo, use o comando _sleep(segundos), da biblioteca time.h. Consulte o apêndice C,
caso você deseje usar essas funções no Unix/Linux.*/

#include <stdio.h>
#include <conio.h> // Nessa biblioteca se encontra a função _gotoxy
#include <time.h>  // Nessa biblioteca se encontra a função _sleep 

int main(void)
{

	int contador_um, segundos = 0, minutos = 0, hora = 0;

		// Função _gotoxy que tem como uso o posicionamento da escrita na tela em execução
		_gotoxy(60, 7);

		printf("HH:MM:ss");

	for( contador_um = 1; contador_um <= contador_um + 1; contador_um++ )
	{

		// Função _gotoxy que tem como uso o posicionamento da escrita na tela em execução
		_gotoxy(60, 8);

		printf("%.2d:%.2d:%.2d", hora, minutos, segundos);

		segundos = segundos + 1;

		// Função _sleep que recebe por parâmetro um numeral que representa segundo(s) 
	 	_sleep(1);

		if( contador_um == 60 )
		{

			contador_um = 0;
			segundos = 0;
		
			minutos = minutos + 1;

			if( minutos == 60 )
			{
			
				contador_um = 0;
				segundos = 0;
				minutos = 0;

				hora = hora + 1;

				if( hora == 24 )
				{
				
					contador_um = 0;
					segundos = 0;
					minutos = 0;
					hora = 0;

				}

			}
		
		}

	}
	
	return 0;

}

	
