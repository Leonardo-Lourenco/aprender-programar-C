#include<stdio.h> 

/* 
 * 
 * // OPERADOR TERNÁRIO 
 * 
 * 
 * // Condição1 ? FAZ ALGO : Condição2: FAZ ALGO
 *  
 * 
 * Programa para verificar se o valor é  par ou ímpar usando o operador ternário
 * 
 * 
 * */


int main(){ 
	
	
	int num;
	
	printf("Digite um valor:  ");
	scanf("%i", &num);
	
	(num % 2 == 0) ? printf("%i este valor é PAR", num) : printf("%i este número é ÍMPAR", num);
	
	
	return 0; 
	
	}
