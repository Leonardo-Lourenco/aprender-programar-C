

/*
 
 
Neste tutorial, você aprenderá a passar endereços e ponteiros como argumentos para funções.
 
 
 
Na programação C, também é possível passar endereços como argumentos para funções.

Para aceitar esses endereços na definição da função, podemos usar ponteiros. 
* 
É porque os ponteiros são usados ​​para armazenar endereços. 

  */

#include <stdio.h>

// PONTEIROS E FUNÇÕES

void numeros(int *n1, int *n2); 

int main()
{
	int num1 = 5, num2 = 10;
	
	numeros(&num1, &num2);
	
	printf("num1 = %i\n", num1);
	printf("num2 = %i\n", num2);
	
	
   return 0;
}


void numeros(int* n1, int* n2)
{
	int aux;
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
	
}
