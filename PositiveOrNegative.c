#include <stdio.h>
int main ()
{
	float x;
	printf("enter the number");
	scanf("%f",&x);
	if (x > 0)
	{
		printf ("the given number is positive");
	}
	else if  (x == 0)
	{
		printf ("the given number is neutral");
	}
	else 
	{
		printf("the given number is negative");
	}
	return 0;
}