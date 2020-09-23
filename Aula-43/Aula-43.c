
// Strings e Função

#include <stdio.h>

void letras(char str[]); // Prototipo da função


int main()
{
	char str[50];
	
	printf("Informe o seu nome:  ");
	fgets(str, sizeof(str), stdin);
	
	letras(str);
	
	
	return 0;
}


// Definir a função em si

void letras(char str[])
{
	printf("Seu nome é:  ");
	puts(str);
	
}
