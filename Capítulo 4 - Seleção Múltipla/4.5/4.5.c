/*4.5 - Dados o sexo e altura de uma pessoa, determine seu peso ideal, de acordo com as fórmulas a seguir:
- Para homens o peso ideal é 72.7 * altura - 58
- Para mulheres o peso ideal é 62.1 * altura - 44.7.*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

	char sexo;
	float altura, peso_ideal;

	printf("Informe apenas o caracter na sequencia:\nHomem = H ou h\nMulher = M ou m.\n");
	scanf("%c", &sexo);

	printf("Informe sua altura com pontuacao, exemplo: 1.70. ");
	scanf("%f", &altura);

	switch( toupper( sexo ) )
	{

		case 'H': peso_ideal = 72.7 * altura - 58; break; 

		case 'M': peso_ideal = 62.1 * altura - 44.7; break; 

		default: printf("Nenhuma das anteriores\n"); break; 

	}
	
	printf("Seu peso ideal e de: %.2f kilos\n", peso_ideal);

	return 0;

}
