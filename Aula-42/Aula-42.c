
#include <stdio.h>

//INTRODUÇÃO STRINGS

int main()
{
	char letras[30];
	
	//printf("Informe o seu nome:  ");
	//scanf("%s", letras);
	
	//printf("O seu nome é %s: ",letras);
	
	
	printf("Informe o seu nome:  ");
	fgets(letras, sizeof(letras), stdin); 
	printf("Seu nome:  ");
	puts(letras);
		
	return 0;
}




