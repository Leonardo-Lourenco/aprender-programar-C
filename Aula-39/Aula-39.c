
#include <stdio.h>
#include <stdlib.h> 

// Programa para calcular a soma de dois valores informado pelo usuário usando:
  // malloc () e free ()


int main()
{
	
	int n , i, *ptr, soma = 0;
	
	printf("Infoeme a quantidade de elementos: ");
	scanf("%i", &n);
	
	ptr = (int*) malloc(n * sizeof(int));
	
	if(ptr == NULL){
		
		printf("Erro, memoria não alocada");
		exit(0);
		
		
		}
		
	printf("Informe os valores:  ");
	for(i =0; i < n; i++){
		
		scanf("%i", ptr + 1);
		soma += *(ptr + i);
		
		
		}
	
	printf("SOMA = %i", soma);
	
	// Deletar espaço alocado na memoria
	free(ptr);
	
	
  
     return 0;
}
