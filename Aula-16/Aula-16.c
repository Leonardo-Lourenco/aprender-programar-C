
#include<stdio.h> 

/* 
 * 
 * Programa C para verificar se um número é par ou ímpar
 * 
 * 
 * */


int main(){ 
	
	int num;
	
	printf("Informe um valor:  ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		
		printf("%i este número é PAR", num); // 2 / 2 = 0
		
		}else{
			
			printf("%i este valor é ÍMPAR", num); 
			
			
			}
	
	
	
	return 0; 
	
	}
