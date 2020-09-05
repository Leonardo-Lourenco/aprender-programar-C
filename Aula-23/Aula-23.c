#include<stdio.h> 

/* 
   
   SOMA DE NÚMEROS NATURAIS

	Neste exemplo, você aprenderá a calcular a soma dos números naturais inseridos pelo usuário.
    
    Os números positivos 1, 2, 3 ... são conhecidos como números naturais. A soma dos números naturais até 10 é:

    soma = 1 + 2 + 3 + ... + 10

 

  */


int main(){ 

	int n, i, soma =0;
	
	printf("Informe um valor:  ");
	scanf("%i", &n);
	
	for(i = 1; i <=n; i++){
			
			soma += i;
		
		
		}
		
	printf("SOMA = %i", soma);	



   return 0;
}
