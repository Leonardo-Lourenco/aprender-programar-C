#include<stdio.h> 

// Calcular Média


int main(){ 
	
	float nota1, nota2, nota3, media;
	
	printf("Informe a PRIMEIRA NOTA:  ");
	scanf("%f", &nota1);
	
	printf("Informe a SEGUNDA NOTA:  ");
	scanf("%f", &nota2);
	
	printf("Informe a TERCEIRA NOTA:  ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	printf("\n");
	printf("A nota final do aluno É: %.2f ", media);
		
	return 0; 
	
	}
