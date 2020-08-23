#include<stdio.h> 

// Operadores de ATRIBUIÇÃO


#define VALOR 4; 

int y = 4; // Variavel global


int main(){ 
	
	int x = 10;  // Variavel local só se usa dentro de uma determinada função
	
	int soma = 0;
	
	float soma2 = 0;
	
	soma = VALOR + x;
	
	printf("A soma dos valores é:  %i \n", soma);
	
	
	
	return 0; 
	
	}
