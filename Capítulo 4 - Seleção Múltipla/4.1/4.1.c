/*4.1 - Dada uma letra (S, C, D ou V) informe o estado civil correspondente por extenso (Solteiro, Casado, Divorciado ou Viúvo).*/

#include <stdio.h>
#include <ctype.h> // Essa é a biblioteca que obtém a função toupper e entre outras.

int main(void)
{

	char estado;

	printf("Informe seu estado civil apenas com a primeira letra em maiuscula,\n(S = Solteiro, C = Casado, D = Divorciado ou V = Viuvo). ");
	scanf("%c", &estado);

	// toupper() é uma função que captura o caractere minúsculo e o converte em maiúsculo
	switch( toupper( estado ) )
	{
	
		case 'S': printf("Solteiro\n"); break;

		case 'C': printf("Casado\n"); break;

		case 'D': printf("Divorciado\n"); break;

		case 'V': printf("Viuvo\n"); break;

		default:  printf("Nenhuma das anteriores\n"); break;

	}

    return 0;

}
