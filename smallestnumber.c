#include <stdio.h>
int main ()
{
	float x;
	printf("enter the first number");
	scanf("%f",&x);
	float y;
	printf("enter the second number");
	scanf ("%f",&y);
	float z;
	printf("enter the third number");
	scanf("%f",&z);
	if(x < y && x < z)
	{
		printf ("x is the smallest nummber");
	}
	else if(y < x && y < z)
	{
		printf ("y is the smallest number");
	}
	else if (z < x && z < y )
	{
		printf ("z is the smallest number");
	}
	else if ((x == y )&& (x < z))
	{
		printf("x any y are same and also the smallest number");
	}
	else if ((x == z) && (x < y))
	{
		printf ("x and z are same and also the smallest number");
	}
	else if ((y == z)&&(y < x))
	{
		printf("y and z are same and also the smallest number");
	}
	return 0;
}