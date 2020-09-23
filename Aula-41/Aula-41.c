
/*

Se a memória alocada dinamicamente for insuficiente ou mais do que o necessário, 
você pode alterar o tamanho da memória alocada anteriormente usando a realloc()função. 


  */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr, i, n1, n2;
	
	
	printf("Informe o tamanho:  ");
	scanf("%i", &n1);
	
	
	ptr = (int*) malloc(n1 * sizeof(int)); // alocaou espaço na memória
	
	
	printf("Endereço de momória alocado");
	
	for(i = 0; i < n1; i++)
		
		printf("%u\n", ptr + i);
		
	printf("\nInforme o novo tamanho:  ");
	scanf("%i", &n2);
	
	ptr = realloc(ptr, n2 * sizeof(int));
	
	printf("Novo endereço alocado na memória");
	
	for(i = 0; i < n2; i++)
	
		printf("%u\n", ptr + i);
		
	
	free(ptr);
		
		
	
	return 0;
}
