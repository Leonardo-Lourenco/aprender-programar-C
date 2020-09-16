
#include <stdio.h>

// Programa para inverter uma Frase


void inverterFrase();

int main() {
		
		
	printf("Informe uma frase:  ");
	inverterFrase();
		
	
    return 0;
    
	}
	
void inverterFrase(){
	
	char c;
	scanf("%c", &c);
	
	if(c != '\n')
	{
		
		inverterFrase();
		printf("%c",c);
		
	}
	
	
	}	
