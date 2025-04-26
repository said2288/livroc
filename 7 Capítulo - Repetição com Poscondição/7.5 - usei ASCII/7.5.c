/*7.5 - Escolha um programa que você tenha feito anteriormente e altere-o de modo que,
ao final, o usuário tenha a opção de repetir o processo. Fiz a escolha do exercício 7.1.*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{ 

    float primeira_nota, segunda_nota, media;

    do
    {

        puts("\nDigite suas notas entre o 0 e 10 \n");
        printf("Digite sua primeira nota. ");
        scanf("%f", &primeira_nota);

        printf("Digite sua segunda nota. ");
        scanf("%f%*c", &segunda_nota);

        media = (primeira_nota + segunda_nota) / 2;

        printf("Sua M%cdia calculada: %.2f\n", 130, media);
        printf("Deseja refazer o processo?(s/n)?\n");

    } while (toupper(getchar()) == 'S');

    return 0;
}
