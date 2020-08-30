#include <stdio.h>

/* 
 * 
 * Programa para verificar se a letra é VOGAL ou CONSOANTE
 * 
 * 
 * */



int main() {
	
	
	char c;
	
	int letraPequena, letraGrande;
	
	//  a  e i o u
	
	printf("Informe uma letra:  ");
	scanf("%c", &c);
	
	
	letraPequena = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 
		
	letraGrande = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); 
	
	if(letraPequena || letraGrande){
		
		printf("%c é uma VOGAL", c);
		
		
		} else{
			
			printf("%c é CONSOANTE",c);
			
			
			}
	
	
	
	 
	
	
	
	
	return 0;
	
	
}
