#include <stdio.h>
int main ()
{
	char ch='S';
	printf("the character is %c\n", ch);
	printf("the value of ch is %d\n", ch);
	
	if (ch>=97 && ch<=112)
	{
		printf("the ch is lowercase\n");
	}
	else {
		printf("the ch is not lower case\n");
		
	}
}
