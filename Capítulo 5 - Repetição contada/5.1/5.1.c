/*5.1 - Dadas as notas dos alunos de uma turma, informe a média da turma. 
O programa deve funcionar como o indicado a seguir:*/

#include <stdio.h>

int main(void)
{

	int alunos;
	float notas, media = 0;

	printf("Quantos alunos ha na sala? ");
	scanf("%d", &alunos);

	for( int i = 1; i <= alunos; i++ )
	{
	
		printf("%d nota? ", i);
		scanf("%f", &notas);

		media = media + notas;

	}

	media = media / alunos;
	
	printf("A media da turma foi de: %.2f\n", media);

	return 0;

}
