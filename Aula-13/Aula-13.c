#include<stdio.h> 

/* Setença IF / ELSE
 * 
 * if (condição){
 * 
 * 
 *    -> Faz algo
 * 
 * 
 * } else {
 * 
 *    -> Faz algo
 * 
 * 
 * }
 * 
 * 
 * */


int main(){ 
	
	
	float nota;
	
	printf("Informe a nota do aluno:  ");
	scanf("%f", &nota);
	
	if( nota > 10.1){
		
		puts("Aluno APROVADO"); 
		
		 
		
		}else{
		
		  puts("REPROVADO");
		
		}
		
	return 0; 
	
	}
