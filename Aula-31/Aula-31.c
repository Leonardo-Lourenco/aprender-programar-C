#include <stdio.h>

// Programa para armazena a tempura de duas cidades durante a semana

const int CIDADE = 2; // 2 linhas
const int SEMANA = 7; // 7 colunas


int main()
{
  int temperatura[CIDADE][SEMANA];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CIDADE; ++i)
  {
    for (int j = 0; j < SEMANA; ++j)
    {
      printf("Cidade %d, Dia %d: ", i + 1, j + 1);
      scanf("%d", &temperatura[i][j]);
    }
  }
  printf("\nEXIBNDO INFORMAÇÕES: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < CIDADE; ++i)
  {
    for (int j = 0; j < SEMANA; ++j)
    {
      printf("Cidade %d, Dia %d = %d\n", i + 1, j + 1, temperatura[i][j]);
    }
  }
  
  
  return 0;
}
