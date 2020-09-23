
// Programa para calcular a soma dos elementos informados pelo usuário
// Utilizando calloc () e free ()

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int n, i, *ptr, soma = 0;
	
	printf("Informe o número de ELEMENTOS:  ");
	scanf("%i", &n);
	
	ptr = (int*) calloc(n, sizeof(int)); 
	
	if(ptr == NULL)
	{
		printf("Error, espaço na memória não alocado.");
		exit(0);
	}

	printf("Informe os valores  ");
	for(i = 0; i < n; i++ )
	{
		scanf("%i", ptr + i);
		soma += *(ptr + i );
	}
	
	printf("SOMA  %i", soma);
	
	free(ptr);

    return 0;
}
