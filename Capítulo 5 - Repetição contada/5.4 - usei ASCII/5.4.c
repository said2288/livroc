/*5.4 - Numa eleição há três candidatos, identificados como A,B e C. Dados os votos dos eleitores, informe o resultado da 
eleição, conforme exemplificado a seguir:*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

	int eleitores, candidato_a = 0, candidato_b = 0, candidato_c = 0, nulo = 0;
	char voto;

	printf("Qual a quantidade de eleitores? ");
	scanf("%d", &eleitores);

	printf("Para candidato A - Digite A ou a\nPara candidato B - Digite B ou b\n");
    printf("Para candidato C - Digite C ou c\nPara nulo - Digite 0\n");

	for( int i = 1; i <= eleitores; i++ )
	{
	
		printf("%d%c voto. ", i, 167);
		scanf("%c\n", &voto);

		switch( toupper( voto ) )
		{
		
			case 'A': candidato_a = candidato_a + 1; break;

			case 'B': candidato_b = candidato_b + 1; break;

			case 'C': candidato_c = candidato_c + 1; break;

			default: nulo = nulo + 1; break;

		}	

	}

	printf("Resultado da elei%c%co:\nCandidato A: %d voto(s)\nCandidato B: %d voto(s)\nCandidato C: %d voto(s)\nNulo: %d voto(s)\n", 135, 198, candidato_a, candidato_b, candidato_c, nulo);

	return 0;

}

