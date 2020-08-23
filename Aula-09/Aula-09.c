
#include<stdio.h> 

int main(){  
	
	int valor1, valor2, soma, sub, mult, div;
	
	
	printf("Informe o primeiro valor:  ");
	scanf("%i", &valor1);
	
	printf("Informe o segundo valor:  ");
	scanf("%i", &valor2);
	
	printf("\n");
	
	
	soma = valor1 + valor2;
	sub = valor1 - valor2;
	mult = valor1 * valor2;
	div = valor1 / valor2;
	
	printf("SOMA:  %i \n", soma);
	printf("SUBTRAÇÃO:  %i \n", sub);
	printf("MULTIPLICAÇÃO:  %i \n", mult);
	printf("DIVISÃO:  %i \n", div);
	
	
	return 0; 
	
	} 
