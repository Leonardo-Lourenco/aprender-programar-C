
#include<stdio.h> 

/* 
    TABUADA DE MULTIPLICAÇÃO ATÉ 10
    
    
    Por exemplo, se você informar: 9
	9 * 1 = 9
	9 * 2 = 18
	9 * 3 = 27
	9 * 4 = 36
	9 * 5 = 45
	9 * 6 = 54
	9 * 7 = 63
	9 * 8 = 72
	9 * 9 = 81
	9 * 10 = 90
    
	

 

  */


int main(){ 
	
	int n,i;
	
	printf("Informe o número para calcular a tabuada:  ");
	scanf("%i", &n);
	
	for(i = 1; i <=12; i++){
		
			printf("%i * %i = %i \n", n, i, n * i);
		
		}
	
	
	
	return 0;
}
