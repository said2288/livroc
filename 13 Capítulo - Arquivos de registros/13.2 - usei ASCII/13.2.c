/* Altere o programa da listagem 13.4 para que ele mantenha, além do nome e do telefone,
   a data de aniversário das pessoas (apenas dia e mês).
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct 
{
	char nome[31];
	char fone[21];
	char dia[4];
	char mes[4];
} pessoa;

int menu(void);
void incluir(void);
void listar(void);
void consultar(void);
void excluir(void); 

int main(void)
{
	while ( 1 )
	{
		switch( menu() )
		{
			case 1: incluir(); break;
			case 2: listar(); break;
			case 3: consultar(); break;
			case 4: excluir(); break;
			case 5: exit(0); break;
		}
	}

	return 0;
}

int menu(void) 
{
	int op;

	puts("\n1 - Incluir");
	puts("2 - Listar");
	puts("3 - Consultar");
	puts("4 - Excluir");
	puts("5 - Sair");
	printf("\nOpcao? ");
	scanf("%d%*c", &op);

	return op;
}

/* Inclui um novo registro no final da agenda */
void incluir(void)
{
	FILE *s;
	pessoa p;

	s = fopen("agenda.dat", "ab");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(1);
	}

	printf("\nNome? ");
	gets(p.nome);
	printf("\nFone? ");
	gets(p.fone);
	printf("\nDia? ");
	gets(p.dia);
	printf("\nM%cs? ", 136);
	gets(p.mes);

	fwrite(&p, sizeof(pessoa), 1, s);
	printf("\nRegistro gravado!\n");
	fclose(s);
}

/* Lista todos os registros da agenda */
void listar(void)
{
	FILE *s;
	pessoa p;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(2);
	}

	while ( 1 ) 
	{
		fread(&p, sizeof(pessoa), 1, s);
		if( feof( s ) ) break;
		// Uso do %c% 
		printf("\n%s - %s -- Anivers%crio: %s/%s", p.nome, p.fone, 160, p.dia, p.mes);
	}

	printf("\n\n ");
	fclose(s);
}

/* Consulta um nome na agenda */
int strcmpi( char a[], char b[] )
{
	int i = 0;
	while( toupper( a[i] ) == toupper( b[i] ) && a[i] != '\0' )
    {
		i++;
	}

	return a[i] - b[i];
}

void consultar(void)
{
	FILE *s;
	pessoa p;
	char n[31];
	int t = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(3);
	}

	printf("\nNome? ");
	gets(n);

	while ( 1 ) 
	{
		fread(&p, sizeof(pessoa), 1, s);
		if( feof( s ) ) break;
		if( strcmpi( n, p.nome ) == 0 )
		{
			printf("\n%s - %s -- Anivers%crio %s/%s", p.nome, p.fone, 160, p.dia, p.mes);
			t++;
		} 
	}

	printf("\nRegistro(s) encontrado(s): %d\n", t);
	fclose(s);
}

/* Exclui um registro da agenda */
void excluir(void)
{
	FILE *e, *s;
	pessoa p;
	char n[31];
	int t = 0;

    remove("agenda.bak");
	rename("agenda.dat", "agenda.bak");

	e = fopen("agenda.bak", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(4);
	}

	s = fopen("agenda.bat", "wb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser criado!");
		exit(5);
	}

	printf("\nNome? ");
	gets(n);

	while ( 1 ) 
	{
		fread(&p, sizeof(pessoa), 1, e);
		if( feof( e ) ) break;
		if( strcmpi( n, p.nome ) != 0 )
		{
			fwrite(&p, sizeof(pessoa), 1, s);
		}
        else 
		{
			t++;
		} 
	}

	printf("\nRegistro(s) exclu%cdo(s): %d\n\n", 161, t);
	fclose(e);
	fclose(s);
}
