/*6.2 - Numa fábrica há dois alarmes: um deles dispara a cada x horas e o outro, a cada y horas. Codifique um programa em C que,
dados os valores de x e y, informe qual o tempo mínimo necessário para que os dois alarmes disparem simultaneamente. 
Considere que x e y são números inteiros positivos.*/

#include <stdio.h>

int main(void)
{

	int alarme_um, alarme_dois, troca_valor = 0, contador = 0, tempo_minimo = 0;

	printf("Qual %c o hor%crio que dispara o alarme 1? Obs: Informe um n%cmero inteiro. ", 130, 160, 163);
	scanf("%d", &alarme_um);

	printf("Qual %c o hor%crio que dispara o alarme 2? Obs: Informe um n%cmero inteiro. ", 130, 160, 163);
	scanf("%d", &alarme_dois);

	if( alarme_um > alarme_dois && alarme_um < 25 && alarme_dois < 25 )
	{
    
		troca_valor = alarme_dois;		
		alarme_dois = alarme_um;
		alarme_um = troca_valor;

    } 

	while( alarme_um < 25 && alarme_dois < 25 )
	{

		alarme_um++;
		contador++;

		if( alarme_dois == alarme_um )
		{

			tempo_minimo = contador;
			alarme_um = 25;
			alarme_dois = 25;
			contador = 25;

		}
		
	}

	if( alarme_um == 25 && alarme_dois == 25 && contador == 25 )
	{

		printf("%c necess%crio um tempo m%cnimo de: %d horas\n", 144, 160, 161, tempo_minimo);

	}
    else 
	{
	
		printf("Valor inexistente. Execute a aplica%c%co novamente.\n", 135, 198);

	}


	return 0;

}
