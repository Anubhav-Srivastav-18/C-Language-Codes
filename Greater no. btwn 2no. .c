#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf("Enter Value of a :");
	scanf("%d",&a);
	printf("Enter Value of b :");
	scanf("%d",&b);
	printf("Enter Value of c :");
	scanf("%d",&c);
	printf("Enter Value of d :");
	scanf("%d",&d);
	
    if (a>b && a>c && a>d)
    {
    	printf("The greatest of all is a %d",a);
	}
	else if (b>a && b>c && b>d) 
	{
	printf("The greatest of all is b %d",b);
}
else if (c>a && c>b && c>d) 
	{
	printf("The greatest of all is c %d",c);
}
else if (d>a && d>c && d>b) 
	{
	printf("The greatest of all is d %d",d);
}
	return 0;
	
	
	
}
