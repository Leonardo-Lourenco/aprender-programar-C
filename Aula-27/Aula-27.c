#include<stdio.h> 

/* 
    Sequência de Fibonacci
    
    Neste exemplo, você aprenderá a exibir a sequência de Fibonacci dos primeiros n números (inseridos pelo usuário).
    
    
	A sequência de Fibonacci é uma sequência em que o próximo termo é a soma dos dois termos anteriores. 
	Os primeiros dois termos da sequência de Fibonacci são 0 seguidos por 1.
	
	A sequência de Fibonacci: 0, 1, 1, 2, 3

 
  */
  
  
int main() {

	
	int i, n, t1 = 0, t2 = 1, proxTermo;
	
	
	printf("Informe a quantidade de termos:  ");
	scanf("%i", &n);
	
	
	printf("\n SERIE DE FIBONACCI \n");
	
	for(i = 1; i <= n; i++){
		
		printf("%i, ", t1);
		proxTermo = t1 + t2; // somando o primeiro termo mais o segundo termo t1 + t2 = 1
		t1 = t2; // 1
		t2 = proxTermo; // 0 1 1   = t1 = 1 t2 = 1  // 0 1 1  
			
		
		}
	
   return 0;
}

