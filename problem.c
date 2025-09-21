#include <stdio.h>
int main ()
{
	int m1,m2,m3;
	printf("enter m1 :");
	scanf("%d", &m1);
	printf("enter m2 :");
	scanf("%d", &m2);
	printf("enter m3 :");
	scanf("%d", &m3);
	printf("the marks are %d %d and %d ", m1,m2,m3);
	
	if (m1<33 || m2<33 || m3<33)
	{
		printf("the student is failed\n");
	}
	else if ((m1+m2+m3)/3 < 40)
	{
		printf("the student is failed\n", m1,m2,m3);
		
	}
	else {
		printf(" you are passed");
	}
	
	return 0;
}
