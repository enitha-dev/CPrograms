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
	if(x > y && x > z)
	{
		printf ("x is the greatest nummber");
	}
	else if(y > x && y > z)
	{
		printf ("y is the greatest number");
	}
	else if (z > x && z > y )
	{
		printf ("z is the greatest number");
	}
	else if ((x == y )&& (x > z))
	{
		printf("x any y are same and also the greatest number");
	}
	else if ((x == z) && (x > y))
	{
		printf ("x and z are same and also the greatest number");
	}
	else if ((y == z)&&(y > x))
	{
		printf("y and z are same and also the greatest number");
	}
	return 0;
}