/*11.4 - Dados dois nomes, informe se eles são iguais ou, caso não sejam, exiba-os em ordem alfabética decrescente. 
Seu programa não deve diferenciar maiúsculas de minúsculas. Por exemplo, se forem digitadas as strings ANA e ana,
seu programa deve informar que os nomes são iguais.*/ 

#include <stdio.h>
#include <string.h>

void toLower( char *str ) 
{

    for( int i = 0; str[i]; i++ ) 
    {
        str[i] = tolower( str[i] );
    }
}

int main() 
{
    char nome1[50], nome2[50], nome_ref1[51], nome_ref2[51];
    int resultado;

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    strcpy( nome_ref1, nome1 );
    strcpy( nome_ref2, nome2 );

	toLower( nome1 );
	toLower( nome2 );

    resultado = strcmp( nome1, nome2 );
	
    if ( resultado == 0 ) 
    {
        printf("Os nomes s%co iguais.\n", 198);
    } else {
        printf("Os nomes s%co diferentes.\n", 198);

        if ( resultado > 0 ) 
        {
            printf("%s\n%s\n", nome_ref1, nome_ref2);
        } else {
            printf("%s\n%s\n", nome_ref2, nome_ref1);
        }
    }

    return 0;
}
