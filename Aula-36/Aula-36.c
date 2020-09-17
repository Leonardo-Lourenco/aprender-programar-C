
#include <stdio.h>


int main() 
{
	/*
	//int numero = 5;
	
	//printf("numero:  %i\n", numero);
	
	//printf("O enedreço dp NUMERO: %p", &numero);
	
	
	
	//int* p;
//int *p1;
	//int * p2;
	
	//int* p1, p2;
	
	//int* pontero, c;
	//c = 5;
	//ponteiro = &c;
	
	*/
	
	
	int* ponteiroValor, numero;
	
	numero = 22;
	
	printf("Endereço do numero %p\n", &numero);
	printf("Valor numero: %d\n\n", numero);
	
	
	ponteiroValor = &numero;
	
	printf("Endereço do ponteiro : %p\n", ponteiroValor);
	printf("Conteúdo do ponteiro: %d\n\n", *ponteiroValor);
	
	
	numero = 11;
	
	printf("Endereço do ponteiro: %p\n", ponteiroValor);
	printf("Conteúdo do ponteiro: %d\n\n",*ponteiroValor);
	
	*ponteiroValor = 2;
	
	printf("Endereço do numero: %p\n", &numero);
	printf("Valor do número: %d\n\n",numero);	
	
	
	return 0;
    
	}
