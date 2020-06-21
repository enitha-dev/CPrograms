#include<stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	if( x % 4 == 0 && x % 100 != 0)
	{
		printf ("it's a leap year");
	}	
	else if ( x % 100 == 0)
		{
			if ( x % 400 == 0)
			{
				printf ("it's a leap year");
			}
			else 
			{
				printf ("it's not a leap year");
			}
		}
	else 
	{
	 printf ("it's not a leap year");	
	}
	
	return 0;
}