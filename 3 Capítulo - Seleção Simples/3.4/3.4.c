/*3.4 - Dados três números, verifique se eles podem ser medidas de um triângulo e, 
se puderem, classifique o triângulo como equilátero, isósceles ou escaleno.*/

#include <stdio.h>

int main(void)
{ 

	float medida_um, medida_dois, medida_tres;

	printf("Digite a primeira medida. ");
	scanf("%f", &medida_um);

	printf("Digite a segunda medida. ");
	scanf("%f", &medida_dois);

	printf("Digite a terceira medida. ");
	scanf("%f", &medida_tres);

	if( medida_um == medida_dois &&
        medida_dois == medida_tres )
	{
	
		printf("Triangulo Equilatero\n");

	} 
	else if( medida_um != medida_dois &&
             medida_dois != medida_tres &&
 			 medida_tres != medida_um )
	{
	
		printf("Triangulo Escaleno\n");

	} 
	else 
	{
	
		printf("Triangulo Isosceles\n");

	}

	return 0;

}
