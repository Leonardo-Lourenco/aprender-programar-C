
#include<stdio.h> 

/* 
    FATORIAL DE UM NÚMERO 
    
	Neste desafio, você aprenderá a calcular o fatorial de um número inserido pelo usuário.
	
	O fatorial de um número positivo ( n ) é dado por:

	fatorial de n (n!) = 1 * 2 * 3 * 4....n
	
	
	O fatorial de um número negativo não existe.

 

  */


int main(){ 
	
	int n, i, fact = 1;
	
	
	printf("Informe um valor: ");
	scanf("%i", &n);
	
	
	if(n < 0){
		
		printf("Fatorial de número NEGATIVO não existe");
		
		}else{
		
			for(i = 1; i <=n; i++){
				
					fact *= i;
				
				}
				
			printf("O FATORIAL  de %i é:  %i", n, fact);
		
		}
	
	
	
	
	return 0;
}
