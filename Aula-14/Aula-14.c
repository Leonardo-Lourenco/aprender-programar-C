#include<stdio.h> 

/* SWITCH
 * 
 * switch(CONDIÇÃO) {
 * 
 * 	case 1 FAZ ALGO :  break;
 *  case 2 FAZ ALGO :  break; 
 *  case 3 FAZ ALGO :  break;
 *  
 *  default : case;
 * 
 * }
 * 
 * 
 * */


int main(){ 
	
	
	int num;
	
	printf("Informe um valor entre 1 e 5:  ");
	scanf("%i", &num);
	
	
	switch(num){
		
		case 1: printf("Este é o número 1 ");
		case 2: printf("Este é o número 2 "); break;
		case 3: printf("Este é o número 3 "); break;
		case 4: printf("Este é o número 4 "); break;
		case 5: printf("Este é o número 5 "); break;
		
		default: printf("Número informado não está entre 1 e 5");
		
		
		
		}


	return 0; 
	
	}
