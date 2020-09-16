

/*
	// FUNÇÃO RECURSIVA
	
	Uma função que chama a si mesma é conhecida como função recursiva. E, essa técnica é conhecida como recursão.
	
	
	void recursiva ()
	{
		... .. ...
		recursiva();
		... .. ...
	}

	int main ()
	{
		... .. ...
		recursiva();
		... .. ...
	}
	
	
	A recursão continua até que alguma condição seja atendida para evitá-la.
	
	Para previnir a recursão infinita , usá-se a instrução IF / ELSE
	
	 
 
  */
  
  
  // Exemplo: soma de números naturais usando recursão
 
  
#include <stdio.h>

int soma(int n);

int main()
{
	
	int num, resultado;
	
	printf("Informe  um valor:   ");
	scanf("%d", &num);
	
	resultado = soma(num);
	
	printf("Soma = %d", resultado);
	
	
	
	return 0;
	
}


int soma(int n)
{
	
	if(n != 0){
		
		// soma() chama ela mesma
		return n + soma(n-1);
		
		
		}else{
			
			return n;
			
			}
	
}



