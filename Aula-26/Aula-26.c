#include<stdio.h> 

/* 
    Sequência de Fibonacci
    
    Neste desafio, você aprenderá a exibir a sequência de Fibonacci dos primeiros n números (inseridos pelo usuário).
    
    
	A sequência de Fibonacci é uma sequência em que o próximo termo é a soma dos dois termos anteriores. 
	Os primeiros dois termos da sequência de Fibonacci são 0 seguidos por 1.
	
	A sequência de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21 

 
  */
  
  
int main() {

	int i, n ,t1 = 0, t2 = 1 , proxTermo;
	
	printf("Informe a quantidade de termos:  ");
	scanf("%i", &n);
	
	printf("SERIE DE FIBONACCI \n  ");
	
	
	for (i = 1; i <= n; ++i) {  // Percorrendo os valores
		printf("%i, ", t1);;
		
		proxTermo = t1 + t2; // 0, 1 , proxTermo = 1 
		t1 = t2;
		t2 = proxTermo;
				
		}

   return 0;
}
