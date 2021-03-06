/*6.1 - O algoritmo apresentado na Figura 6.6, baseado em soma simples, não detecta erros de digitação causados por permutação de digitos.
Uma versão mais robusta pode ser obtida usando soma ponderada, em que cada dígito é multiplicado por sua posição.
Implemente essa nova versão do algoritmo.

Minha interpretação foi que para manter mais seguro na hora de consultar a quantidade de digitos no banco de dados. Por exemplo:
todo cartão tem 4 números, então, não será aceitável mais digitos do que 4 e nem menos. 

O algoritmo do livro é esse:

digver.c - calcula digito verificador

#include <stdio.h>

int main(void){

	int n, s, r, d;

	printf("Numero? ");
	scanf("%d", &n);

	s = 0;

	while( n > 0 ){
	
		r = n % 10;
		n /= 10;     // equivalente a n = n / 10
		s += r;		 // equivalente a s = s + r	

	}

	d = s % 10;

	printf("DV = %d\n", d);

	return 0;

} 
*/

#include <stdio.h>

int main(void)
{

	int numero_cartao, soma_numeros_cartao, posicao, pega_resto, resultado;

	printf("Qual %c o n%cmero do cart%co? ", 130, 163, 198);
	scanf("%d", &numero_cartao);

	soma_numeros_cartao = 0;
	posicao = 1;

	while( numero_cartao > 0 )
	{
	
		pega_resto = numero_cartao % 10;                                      // Aqui ele pega resto que é sempre igual ao último número do cartão. Exemplo: Número do cartão: 5713, resto 3
		numero_cartao = numero_cartao / 10;                                   // Aqui ele atualiza o número atual, ou seja, peguei o último número na operação anterior e agora estou retirando ele da próxima operação. Exemplo: Número: 5713, agora 571  
		soma_numeros_cartao = soma_numeros_cartao + pega_resto * posicao;	  // Aqui ele soma os números totais da conta e multiplica pela posicao. Exemplo: 5713. Ele faz: 5+7+1+3.	
		posicao++;

	}

	resultado = soma_numeros_cartao % 10;

	printf("D%cgito verificador: %d\n", 161, resultado);

	return 0;

}

