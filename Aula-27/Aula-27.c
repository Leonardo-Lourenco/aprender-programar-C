#include<stdio.h> 

/* 
    
    Neste tutorial, você aprenderá a trabalhar com arrays. Você aprenderá a declarar, 
    inicializar e acessar elementos de um array com a ajuda de exemplos.
     
    Um VETOR é uma variável que pode armazenar vários valores. Por exemplo, 
    se você deseja armazenar 100 inteiros, pode criar uma matriz para ele.
    
    int num[100]; 
    
    É importante observar que o tamanho e o tipo de uma VETOR não podem ser alterados depois de declarada.
    
    
    1 -  É possível inicializar um array durante a declaração. Por exemplo,
    
    int num[5] = {19, 10, 8, 17, 9};
  
    
    
    
    
    
    2 - Você também pode inicializar um array como este.
    
    int mnum[] = {19, 10, 8, 17, 9};
    
    
    Aqui, não especificamos o tamanho. No entanto, o compilador sabe que seu tamanho é 5, pois o estamos inicializando com 5 elementos.
    
    
    SAÍDA DO PROGRAMA:
    
    num [0] é igual a 19
	num [1] é igual a 10
	num [2] é igual a 8
	num [3] é igual a 17
	mnum [4] é igual a 9
    
    
    Alterar o valor dos elementos da matriz
    
    int num[5] = {19, 10, 8, 17, 9}

	// Alterar valor na posição 2 para  -1
	mnum[2] = -1;

	// Alterar valor na posição 4 para 0
	num[4] = 0;
    
    
  */
  
  
  // Programa pede para informar 5 VALORES depois armazena e exibe estes valores
  
  
  int main() {
	  
	  int num[5];
	  
	  
	  printf("Informe 5 valores: ");
	  
	  for(int i =0; i < 5; i++){
		  
		  scanf("%i", &num[i]);
		  
		  }
	  
	  printf("Os valores informados são  ");
	  
	  for(int i = 0; i<5;i++){
		  
		  printf("%i\n", num[i]);
		  
		  }
	  
	  
	 
	return 0;
  
  
}
