#include<stdio.h>
int main ()
{
	float x;
	printf ("enter the buying price");
	scanf ("%f",&x);
	float y;
	printf ("enter the selling price");
	scanf ("%f",&y);
	float profit = y-x;
	printf ("profit is %f",profit);
	float profitpercentage = profit*100/y;
	printf (" profit percentage is %f", profitpercentage );
	return 0;
}