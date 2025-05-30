/* Crie um programa para manter um cadastro de livros. Para cada livro armazene seu título, autor, ano de publicação e preço.
   Adicione também opções para listar todos os livros de um determinado autor, listar todos os livros dentro de uma faixa de preço,
   listar todos os livros  publicados num determinado ano.
 */

/* Como o exercício não me deu faixas para trabalhar, irei apenas usar essas: 
   Faixa 1: 0 -> 100  
   Faixa 2: 101 -> 200 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct 
{
	char titulo[25];
	char autor[25];
	char ano[5];
	char preco[5];
} livro;

int menu(void);
void incluirLivro(void);
void listarLivrosAutor(void);
void listarLivrosFaixaPreco(void);
void listarLivrosPublicadosAno(void);

int main(void)
{
	while ( 1 )
	{
		switch( menu() )
		{
			case 1: incluirLivro(); break;
			case 2: listarLivrosAutor(); break;
			case 3: listarLivrosFaixaPreco(); break;
			case 4: listarLivrosPublicadosAno(); break;
			case 5: exit(0); break;
		}
	}

	return 0;
}

int menu(void) 
{
	int op;

	puts("\n1 - Incluir livro");
	puts("2 - Listar livros de um autor");
	printf("3 - Listar livros dentre uma faixa de pre%co", 135);
	printf("\n4 - Listar livros publicados em um ano espec%cfico", 161);
	puts("\n5 - Sair");
	printf("\nOp%c%co? ", 135, 198);
	scanf("%d%*c", &op);

	return op;
}

void incluirLivro(void)
{
	FILE *s;
	livro l;

	s = fopen("agenda.dat", "ab");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(1);
	}

	printf("\nT%ctulo? ", 161);
	gets(l.titulo);
	printf("\nAutor? ");
	gets(l.autor);
	printf("\nAno de lan%camento? ", 135);
	gets(l.ano);
	printf("\nQual %c o valor? ", 130);
	gets(l.preco);

	fwrite(&l, sizeof(livro), 1, s);
	printf("\nRegistro gravado!\n");
	fclose(s);
}

void listarLivrosAutor(void)
{

	char autor[25];

	printf("\nInforme o autor: ");
	gets(autor);

	FILE *s;
	livro l;
	int registroEncontrado = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(2);
	}

	while ( 1 ) 
	{
		fread(&l, sizeof(livro), 1, s);
		if( feof( s ) ) break;
		if( strcmpi( autor, l.autor ) == 0 )
		{
			printf("\n T%ctulo: %s - Ano: %s - Pre%co: %s", 161, l.titulo, l.ano, 135, l.preco);
			registroEncontrado++;
		} 
	}

    if(!registroEncontrado)
	{
		printf("\nNenhum Registro foi encontrado com esse nome.\n");
	}

	printf("\n\n ");
	fclose(s);
}

void listarLivrosFaixaPreco(void)
{
	int preco = 0;
	printf("\nInforme o valor de faixa de pre%co: ", 135);
	printf("\n Faixas dispon%cveis: \n Faixa 1: 0 at%c 100 \n Faixa 2: 101 at%c 200 \n", 161, 130, 130);
	scanf("%d", &preco);

	FILE *s;
	livro l;
	int precoInteiro = 0;
	int registroEncontrado = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(3);
	}

	while ( 1 ) 
	{
		fread(&l, sizeof(livro), 1, s);

		if( feof( s ) ) break;

		precoInteiro = atoi(l.preco);

		if( preco <= 100 && precoInteiro <= 100 )
	    {
			printf("\n Autor: %s - T%ctulo: %s - Ano: %s - Pre%co: %s", l.autor, 161, l.titulo, l.ano, 135, l.preco);
			registroEncontrado++;
		} 
		if ( ( preco >= 101 && precoInteiro >= 101 ) && ( preco <= 200 && precoInteiro <= 200 ) )
	    {
			printf("\n Autor: %s - T%ctulo: %s - Ano: %s - Pre%co: %s", l.autor, 161, l.titulo, l.ano, 135, l.preco);
			registroEncontrado++;
		}		
	}

    if(!registroEncontrado)
	{
		printf("\nNenhum Registro encontrado nessa faixa de pre%co\n", 135);
	}

	printf("\n\n ");
	fclose(s);
}

void listarLivrosPublicadosAno(void)
{
	int ano = 0;
	printf("\nInforme o ano: ");
	scanf("%d", &ano);

	FILE *s;
	livro l;
	int anoInteiro = 0;
	int registroEncontrado = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(4);
	}

	while ( 1 ) 
	{
		fread(&l, sizeof(livro), 1, s);

		if( feof( s ) ) break;

		anoInteiro = atoi(l.ano);

		if( ano == anoInteiro)
	    {
			printf("\n Autor: %s - T%ctulo: %s - Pre%co: %s", l.autor, 161, l.titulo, 135, l.preco);
			registroEncontrado++;
		} 	
	}

    if(!registroEncontrado)
	{
		printf("\nNenhum Registro encontrado no ano informado \n");
	}

	printf("\n\n ");
	fclose(s);
}

int strcmpi( char a[], char b[] )
{
	int i = 0;
	while( toupper( a[i] ) == toupper( b[i] ) && a[i] != '\0' )
    {
		i++;
	}

	return a[i] - b[i];
}

