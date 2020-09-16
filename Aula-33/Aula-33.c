
#include <stdio.h>

//Função que retrone a soma de dois valores



int somaValor(int a, int b); //Prototype da função


int main()
{
	int n1, n2, som;
	
	printf("Informe dois valores:  ");
	scanf("%d %d", &n1, &n2);
	
	som = somaValor(n1,n2);
	printf("A soma dos valores = %d", som);
	

   return 0;
}

/// Definição da função
int somaValor(int a, int b)
{
	int resultado;
	resultado = a + b;
	
	return resultado;
	
}
