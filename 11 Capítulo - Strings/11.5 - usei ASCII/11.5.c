/*11.5 - Faça um prorama que solicite uma senha ao usuário e, caso a senha fornecida seja a palavra ABRACADABRA, apresente a mensagem OK.
Seu programa deve diferenciar maiúsculas de minúsculas.*/ 

#include <stdio.h>
#include <string.h>

void toToupper(char *str) 
{

    for(int i = 0; str[i]; i++) 
    {
        str[i] = toupper(str[i]);
    }
}

int main() 
{
    char senha[50];

    printf("Digite sua senha: ");
    scanf("%s", senha);
	
	toToupper(senha);

    if (strcmp(senha, "ABRACADABRA") == 0) 
    {
    	printf("\nOK\n");
    } else {
        printf("\nSenha n%co encontrada!\n", 198);
    }

    return 0;
}
