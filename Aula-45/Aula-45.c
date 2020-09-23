
#include <stdio.h>
#include <string.h>

//A função strlen () calcula o comprimento de uma determinada string.


int main()
{
   char a[20] = "Programacao";
   char b[20] = {'P', 'r', 'o','g','r','a','m', 'a', 'c', 'a', '0'};
   
   printf("Tamanho da PALAVRA A = %zu \n", strlen(a) );
   printf("Tamanho da PALAVRA B = %zu \n", strlen(b) );
   
    return 0;
}
