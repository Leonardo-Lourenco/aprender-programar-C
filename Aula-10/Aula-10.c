#include<stdio.h> 

int main(){  
	
	int maca, banana;
	float valorMaca = 2.99, valorBanana = 3.40;
	
	
	printf("Informe quantas maças você deseja?  ");
	scanf("%i", &maca);
	
	printf("Informe quantas bananas vocẽ deseja?  ");
	scanf("%i", &banana);
	
	
	float QTDmaca = maca * valorMaca;
	float QTDbanana = banana * valorBanana;
	
	printf("\n");
	
	printf("Preço final das Maças:  %.2f\n", QTDmaca);
	printf("Preço final das bananas %.2f\n", QTDbanana);
	

	return 0; 
	
	} 

