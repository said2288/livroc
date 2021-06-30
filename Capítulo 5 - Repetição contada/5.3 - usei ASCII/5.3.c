/*5.3 - Dados um capital, uma taxa de juros mensal e um período em meses, informe o montante ao
final de cada mês. O programa deve funcionar como a seguir:*/

#include <stdio.h>

int main(void)
{

	float capital, juros, periodo, rendimento_mes;

	printf("Informe o capital. ");
	scanf("%f", &capital);

	printf("Informe o juros. ");
	scanf("%f", &juros);

	printf("Informe o per%codo em meses. ", 161);
	scanf("%f", &periodo);

	rendimento_mes = capital;

	for( int i = 1; i <= periodo; i++ )
	{
	
		rendimento_mes = rendimento_mes + capital * ( juros / 100 );

		printf("%d%c m%cs: R$ %.2f\n", i, 167, 136, rendimento_mes );

		capital = rendimento_mes; 

	}

	return 0;

}
