#include<stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	if ( x % 2 == 0)
	{
		printf ("it's an even number");
	}
	else if ( x % 2 == 1)
	{
		printf ("it's a odd number");
	}
	return 0;
}