#include<stdio.h>

// Tipos de dados


int main(){
	
	char b = 'l'; // Tamanho é 1 byte
	short c = -20; // Tamanho de 2 bytes
	int num = 30; // Tamnho 2 bytes
	unsigned int num2 = 126; // Tamanho 2 bytes
	long int num3 = 987456; // Tamanho da memória de 4 bytes
	float num4 = 20.033; //Tamanho de 4 bytes
	double num5 = 987456123.987456123; // Tamnho 8 bytes
	
	
	printf("A letra é:  %c  \n", b);
	printf("O valor short é:  %i", c);
	printf("O valor do tipo INT é:  %i \n", num);
	printf("O valor é:  %i \n", num2);
	printf("O valor do tipo LONG INT é:  %li \n", num3);
	printf("O valor do tipo FLOAT é:  %.3f \n", num4); // Para limitar as casas decimas: %.3f 
	printf("O valor do tipo DOUBLE é:  %.lf \n", num5); // Caso voce queira converter de FLOAT PARA INT só usar o ponto:  %.lf
	
	return 0;
	
	}
