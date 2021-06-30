/*4.3 - Dados dois números reais e um caractere (+, -, *, /) representando uma operação a ser efetuada com eles,
calcule e informe o resultado da operação.*/

#include <stdio.h>

int main(void)
{

	float numero_um, numero_dois, resultado;
	char operacao;

	printf("Escolha qual operacao a ser feita, inserindo apenas o caracter:\n+ = Soma\n- = Subtracao\n* = Multiplicacao\n/ = Divisao\n");
	scanf("%c", &operacao);

	printf("Digite o primeiro numero para ser calculado. ");
	scanf("%f", &numero_um);

	printf("Digite o segundo numero para ser calculado. ");
	scanf("%f", &numero_dois);

	switch( operacao )
	{
	
		case '+': resultado = numero_um + numero_dois; break;

		case '-': resultado = numero_um - numero_dois; break;

		case '*': resultado = numero_um * numero_dois; break;

		case '/': resultado = numero_um / numero_dois; break;

		default: printf("Nenhuma das operacoes anteriores\n"); break;

	}

	printf("O valor calculado foi de: %.2f\n", resultado);

	return 0;

}
