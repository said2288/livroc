/*11.6 - Crie uma função que recebe um caractere c e uma string s como parâmetros e informa quantas vezes o caractere c ocorre na string s. 
Em seguida, crie um programa principal para testar a sua função, conforme exemplificado a seguir.(mostrado no livro)*/ 

#include <stdio.h>

void identificaOcorrencia( char c, char s[] ) 
{

	int contador = 0;
	
    for(int i = 0; s[i]; i++) 
	{
        if(s[i] == c)
		{
			contador++;
		}
    }

	if( contador == 0 ) 
	{
		printf("\nN%co h%c ocorr%cncia!\n", 198, 160, 136);
	} else {
		printf("\nO caractere '%c' ocorre '%d' vezes na palavra '%s'!\n", c, contador, s);
	}
	
}

int main() 
{
	char c;
    char s[50];


    printf("Letra? ");
    scanf("%c", &c);

    printf("Palavra? ");
    scanf("%s", s);

	identificaOcorrencia( c, s );

    return 0;
}
