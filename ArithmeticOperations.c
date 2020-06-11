#include <stdio.h>
int main ()
{
	float x = 6;
	float y = 10;
	float sum;
	sum = x +y;
	printf ("the addition of %f and %f is %f \n",x,y,sum);
	float a = 8;
	float b = 5;
	float sub;
	sub = a-b;
	printf ("the subraction of %f and %f is %f \n",a,b,sub);
	float multiplication;
	multiplication = sum * sub;
	printf ("the multiplication of %f and %f is %f \n",sum,sub,multiplication);
	float division;
	division = sum / sub;
	printf ("the division of %f and %f is %f",sum,sub,division);
	return 0;
}