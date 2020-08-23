#include<stdio.h> 

// Operadores de ATRIBUIÇÃO

#define VALOR 2 // Uma constante

float  y = 4.23;

int main(){ 
	
	int  x  = 10; // Variavel local
	
	
	int soma = 0;
	float soma2 = 0;
	
	soma = VALOR  + x; // 2 + 10 = 12
	
	soma2 = x + y; // 10 +  4.23
	
	
	
	printf("A soma dos valores é: %i \n", soma);
	
	printf("A soma dos valores é : %.3f: \n", soma2);
	
	
	
	return 0; 
	
	} 
