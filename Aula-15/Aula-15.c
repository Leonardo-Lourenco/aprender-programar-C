#include<stdio.h> 

/* Setença IF / ELSE
 * 
 * Exercício para verificar se o valor informado pelo usuário
 * é maior que 10
 * 
 * 
 * */


int main(){ 
	
	int number;
	
	printf("Informe um valor:  ");
	scanf("%i", &number);
	
	if(number >= 10){
		
		printf("Valor informado é MAIOR ou IGUAL  a 10");
		
		
		} else{
			
			printf("Valor informado MENOR que 10");
			
			}
	
	
	return 0;
	
	
}
