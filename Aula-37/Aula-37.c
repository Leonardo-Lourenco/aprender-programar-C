
#include <stdio.h>


// Ponteiros com VETOR


int main() 
{
	/*
	int valores[4];
	int i;
	
	for(i = 0; i < 4; i++){
		
		printf("& x [%i] = %p\n",i,  &valores[i]);
		
		
		}
		
		printf("Endereços dos valores: %p", valores);
		
		
	
	
	// Ponteiros e vetor
	// somar dois valores
	
	
	int i, x[6], soma = 0;
	
	printf("Informe 6 valores :  ");
	
	for(i = 0; i < 6; i++){
		
		scanf("%i", x + 1);
	    //scanf("%i", &x[i]);
		
		
		soma += *(x+1);
		
		//soma = += x[i];
		
		
		}
		
		printf("SOMA = %i", soma);
	
	*/
	
	
	
	int  x[5] = {1,2,3,4,5};
	
	int* ponteiro;
	
	// Ponteiro para acessar a SEGUNDA POSIÇÃO do VETOR ou seja o valor
	
	ponteiro = &x[2];
	
	printf("*Ponteiro = %i \n", *ponteiro); //3
	printf("*(Ponteiro+1) = %i \n", *(ponteiro+1)); //4
	printf("*(Ponteiro-1) = %i" , *(ponteiro-1)); // 2
	
	
	
	
	
	
   return 0;
   
}
