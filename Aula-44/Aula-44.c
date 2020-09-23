
#include <stdio.h>

// PONTEIROS E STRINGS

int main(void)
{
	
	char name[] = "Coffee Tag";
	
	
	printf("%c", *name);
	printf("%c", *(name+1));
	printf("%c", *(name+7));
	
	char *namePtr;
	
	namePtr = name;
	
	printf("%c", *namePtr);
	printf("%c", *(namePtr+1));
	
}
