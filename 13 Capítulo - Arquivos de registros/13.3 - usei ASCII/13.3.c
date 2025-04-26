/* Com base no programa desenvolvido no exercício anterior, crie um programa para manter um cadastro de
   funcionários de uma empresa. Para cada funcionário armazene seu nome, seu salário e sua data de admissão.
   Adicione também uma opção para, dada uma faixa salarial, listar apenas os funcionários que recebem salário dentro dessa
   faixa.
 */

/* Como o exercício não me deu faixas para trabalhar, irei apenas usar essas: 
   Faixa 1: 0 -> 5.000  
   Faixa 2: 5.001 -> 10.000 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct 
{
	char nome[31];
	char salario[6];
	char dia[4];
	char mes[4];
} pessoa;

int menu(void);
void incluirFuncionario(void);
void listarFuncionarios(void);
void listarFuncionariosFaixaSalarial(void);
void consultarFuncionario(void);
void excluirFuncionario(void); 

int main(void)
{
	while ( 1 )
	{
		switch( menu() )
		{
			case 1: incluirFuncionario(); break;
			case 2: listarFuncionarios(); break;
			case 3: listarFuncionariosFaixaSalarial(); break;
			case 4: consultarFuncionario(); break;
			case 5: excluirFuncionario(); break;
			case 6: exit(0); break;
		}
	}

	return 0;
}

int menu(void) 
{
	int op;

	puts("\n1 - Incluir funcionário");
	puts("2 - Listar funcionários");
	puts("3 - Listar funcionários por faixa salarial");
	puts("4 - Consultar funcionário");
	puts("5 - Excluir funcionário");
	puts("6 - Sair");
	printf("\nOp%c%co? ", 135, 198);
	scanf("%d%*c", &op);

	return op;
}

void incluirFuncionario(void)
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
	printf("\nSal%crio? ", 160);
	gets(p.salario);
	printf("\nDia de admiss%co? ", 198);
	gets(p.dia);
	printf("\nM%cs de admiss%co? ", 136, 198);
	gets(p.mes);

	fwrite(&p, sizeof(pessoa), 1, s);
	printf("\nRegistro gravado!\n");
	fclose(s);
}

void listarFuncionarios(void)
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
			printf("\n%s - Sal%crio: %s -- Anivers%crio: %s/%s", p.nome, 160, p.salario, 160, p.dia, p.mes);
	}

	printf("\n\n ");
	fclose(s);
}

void listarFuncionariosFaixaSalarial(void)
{
	int salario = 0;
	printf("\nInforme o valor de faixa Sal%crial: ", 160);
	printf("\n Faixas dispon%cveis: \n Faixa 1: 0 at%c 5.000 \n Faixa 2: 5.001 at%c 10.000 \n", 161, 130, 130);
	scanf("%d", &salario);

	FILE *s;
	pessoa p;
	int salarioInteiro = 0;
	int registroEncontrado = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(3);
	}

	while ( 1 ) 
	{
		fread(&p, sizeof(pessoa), 1, s);

		if( feof( s ) ) break;

		salarioInteiro = atoi(p.salario);

		if( salario <= 5000 && salarioInteiro <= 5000 )
	    {
			printf("\n%s - Sal%crio: %s -- Anivers%crio: %s/%s", p.nome, 160, p.salario, 160, p.dia, p.mes);
			registroEncontrado++;
		} 
		if ( ( salario >= 5001 && salarioInteiro >= 5001 ) && ( salario <= 10000 && salarioInteiro <= 10000 ) )
	    {
			printf("\n%s - Sal%crio: %s -- Anivers%crio: %s/%s", p.nome, 160, p.salario, 160, p.dia, p.mes);
			registroEncontrado++;
		}		
	}

    if(!registroEncontrado)
	{
		printf("\nNenhum Registro encontrado nessa faixa salarial\n");
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

void consultarFuncionario(void)
{
	FILE *s;
	pessoa p;
	char n[31];
	int t = 0;

	s = fopen("agenda.dat", "rb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser aberto!");
		exit(4);
	}

	printf("\nNome? ");
	gets(n);

	while ( 1 ) 
	{
		fread(&p, sizeof(pessoa), 1, s);
		if( feof( s ) ) break;
		if( strcmpi( n, p.nome ) == 0 )
		{
			printf("\n%s - Sal%crio: %s -- Anivers%crio: %s/%s", p.nome, 160, p.salario, 160, p.dia, p.mes);
			t++;
		} 
	}

	printf("\nRegistro(s) encontrado(s): %d\n", t);
	fclose(s);
}

void excluirFuncionario(void)
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
		exit(5);
	}

	s = fopen("agenda.bat", "wb");

	if( s == NULL )
	{
		puts("Erro fatal: O arquivo não pode ser criado!");
		exit(6);
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
