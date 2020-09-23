
#include <stdio.h>
#include <string.h>

//  Função strcat () para juntar duas strings.

int main() {
	
	char str1[100] = "Bem vindo", str2[] = "Canal Coffee Tag";
	
	strcat(str1, str2);
	
	puts(str1);
	
	puts(str2);
	
	 return 0;
}
