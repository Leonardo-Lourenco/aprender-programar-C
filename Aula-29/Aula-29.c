
// Programa para encontrar a média de n números

#include <stdio.h>
int main()
{
     int num[10], i, n, sum = 0, media;

     printf("Número de Elementos: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Valores%d: ",i+1);
          scanf("%d", &num[i]);
          
          // adicionando inteiros inseridos pelo usuário à variável de soma
          sum += num[i];
     }

     media = sum/n;
     printf("Average = %d", media);

     return 0;
}
