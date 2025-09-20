#include <stdio.h>
int main ()
 
 {
 	int number;
 	
 	printf("Enter the number :");
 	scanf("%d", &number);
 	
 	if (number<100 & number>40)
 	{
 		printf("student has passed");
	 }
 	else if (number<40 & number>33)
 	{
 		printf("the student has barely passed");
 		
	 }
	 else 
	 {
	 	printf("the student is failed");
	 }
	 
	 
 	return 0;
 }
