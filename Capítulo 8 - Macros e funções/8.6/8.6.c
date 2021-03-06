/*8.6 - Com base no programa da listagem 8.7, crie um programa que leia uma data e exiba a data do dia anterior à data lida.*/

// Programa descrito no livro:
/* data.c - valida data e exibe data do dia seguinte

#include <stdio.h>

// prototipos das funcoes

int valida(int d, int m, int a );
int ultimoDia(int m, int a);
int bissexto(int a);
void exibeDiaSeguinte(int d, int m, int a);

// definicoes das funcoes

int main(void) {
	int d, m, a;

	printf("Data? ");
	scanf("%d/%d/%d", &d, &m, &a);

	if( valida(d,m,a) )
		exibeDiaSeguinte(d,m,a);
	else
		puts("Data invalida! ");

	return 0;
}

int valida(int d, int m, int a) {
	if( a<0 ) return 0;
	if( m<1 || m>12 ) return 0;
	if( d<1 || d> ultimoDia(m,a) ) return 0;
	return 1;
}

int ultimoDia(int m, int a) {
	if( m==2 ) return 28 + bissexto(a);
	if( m==4 || m==6 || m==9 || m==11 ) return 30;
	return 31;
}

int bissexto(int a) {
	return (a%4==0 && a%100!=0) || (a%400==0);
}

void exibeDiaSeguinte(int d, int m, int a) {
	if( d<ultimoDia(m,a) ) d++;
	else {
		d=1;
		m++;
		if( m==13 ) {
			m=1;
			a++;
		}
    }
	printf("\nData do dia seguinte: %02d/%02d/%d\n", d, m, a);
}
*/

int validaData( int dia, int mes, int ano );
int ultimoDia( int mes, int ano );
int bissexto( int ano );
void exibeDiaAnterior( int dia, int mes, int ano );

int main(void) 
{
	int dia, mes, ano;

	printf("Informe a data seguindo o exemplo: 08/03/1989. ");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	if( validaData( dia, mes, ano ) )
	{

		exibeDiaAnterior( dia, mes, ano );

	}

	else
	{

		puts("Data invalida! ");

	}

	return 0;

}

int validaData( int dia, int mes, int ano )
{
	if( ano < 0 ) 
	{

		return 0;

	}

	if( mes < 1 || mes > 12 )
	{

		return 0;

    }

	if( dia < 1 || dia > ultimoDia( mes, ano ) )
	{

    	return 0;

	}

	return 1;

}

int ultimoDia( int mes, int ano ) 
{

	if( mes == 2 ) 
	{

		return 28 + bissexto( ano );

	}

	if( mes == 4 || mes == 6 || mes == 9 || mes == 11 ) 
	{

		return 30;

	}

	return 31;

}

int bissexto( int ano ) 
{

	return ( ano % 4 == 0 && ano % 100 != 0 ) || ( ano % 400 == 0 );

}


void exibeDiaAnterior( int dia, int mes, int ano ) 
{

	if( dia == 1 )
	{

			mes--;
			dia = ultimoDia( mes, ano );

	}
	else 
	{
		
		dia = dia - 1;

    }

	printf("\nData do dia anterior: %02d/%02d/%d\n", dia, mes, ano);

}
