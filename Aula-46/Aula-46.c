
#include <stdio.h>
#include <string.h>

// Neste tutorial, você aprenderá a usar a função strcpy ()  para copiar strings

int main() {
  
	char str1[20] = "Leo Coffee Tag";
	char str2[20];
	
	strcpy(str2, str1);
	
	puts(str2);
   

   return 0;
}
