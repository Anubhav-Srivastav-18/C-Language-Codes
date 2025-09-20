#include <stdio.h>
int main ()
{
	int age;
	
	printf("Enter your age : ");
	scanf("%d", &age);

	if (age>60)
	{
		printf("You can drive Also you are a senior citizen");
	}
	else if(age<18)
	{
		printf("you cant drive you are under age ");
	}
	else if(age>18)
	{
		printf("you can drive ");
	}
	return 0;
 } 
