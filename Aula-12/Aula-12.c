

#include<stdio.h> 

/* Setença IF
 * 
 * if (condição){
 * 
 * 
 *    -> Faz algo
 * 
 * 
 * }
 * 
 * 
 * */


int main(){  
	
	int valor1, valor2;
	
	
	//printf("INforme o primeiro valor:  ");
	//scanf("%i", &valor1);
	
	//printf("INforme o segundo valor:  ");
	//scanf("%i", &valor2);
	
	
	printf("Digite 2 numeros:  "); scanf("%i %i", &valor1, &valor2);
		
	
	if(valor1 % valor2 == 0){
		
		  printf("Valor %i é divisivel por %i", valor1, valor2);
		
		
		}
	
	
	
	
	
	
	
	
	
	return 0; 
	
	}
